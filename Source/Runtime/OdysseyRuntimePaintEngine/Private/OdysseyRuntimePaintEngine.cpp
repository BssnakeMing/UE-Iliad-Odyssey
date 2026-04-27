#include "OdysseyRuntimePaintEngine.h"

#include "FreehandShape/OdysseyFreehandShape.h"
#include "OdysseyBrushOptions.h"
#include "OdysseyRuntimePaintCanvas.h"
#include "OdysseyRuntimeToolAlgorithms.h"
#include "Proxies/OdysseyBrushColor.h"
#include "ULISLoaderModule.h"
#include "InputCoreTypes.h"
#include "UObject/Package.h"

namespace
{
const ::ULIS::eFormat GRuntimeCanvasFormat = ::ULIS::Format_BGRA8;

bool AreSmoothingOptionsEqual(const FOdysseySmoothingOptions& A, const FOdysseySmoothingOptions& B)
{
    return
        A.SmoothingMethod == B.SmoothingMethod &&
        A.SmoothingStrength == B.SmoothingStrength &&
        A.SmoothingRealTime == B.SmoothingRealTime &&
        A.SmoothingCatchUp == B.SmoothingCatchUp;
}

bool AreToolSettingsEqual(const FOdysseyRuntimeToolSettings& A, const FOdysseyRuntimeToolSettings& B)
{
    return A.Color == B.Color &&
        FMath::IsNearlyEqual(A.Size, B.Size) &&
        FMath::IsNearlyEqual(A.Opacity, B.Opacity) &&
        FMath::IsNearlyEqual(A.Hardness, B.Hardness) &&
        FMath::IsNearlyEqual(A.Tolerance, B.Tolerance) &&
        FMath::IsNearlyEqual(A.FreehandStep, B.FreehandStep) &&
        A.bFreehandAdaptativeStep == B.bFreehandAdaptativeStep &&
        A.FreehandInterpolationType == B.FreehandInterpolationType &&
        A.bFreehandSmoothingEnabled == B.bFreehandSmoothingEnabled &&
        AreSmoothingOptionsEqual(A.FreehandSmoothingOptions, B.FreehandSmoothingOptions);
}
}

FOdysseyRuntimePaintEngine::FOdysseyRuntimePaintEngine()
{
}

FOdysseyRuntimePaintEngine::~FOdysseyRuntimePaintEngine()
{
    if (FreehandShape.IsValid())
    {
        FreehandShape->OnPathBeginDelegate().RemoveAll(this);
        FreehandShape->OnPathToDelegate().RemoveAll(this);
        FreehandShape->OnPathEndDelegate().RemoveAll(this);
        FreehandShape->OnPathResetDelegate().RemoveAll(this);
    }
}

void FOdysseyRuntimePaintEngine::SetCanvas(UOdysseyRuntimePaintCanvas* InCanvas)
{
    Canvas = InCanvas;
    bStrokeActive = false;
    bShapeStrokeActive = false;
    DistanceSinceLastStamp = 0.0f;
    UndoStack.Reset();
    RedoStack.Reset();
    BrushWorkingBlock.Reset();
    LastBrushPoint.Reset();
    StrokeStartPixels.Reset();
    bToolSettingsApplied = false;
}

UOdysseyRuntimePaintCanvas* FOdysseyRuntimePaintEngine::GetCanvas() const
{
    return Canvas.Get();
}

void FOdysseyRuntimePaintEngine::SetTool(EOdysseyRuntimePaintTool InTool)
{
    if (ActiveTool == InTool)
    {
        return;
    }

    ActiveTool = InTool;
}

EOdysseyRuntimePaintTool FOdysseyRuntimePaintEngine::GetTool() const
{
    return ActiveTool;
}

void FOdysseyRuntimePaintEngine::SetToolSettings(const FOdysseyRuntimeToolSettings& InSettings)
{
    const bool bSettingsEqual = AreToolSettingsEqual(ToolSettings, InSettings);
    if (bSettingsEqual && bToolSettingsApplied)
    {
        return;
    }

    if (!bSettingsEqual)
    {
        ToolSettings = InSettings;
        bToolSettingsApplied = false;
    }

    bToolSettingsApplied = UpdateBrushOptionsFromToolSettings();
}

const FOdysseyRuntimeToolSettings& FOdysseyRuntimePaintEngine::GetToolSettings() const
{
    return ToolSettings;
}

