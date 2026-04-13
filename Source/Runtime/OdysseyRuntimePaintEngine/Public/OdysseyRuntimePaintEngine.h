#pragma once

#include "CoreMinimal.h"
#include "UObject/StrongObjectPtr.h"
#include "BrushContext/OdysseyBrushViewportContext.h"
#include "Input/OdysseyPoint.h"
#include "OdysseyBrushAssetBase.h"
#include "OdysseyRuntimePaintToolTypes.h"
#include <ULIS>

class UOdysseyRuntimePaintCanvas;
class UOdysseyBrushOptions;
class UOdysseyFreehandShape;

class ODYSSEYRUNTIMEPAINTENGINE_API FOdysseyRuntimePaintEngine
{
public:
    FOdysseyRuntimePaintEngine();
    ~FOdysseyRuntimePaintEngine();

    void SetCanvas(UOdysseyRuntimePaintCanvas* InCanvas);
    UOdysseyRuntimePaintCanvas* GetCanvas() const;

    void SetTool(EOdysseyRuntimePaintTool InTool);
    EOdysseyRuntimePaintTool GetTool() const;

    void SetToolSettings(const FOdysseyRuntimeToolSettings& InSettings);
    const FOdysseyRuntimeToolSettings& GetToolSettings() const;

    void SetBrushAsset(UOdysseyBrushAssetBase* InBrushAsset);
    UOdysseyBrushAssetBase* GetBrushAsset() const;

    void SetHistoryLimit(int32 InHistoryLimit);

    void BeginStroke(const FVector2D& NormalizedPosition);
    void UpdateStroke(const FVector2D& NormalizedPosition);
    void EndStroke(const FVector2D& NormalizedPosition);

    void Clear(const FLinearColor& InColor);
    bool Undo();
    bool Redo();

private:
    bool EnsureCanvas() const;
    FIntPoint ToPixel(const FVector2D& NormalizedPosition) const;
    void PushUndoSnapshot();
    void ApplyBrushLikeStroke(const FIntPoint& Point);
    bool EnsureBrushInstance();
    bool EnsureFreehandShape();
    bool UpdateBrushOptionsFromToolSettings();
    void UpdateFreehandShapeFromToolSettings();
    bool PrepareBrushStrokeSession();
    bool ExecuteBrushStrokePoints(const TArray<FOdysseyPoint>& InPoints);
    bool BeginShapeStroke(const FOdysseyPoint& StartPoint);
    void ApplyBrushAssetStroke(const FIntPoint& Point);
    void SyncBlockToCanvasPixels();
    FOdysseyPoint MakePointFromPixel(const FIntPoint& Point, const FOdysseyPoint* PreviousPoint = nullptr) const;
    void RestoreWorkingBlockFromStrokeStart();
    void HandleFreehandPathBegin(const FOdysseyPoint& Point);
    void HandleFreehandPathTo(const TArray<FOdysseyPoint>& Points);
    void HandleFreehandPathEnd(const FOdysseyPoint& Point);
    void HandleFreehandPathReset();
    ::ULIS::FEvent HandleStampOverride(UOdysseyBrushAssetBase::FStampParams InStampParams);

private:
    TWeakObjectPtr<UOdysseyRuntimePaintCanvas> Canvas;

    EOdysseyRuntimePaintTool ActiveTool = EOdysseyRuntimePaintTool::Brush;
    FOdysseyRuntimeToolSettings ToolSettings;

    bool bStrokeActive = false;
    FIntPoint LastStrokePoint = FIntPoint::ZeroValue;
    float DistanceSinceLastStamp = 0.0f;

    int32 HistoryLimit = 20;
    TArray<TArray<FColor>> UndoStack;
    TArray<TArray<FColor>> RedoStack;

    TWeakObjectPtr<UOdysseyBrushAssetBase> BrushAssetTemplate;
    TStrongObjectPtr<UOdysseyBrushAssetBase> BrushInstance;
    TStrongObjectPtr<UOdysseyBrushOptions> BrushOptions;
    TStrongObjectPtr<UOdysseyFreehandShape> FreehandShape;
    TUniquePtr<FOdysseyBrushViewportContext> BrushViewportContext;
    TSharedPtr<::ULIS::FBlock, ESPMode::ThreadSafe> BrushWorkingBlock;
    TOptional<FOdysseyPoint> LastBrushPoint;
    TArray<FColor> StrokeStartPixels;
    bool bShapeStrokeActive = false;
    bool bToolSettingsApplied = false;
};
