#include "OdysseyPaintWidget.h"

#include "Engine/TextureRenderTarget2D.h"
#include "OdysseyRuntimePaintCanvas.h"
#include "OdysseyRuntimePaintViewModel.h"
#include "SOdysseyPaintSurface.h"

#define LOCTEXT_NAMESPACE "OdysseyRuntimeWidgets"

namespace
{
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

UOdysseyPaintWidget::UOdysseyPaintWidget(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UOdysseyPaintWidget::InitializeCanvas(int32 InWidth, int32 InHeight, const FLinearColor& InClearColor)
{
    CanvasWidth = FMath::Max(1, InWidth);
    CanvasHeight = FMath::Max(1, InHeight);
    ClearColor = InClearColor;

    EnsureRuntimeObjects();
    PaintCanvas->InitializeCanvas(CanvasWidth, CanvasHeight, ClearColor);
    RefreshTextureBinding();
}

void UOdysseyPaintWidget::SetTool(EOdysseyRuntimePaintTool InTool)
{
    ActiveTool = InTool;
    EnsureRuntimeObjects();
    PaintEngine.SetTool(ActiveTool);

    if (!bApplyingViewModel && ViewModel && ViewModel->GetActiveTool() != ActiveTool)
    {
        ViewModel->SetActiveTool(ActiveTool);
    }
}

void UOdysseyPaintWidget::SetToolSettings(const FOdysseyRuntimeToolSettings& InSettings)
{
    ToolSettings = InSettings;
    EnsureRuntimeObjects();
    PaintEngine.SetToolSettings(ToolSettings);

    if (!bApplyingViewModel && ViewModel && !AreToolSettingsEqual(ViewModel->GetToolSettings(), ToolSettings))
    {
        ViewModel->SetToolSettings(ToolSettings);
    }
}

void UOdysseyPaintWidget::SetViewModel(UOdysseyRuntimePaintViewModel* InViewModel)
{
    if (ViewModel == InViewModel)
    {
        return;
    }

    UnbindFromViewModel();
    ViewModel = InViewModel;
    BindToViewModel();

    if (ViewModel)
    {
        HandleViewModelToolChanged(ViewModel->GetActiveTool());
        HandleViewModelToolSettingsChanged(ViewModel->GetToolSettings());
        PaintEngine.SetBrushAsset(ViewModel->GetSelectedBrushAsset());
    }
}

void UOdysseyPaintWidget::BeginStroke(const FVector2D& LocalPosition)
{
    EnsureRuntimeObjects();
    PaintEngine.BeginStroke(NormalizeInput(LocalPosition));
    RefreshTextureBinding();
}

void UOdysseyPaintWidget::UpdateStroke(const FVector2D& LocalPosition)
{
    EnsureRuntimeObjects();
    PaintEngine.UpdateStroke(NormalizeInput(LocalPosition));
    RefreshTextureBinding();
}

void UOdysseyPaintWidget::EndStroke(const FVector2D& LocalPosition)
{
    EnsureRuntimeObjects();
    PaintEngine.EndStroke(NormalizeInput(LocalPosition));
    RefreshTextureBinding();
}

void UOdysseyPaintWidget::Clear()
{
    EnsureRuntimeObjects();
    PaintEngine.Clear(ClearColor);
    RefreshTextureBinding();
}

bool UOdysseyPaintWidget::Undo()
{
    EnsureRuntimeObjects();
    const bool bDidUndo = PaintEngine.Undo();
    RefreshTextureBinding();
    return bDidUndo;
}

bool UOdysseyPaintWidget::Redo()
{
    EnsureRuntimeObjects();
    const bool bDidRedo = PaintEngine.Redo();
    RefreshTextureBinding();
    return bDidRedo;
}

void UOdysseyPaintWidget::SetPaintTexture(UTextureRenderTarget2D* InPaintTexture)
{
    if (PaintTexture == InPaintTexture)
    {
        return;
    }

    PaintTexture = InPaintTexture;

    if (PaintCanvas)
    {
        PaintCanvas->SetTexture(PaintTexture.Get());
        if (!PaintCanvas->IsInitialized() ||
            PaintCanvas->GetCanvasWidth() != CanvasWidth ||
            PaintCanvas->GetCanvasHeight() != CanvasHeight)
        {
            PaintCanvas->InitializeCanvas(CanvasWidth, CanvasHeight, ClearColor);
        }
    }

    RefreshTextureBinding();
}

TSharedRef<SWidget> UOdysseyPaintWidget::RebuildWidget()
{
    EnsureRuntimeObjects();

    PaintSurface =
        SNew(SOdysseyPaintSurface)
        .OnStrokeBegin(BIND_UOBJECT_DELEGATE(FOdysseyPaintSurfacePointerEvent, HandleSurfaceBegin))
        .OnStrokeUpdate(BIND_UOBJECT_DELEGATE(FOdysseyPaintSurfacePointerEvent, HandleSurfaceUpdate))
        .OnStrokeEnd(BIND_UOBJECT_DELEGATE(FOdysseyPaintSurfacePointerEvent, HandleSurfaceEnd));

    RefreshTextureBinding();
    return PaintSurface.ToSharedRef();
}

void UOdysseyPaintWidget::SynchronizeProperties()
{
    Super::SynchronizeProperties();
    EnsureRuntimeObjects();

    if (ViewModel)
    {
        BindToViewModel();
        HandleViewModelToolChanged(ViewModel->GetActiveTool());
        HandleViewModelToolSettingsChanged(ViewModel->GetToolSettings());
        PaintEngine.SetBrushAsset(ViewModel->GetSelectedBrushAsset());
    }
    else
    {
        PaintEngine.SetTool(ActiveTool);
        PaintEngine.SetToolSettings(ToolSettings);
        PaintEngine.SetBrushAsset(nullptr);
    }

    RefreshTextureBinding();
}

void UOdysseyPaintWidget::ReleaseSlateResources(bool bReleaseChildren)
{
    Super::ReleaseSlateResources(bReleaseChildren);
    PaintSurface.Reset();
    UnbindFromViewModel();
}

#if WITH_EDITOR
const FText UOdysseyPaintWidget::GetPaletteCategory()
{
    return LOCTEXT("IliadCategory", "Iliad");
}
#endif

void UOdysseyPaintWidget::EnsureRuntimeObjects()
{
    if (!PaintCanvas)
    {
        PaintCanvas = NewObject<UOdysseyRuntimePaintCanvas>(this, TEXT("OdysseyRuntimePaintCanvas"));
    }

    if (PaintTexture && PaintCanvas->GetTexture() != PaintTexture.Get())
    {
        PaintCanvas->SetTexture(PaintTexture.Get());
    }

    if (!PaintCanvas->IsInitialized() ||
        PaintCanvas->GetCanvasWidth() != CanvasWidth ||
        PaintCanvas->GetCanvasHeight() != CanvasHeight)
    {
        PaintCanvas->InitializeCanvas(CanvasWidth, CanvasHeight, ClearColor);
    }

    if (PaintEngine.GetCanvas() != PaintCanvas)
    {
        PaintEngine.SetCanvas(PaintCanvas);
    }

    PaintEngine.SetTool(ActiveTool);
    PaintEngine.SetToolSettings(ToolSettings);
    PaintEngine.SetBrushAsset(ViewModel ? ViewModel->GetSelectedBrushAsset() : nullptr);
    if (!PaintTexture)
    {
        PaintTexture = PaintCanvas->GetTexture();
    }
}

void UOdysseyPaintWidget::BindToViewModel()
{
    if (!ViewModel)
    {
        return;
    }

    if (!ViewModelToolChangedHandle.IsValid())
    {
        ViewModelToolChangedHandle = ViewModel->OnActiveToolChangedNative.AddUObject(this, &UOdysseyPaintWidget::HandleViewModelToolChanged);
    }

    if (!ViewModelToolSettingsChangedHandle.IsValid())
    {
        ViewModelToolSettingsChangedHandle = ViewModel->OnToolSettingsChangedNative.AddUObject(this, &UOdysseyPaintWidget::HandleViewModelToolSettingsChanged);
    }

    if (!ViewModelBrushPresetChangedHandle.IsValid())
    {
        ViewModelBrushPresetChangedHandle = ViewModel->OnBrushPresetChangedNative.AddUObject(this, &UOdysseyPaintWidget::HandleViewModelBrushPresetChanged);
    }

    if (!ViewModelBrushPresetsChangedHandle.IsValid())
    {
        ViewModelBrushPresetsChangedHandle = ViewModel->OnBrushPresetsChangedNative.AddUObject(this, &UOdysseyPaintWidget::HandleViewModelBrushPresetsChanged);
    }
}

void UOdysseyPaintWidget::UnbindFromViewModel()
{
    if (!ViewModel)
    {
        ViewModelToolChangedHandle.Reset();
        ViewModelToolSettingsChangedHandle.Reset();
        ViewModelBrushPresetChangedHandle.Reset();
        ViewModelBrushPresetsChangedHandle.Reset();
        return;
    }

    if (ViewModelToolChangedHandle.IsValid())
    {
        ViewModel->OnActiveToolChangedNative.Remove(ViewModelToolChangedHandle);
        ViewModelToolChangedHandle.Reset();
    }

    if (ViewModelToolSettingsChangedHandle.IsValid())
    {
        ViewModel->OnToolSettingsChangedNative.Remove(ViewModelToolSettingsChangedHandle);
        ViewModelToolSettingsChangedHandle.Reset();
    }

    if (ViewModelBrushPresetChangedHandle.IsValid())
    {
        ViewModel->OnBrushPresetChangedNative.Remove(ViewModelBrushPresetChangedHandle);
        ViewModelBrushPresetChangedHandle.Reset();
    }

    if (ViewModelBrushPresetsChangedHandle.IsValid())
    {
        ViewModel->OnBrushPresetsChangedNative.Remove(ViewModelBrushPresetsChangedHandle);
        ViewModelBrushPresetsChangedHandle.Reset();
    }
}

void UOdysseyPaintWidget::HandleViewModelToolChanged(EOdysseyRuntimePaintTool InTool)
{
    bApplyingViewModel = true;
    SetTool(InTool);
    bApplyingViewModel = false;
}

void UOdysseyPaintWidget::HandleViewModelToolSettingsChanged(const FOdysseyRuntimeToolSettings& InSettings)
{
    bApplyingViewModel = true;
    SetToolSettings(InSettings);
    bApplyingViewModel = false;
}

void UOdysseyPaintWidget::HandleViewModelBrushPresetChanged(FName InPresetId, int32 InPresetIndex)
{
    if (ViewModel)
    {
        EnsureRuntimeObjects();
        PaintEngine.SetBrushAsset(ViewModel->GetSelectedBrushAsset());
    }
}

void UOdysseyPaintWidget::HandleViewModelBrushPresetsChanged()
{
    if (ViewModel)
    {
        EnsureRuntimeObjects();
        PaintEngine.SetBrushAsset(ViewModel->GetSelectedBrushAsset());
    }
}

FVector2D UOdysseyPaintWidget::NormalizeInput(const FVector2D& LocalPosition) const
{
    if (LastSurfaceSize.X > 1.0f && LastSurfaceSize.Y > 1.0f)
    {
        return FVector2D(
            FMath::Clamp(LocalPosition.X / LastSurfaceSize.X, 0.0f, 1.0f),
            FMath::Clamp(LocalPosition.Y / LastSurfaceSize.Y, 0.0f, 1.0f));
    }

    if (LocalPosition.X >= 0.0f && LocalPosition.X <= 1.0f && LocalPosition.Y >= 0.0f && LocalPosition.Y <= 1.0f)
    {
        return LocalPosition;
    }

    return FVector2D(
        FMath::Clamp(LocalPosition.X / static_cast<float>(FMath::Max(1, CanvasWidth)), 0.0f, 1.0f),
        FMath::Clamp(LocalPosition.Y / static_cast<float>(FMath::Max(1, CanvasHeight)), 0.0f, 1.0f));
}

void UOdysseyPaintWidget::RefreshTextureBinding()
{
    UTextureRenderTarget2D* CanvasTexture = PaintCanvas ? PaintCanvas->GetTexture() : nullptr;
    if (!PaintTexture)
    {
        PaintTexture = CanvasTexture;
    }
    else if (PaintCanvas && CanvasTexture != PaintTexture.Get())
    {
        PaintCanvas->SetTexture(PaintTexture.Get());
        CanvasTexture = PaintCanvas->GetTexture();
    }

    if (PaintSurface.IsValid())
    {
        PaintSurface->SetTexture(CanvasTexture);
    }
}

void UOdysseyPaintWidget::HandleSurfaceBegin(const FVector2D& LocalPosition, const FVector2D& SurfaceSize)
{
    LastSurfaceSize = SurfaceSize;
    BeginStroke(LocalPosition);
}

void UOdysseyPaintWidget::HandleSurfaceUpdate(const FVector2D& LocalPosition, const FVector2D& SurfaceSize)
{
    LastSurfaceSize = SurfaceSize;
    UpdateStroke(LocalPosition);
}

void UOdysseyPaintWidget::HandleSurfaceEnd(const FVector2D& LocalPosition, const FVector2D& SurfaceSize)
{
    LastSurfaceSize = SurfaceSize;
    EndStroke(LocalPosition);
}

#undef LOCTEXT_NAMESPACE