void FOdysseyRuntimePaintEngine::SetBrushAsset(UOdysseyBrushAssetBase* InBrushAsset)
{
    if (BrushAssetTemplate.Get() == InBrushAsset)
    {
        return;
    }

    BrushAssetTemplate = InBrushAsset;
    BrushInstance.Reset();
    BrushOptions.Reset();
    BrushViewportContext.Reset();
    BrushWorkingBlock.Reset();
    LastBrushPoint.Reset();
    bShapeStrokeActive = false;
    StrokeStartPixels.Reset();
    bToolSettingsApplied = false;
}

UOdysseyBrushAssetBase* FOdysseyRuntimePaintEngine::GetBrushAsset() const
{
    return BrushInstance.Get();
}

void FOdysseyRuntimePaintEngine::SetHistoryLimit(int32 InHistoryLimit)
{
    HistoryLimit = FMath::Max(1, InHistoryLimit);
    while (UndoStack.Num() > HistoryLimit)
    {
        UndoStack.RemoveAt(0);
    }
}

void FOdysseyRuntimePaintEngine::BeginStroke(const FVector2D& NormalizedPosition)
{
    if (!EnsureCanvas())
    {
        return;
    }

    UOdysseyRuntimePaintCanvas* CanvasPtr = Canvas.Get();
    const FIntPoint PixelPoint = ToPixel(NormalizedPosition);

    PushUndoSnapshot();
    RedoStack.Reset();

    if (ActiveTool == EOdysseyRuntimePaintTool::Bucket)
    {
        FOdysseyRuntimeToolAlgorithms::FloodFill(
            CanvasPtr->GetMutablePixels(),
            CanvasPtr->GetCanvasWidth(),
            CanvasPtr->GetCanvasHeight(),
            PixelPoint,
            ToolSettings);
        CanvasPtr->CommitToTexture();
        bStrokeActive = false;
        DistanceSinceLastStamp = 0.0f;
        return;
    }

    bStrokeActive = true;
    bShapeStrokeActive = false;
    DistanceSinceLastStamp = 0.0f;
    LastStrokePoint = PixelPoint;

    if (PrepareBrushStrokeSession())
    {
        const FOdysseyPoint StartPoint = MakePointFromPixel(PixelPoint, nullptr);
        if (BeginShapeStroke(StartPoint))
        {
            return;
        }

        // Fallback path if freehand shape setup fails.
        TArray<FOdysseyPoint> FirstPoints;
        FirstPoints.Add(StartPoint);
        ExecuteBrushStrokePoints(FirstPoints);
        SyncBlockToCanvasPixels();
        return;
    }

    BrushWorkingBlock.Reset();
    LastBrushPoint.Reset();
    ApplyBrushLikeStroke(PixelPoint);
}

void FOdysseyRuntimePaintEngine::UpdateStroke(const FVector2D& NormalizedPosition)
{
    if (!EnsureCanvas() || !bStrokeActive)
    {
        return;
    }

    const FIntPoint PixelPoint = ToPixel(NormalizedPosition);
    if (PixelPoint == LastStrokePoint)
    {
        return;
    }

    if (BrushInstance.IsValid() && BrushWorkingBlock.IsValid())
    {
        ApplyBrushAssetStroke(PixelPoint);
        return;
    }

    ApplyBrushLikeStroke(PixelPoint);
}

void FOdysseyRuntimePaintEngine::EndStroke(const FVector2D& NormalizedPosition)
{
    if (!EnsureCanvas() || !bStrokeActive)
    {
        return;
    }

    UpdateStroke(NormalizedPosition);

    if (BrushInstance.IsValid() && BrushWorkingBlock.IsValid())
    {
        if (bShapeStrokeActive && FreehandShape.IsValid())
        {
            const FOdysseyPoint EndPoint = MakePointFromPixel(ToPixel(NormalizedPosition), LastBrushPoint.IsSet() ? &LastBrushPoint.GetValue() : nullptr);
            FreehandShape->OnMouseUp(EndPoint, EKeys::LeftMouseButton);
            bShapeStrokeActive = false;
        }

        BrushInstance->StrokeEnd();
        SyncBlockToCanvasPixels();
        BrushWorkingBlock.Reset();
        LastBrushPoint.Reset();
        StrokeStartPixels.Reset();
    }

    bStrokeActive = false;
    DistanceSinceLastStamp = 0.0f;
}

void FOdysseyRuntimePaintEngine::Clear(const FLinearColor& InColor)
{
    if (!EnsureCanvas())
    {
        return;
    }

    PushUndoSnapshot();
    RedoStack.Reset();

    Canvas->ClearCanvas(InColor);
    bStrokeActive = false;
    bShapeStrokeActive = false;
    DistanceSinceLastStamp = 0.0f;
    BrushWorkingBlock.Reset();
    LastBrushPoint.Reset();
    StrokeStartPixels.Reset();
}

bool FOdysseyRuntimePaintEngine::Undo()
{
    if (!EnsureCanvas() || UndoStack.IsEmpty())
    {
        return false;
    }

    UOdysseyRuntimePaintCanvas* CanvasPtr = Canvas.Get();
    RedoStack.Add(CanvasPtr->GetPixels());

    const TArray<FColor> PreviousState = MoveTemp(UndoStack.Last());
    UndoStack.Pop(false);
    CanvasPtr->SetPixels(PreviousState);

    bStrokeActive = false;
    bShapeStrokeActive = false;
    DistanceSinceLastStamp = 0.0f;
    BrushWorkingBlock.Reset();
    LastBrushPoint.Reset();
    StrokeStartPixels.Reset();
    return true;
}

bool FOdysseyRuntimePaintEngine::Redo()
{
    if (!EnsureCanvas() || RedoStack.IsEmpty())
    {
        return false;
    }

    UOdysseyRuntimePaintCanvas* CanvasPtr = Canvas.Get();
    UndoStack.Add(CanvasPtr->GetPixels());

    const TArray<FColor> NextState = MoveTemp(RedoStack.Last());
    RedoStack.Pop(false);
    CanvasPtr->SetPixels(NextState);

    bStrokeActive = false;
    bShapeStrokeActive = false;
    DistanceSinceLastStamp = 0.0f;
    BrushWorkingBlock.Reset();
    LastBrushPoint.Reset();
    StrokeStartPixels.Reset();
    return true;
}

bool FOdysseyRuntimePaintEngine::EnsureCanvas() const
{
    return Canvas.IsValid() && Canvas->IsInitialized();
}

FIntPoint FOdysseyRuntimePaintEngine::ToPixel(const FVector2D& NormalizedPosition) const
{
    const UOdysseyRuntimePaintCanvas* CanvasPtr = Canvas.Get();
    check(CanvasPtr);

    const float U = FMath::Clamp(NormalizedPosition.X, 0.0f, 1.0f);
    const float V = FMath::Clamp(NormalizedPosition.Y, 0.0f, 1.0f);
    const int32 X = FMath::RoundToInt(U * static_cast<float>(CanvasPtr->GetCanvasWidth() - 1));
    const int32 Y = FMath::RoundToInt(V * static_cast<float>(CanvasPtr->GetCanvasHeight() - 1));
    return FIntPoint(X, Y);
}

void FOdysseyRuntimePaintEngine::PushUndoSnapshot()
{
    if (!EnsureCanvas())
    {
        return;
    }

    if (UndoStack.Num() >= HistoryLimit)
    {
        UndoStack.RemoveAt(0);
    }

    UndoStack.Add(Canvas->GetPixels());
}

void FOdysseyRuntimePaintEngine::ApplyBrushLikeStroke(const FIntPoint& Point)
{
    UOdysseyRuntimePaintCanvas* CanvasPtr = Canvas.Get();
    const bool bEraserMode = ActiveTool == EOdysseyRuntimePaintTool::Eraser;

    FOdysseyRuntimeToolAlgorithms::DrawLine(
        CanvasPtr->GetMutablePixels(),
        CanvasPtr->GetCanvasWidth(),
        CanvasPtr->GetCanvasHeight(),
        LastStrokePoint,
        Point,
        ToolSettings,
        bEraserMode,
        DistanceSinceLastStamp);

    LastStrokePoint = Point;
    CanvasPtr->CommitToTexture();
}

bool FOdysseyRuntimePaintEngine::EnsureBrushInstance()
{
    UOdysseyBrushAssetBase* Template = BrushAssetTemplate.Get();
    if (!Template || !EnsureCanvas())
    {
        return false;
    }

    const UClass* TemplateClass = Template->GetClass();
    if (!TemplateClass || TemplateClass->HasAnyClassFlags(CLASS_Abstract))
    {
        return false;
    }

    if (!BrushInstance.IsValid() || BrushInstance->GetClass() != TemplateClass)
    {
        UOdysseyBrushAssetBase* NewBrushInstance = NewObject<UOdysseyBrushAssetBase>(GetTransientPackage(), TemplateClass);
        if (!NewBrushInstance)
        {
            return false;
        }

        BrushInstance.Reset(NewBrushInstance);

        if (!BrushOptions.IsValid())
        {
            BrushOptions.Reset(NewObject<UOdysseyBrushOptions>(GetTransientPackage()));
        }
        if (!BrushViewportContext.IsValid())
        {
            BrushViewportContext = MakeUnique<FOdysseyBrushViewportContext>(TEXT("FOdysseyBrushViewportContext"));
        }

        BrushInstance->SetBrushOptions(BrushOptions.Get());
        BrushInstance->AddContext(BrushViewportContext.Get());
        BrushInstance->GetStampOverrideDelegate().BindRaw(this, &FOdysseyRuntimePaintEngine::HandleStampOverride);
        BrushInstance->ExecuteSelected();
    }

    return BrushInstance.IsValid();
}

bool FOdysseyRuntimePaintEngine::EnsureFreehandShape()
{
    if (FreehandShape.IsValid())
    {
        return true;
    }

    UOdysseyFreehandShape* NewFreehandShape = NewObject<UOdysseyFreehandShape>(GetTransientPackage(), TEXT("OdysseyRuntimePaintEngineFreehandShape"));
    if (!NewFreehandShape)
    {
        return false;
    }

    FreehandShape.Reset(NewFreehandShape);
    FreehandShape->OnPathBeginDelegate().AddRaw(this, &FOdysseyRuntimePaintEngine::HandleFreehandPathBegin);
    FreehandShape->OnPathToDelegate().AddRaw(this, &FOdysseyRuntimePaintEngine::HandleFreehandPathTo);
    FreehandShape->OnPathEndDelegate().AddRaw(this, &FOdysseyRuntimePaintEngine::HandleFreehandPathEnd);
    FreehandShape->OnPathResetDelegate().AddRaw(this, &FOdysseyRuntimePaintEngine::HandleFreehandPathReset);
    return true;
}

bool FOdysseyRuntimePaintEngine::UpdateBrushOptionsFromToolSettings()
{
    if (!EnsureBrushInstance() || !BrushOptions.IsValid())
    {
        return false;
    }

    BrushOptions->Size = ToolSettings.Size;
    BrushOptions->Flow = FMath::Clamp(ToolSettings.Opacity * 100.0f, 0.0f, 100.0f);
    BrushOptions->Color = UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromRGBF(
        ToolSettings.Color.R,
        ToolSettings.Color.G,
        ToolSettings.Color.B,
        ToolSettings.Color.A);
    if (BrushViewportContext.IsValid())
    {
        BrushViewportContext->SetStep(ToolSettings.FreehandStep);
    }

    UpdateFreehandShapeFromToolSettings();
    BrushInstance->ExecuteStateChanged();
    return true;
}

void FOdysseyRuntimePaintEngine::UpdateFreehandShapeFromToolSettings()
{
    if (!EnsureFreehandShape())
    {
        return;
    }

    FreehandShape->SetStep(ToolSettings.FreehandStep);
    FreehandShape->SetAdaptativeStep(ToolSettings.bFreehandAdaptativeStep);
    FreehandShape->SetInterpolationType(ToolSettings.FreehandInterpolationType);
    FreehandShape->SetSmoothingEnabled(ToolSettings.bFreehandSmoothingEnabled);
    FreehandShape->SetSmoothingOptions(ToolSettings.FreehandSmoothingOptions);
}

bool FOdysseyRuntimePaintEngine::PrepareBrushStrokeSession()
{
    if (!EnsureBrushInstance())
    {
        return false;
    }

    UOdysseyRuntimePaintCanvas* CanvasPtr = Canvas.Get();
    check(CanvasPtr);

    BrushWorkingBlock = MakeShareable(new ::ULIS::FBlock(CanvasPtr->GetCanvasWidth(), CanvasPtr->GetCanvasHeight(), GRuntimeCanvasFormat));
    if (!BrushWorkingBlock.IsValid())
    {
        return false;
    }

    TArray<FColor>& Pixels = CanvasPtr->GetMutablePixels();
    StrokeStartPixels = Pixels;
    const int64 BlockBytes = static_cast<int64>(BrushWorkingBlock->BytesTotal());
    const int64 PixelBytes = static_cast<int64>(Pixels.Num()) * static_cast<int64>(sizeof(FColor));
    if (BlockBytes == PixelBytes && PixelBytes > 0)
    {
        FMemory::Memcpy(BrushWorkingBlock->Bits(), Pixels.GetData(), PixelBytes);
    }
    else
    {
        FMemory::Memzero(BrushWorkingBlock->Bits(), BrushWorkingBlock->BytesTotal());
    }

    BrushInstance->SetBlock(BrushWorkingBlock);
    BrushInstance->StrokeMoveTo(MakePointFromPixel(LastStrokePoint, nullptr));
    LastBrushPoint = MakePointFromPixel(LastStrokePoint, nullptr);
    return BrushInstance->StrokeBegin();
}

bool FOdysseyRuntimePaintEngine::ExecuteBrushStrokePoints(const TArray<FOdysseyPoint>& InPoints)
{
    if (!BrushInstance.IsValid() || InPoints.IsEmpty())
    {
        return false;
    }

    TArray<UOdysseyBrushAssetBase::FStep> Steps = BrushInstance->StepsTo(InPoints);
    for (const UOdysseyBrushAssetBase::FStep& Step : Steps)
    {
        if (!BrushInstance->StrokeStep(Step))
        {
            return false;
        }
    }

    BrushInstance->StrokeFlush();
    LastBrushPoint = InPoints.Last();
    return true;
}

bool FOdysseyRuntimePaintEngine::BeginShapeStroke(const FOdysseyPoint& StartPoint)
{
    if (!EnsureFreehandShape())
    {
        return false;
    }

    UpdateFreehandShapeFromToolSettings();
    bShapeStrokeActive = FreehandShape->OnMouseDown(StartPoint, EKeys::LeftMouseButton);
    return bShapeStrokeActive;
}

void FOdysseyRuntimePaintEngine::ApplyBrushAssetStroke(const FIntPoint& Point)
{
    if (bShapeStrokeActive && FreehandShape.IsValid())
    {
        const FOdysseyPoint PointToDraw = MakePointFromPixel(Point, LastBrushPoint.IsSet() ? &LastBrushPoint.GetValue() : nullptr);
        FreehandShape->OnMouseDrag(PointToDraw);
        LastStrokePoint = Point;
        return;
    }

    const FVector2D Segment(static_cast<float>(Point.X - LastStrokePoint.X), static_cast<float>(Point.Y - LastStrokePoint.Y));
    const float SegmentLength = Segment.Size();
    const float Spacing = FMath::Max(1.0f, ToolSettings.FreehandStep);

    if (SegmentLength <= KINDA_SMALL_NUMBER)
    {
        return;
    }

    const FVector2D Direction = Segment / SegmentLength;
    float DistanceToNextStamp = Spacing - DistanceSinceLastStamp;
    if (DistanceSinceLastStamp <= KINDA_SMALL_NUMBER)
    {
        DistanceToNextStamp = Spacing;
    }

    TArray<FOdysseyPoint> PointsToDraw;
    for (float DistanceAlong = DistanceToNextStamp; DistanceAlong <= SegmentLength + KINDA_SMALL_NUMBER; DistanceAlong += Spacing)
    {
        const int32 X = FMath::RoundToInt(static_cast<float>(LastStrokePoint.X) + Direction.X * DistanceAlong);
        const int32 Y = FMath::RoundToInt(static_cast<float>(LastStrokePoint.Y) + Direction.Y * DistanceAlong);
        PointsToDraw.Add(MakePointFromPixel(FIntPoint(X, Y), LastBrushPoint.IsSet() ? &LastBrushPoint.GetValue() : nullptr));
    }

    if (!PointsToDraw.IsEmpty())
    {
        ExecuteBrushStrokePoints(PointsToDraw);
        SyncBlockToCanvasPixels();
        DistanceSinceLastStamp = FMath::Fmod(DistanceSinceLastStamp + SegmentLength, Spacing);
        if (FMath::IsNearlyEqual(DistanceSinceLastStamp, Spacing, KINDA_SMALL_NUMBER))
        {
            DistanceSinceLastStamp = 0.0f;
        }
    }
    else
    {
        DistanceSinceLastStamp = FMath::Min(Spacing, DistanceSinceLastStamp + SegmentLength);
    }

    LastStrokePoint = Point;
}

void FOdysseyRuntimePaintEngine::SyncBlockToCanvasPixels()
{
    if (!EnsureCanvas() || !BrushWorkingBlock.IsValid())
    {
        return;
    }

    ::ULIS::FContext& Ctx = IULISLoaderModule::StaticFindOrAddContext(BrushWorkingBlock->Format());
    Ctx.Finish();

    UOdysseyRuntimePaintCanvas* CanvasPtr = Canvas.Get();
    TArray<FColor>& Pixels = CanvasPtr->GetMutablePixels();
    const int64 BlockBytes = static_cast<int64>(BrushWorkingBlock->BytesTotal());
    const int64 PixelBytes = static_cast<int64>(Pixels.Num()) * static_cast<int64>(sizeof(FColor));
    if (BlockBytes != PixelBytes || PixelBytes <= 0)
    {
        return;
    }

    FMemory::Memcpy(Pixels.GetData(), BrushWorkingBlock->Bits(), PixelBytes);
    CanvasPtr->CommitToTexture();
}

FOdysseyPoint FOdysseyRuntimePaintEngine::MakePointFromPixel(const FIntPoint& Point, const FOdysseyPoint* PreviousPoint) const
{
    FOdysseyPoint Result(static_cast<float>(Point.X), static_cast<float>(Point.Y), 0.0f, 1.0f);
    if (PreviousPoint)
    {
        Result.ComputeRelativeParameters(*PreviousPoint, true);
    }
    return Result;
}

void FOdysseyRuntimePaintEngine::RestoreWorkingBlockFromStrokeStart()
{
    if (!BrushWorkingBlock.IsValid())
    {
        return;
    }

    const int64 BlockBytes = static_cast<int64>(BrushWorkingBlock->BytesTotal());
    const int64 StrokeBytes = static_cast<int64>(StrokeStartPixels.Num()) * static_cast<int64>(sizeof(FColor));
    if (BlockBytes != StrokeBytes || StrokeBytes <= 0)
    {
        return;
    }

    FMemory::Memcpy(BrushWorkingBlock->Bits(), StrokeStartPixels.GetData(), StrokeBytes);
}

void FOdysseyRuntimePaintEngine::HandleFreehandPathBegin(const FOdysseyPoint& Point)
{
    TArray<FOdysseyPoint> Points;
    Points.Add(Point);
    ExecuteBrushStrokePoints(Points);
    SyncBlockToCanvasPixels();
}

void FOdysseyRuntimePaintEngine::HandleFreehandPathTo(const TArray<FOdysseyPoint>& Points)
{
    if (Points.IsEmpty())
    {
        return;
    }

    ExecuteBrushStrokePoints(Points);
    SyncBlockToCanvasPixels();
}

void FOdysseyRuntimePaintEngine::HandleFreehandPathEnd(const FOdysseyPoint& Point)
{
    (void)Point;
}

void FOdysseyRuntimePaintEngine::HandleFreehandPathReset()
{
    if (!BrushInstance.IsValid())
    {
        return;
    }

    BrushInstance->StrokeReset();
    LastBrushPoint.Reset();
    RestoreWorkingBlockFromStrokeStart();
    SyncBlockToCanvasPixels();
}

::ULIS::FEvent FOdysseyRuntimePaintEngine::HandleStampOverride(UOdysseyBrushAssetBase::FStampParams InStampParams)
{
    if (!BrushInstance.IsValid())
    {
        ::ULIS::FEvent NullEvent;
        ::ULIS::FContext::MarkEventFinished(&NullEvent);
        return NullEvent;
    }

    if (ActiveTool == EOdysseyRuntimePaintTool::Eraser)
    {
        InStampParams.mAlphaMode = EOdysseyAlphaMode::kErase;
        InStampParams.mBlendingMode = EOdysseyBlendingMode::kNormal;
    }

    return BrushInstance->StampInternal(InStampParams);
}
