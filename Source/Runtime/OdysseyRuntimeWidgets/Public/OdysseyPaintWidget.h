#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OdysseyRuntimePaintEngine.h"
#include "OdysseyRuntimePaintToolTypes.h"
#include "OdysseyPaintWidget.generated.h"

class SOdysseyPaintSurface;
class UOdysseyRuntimePaintCanvas;
class UOdysseyRuntimePaintViewModel;
class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class ODYSSEYRUNTIMEWIDGETS_API UOdysseyPaintWidget : public UWidget
{
    GENERATED_BODY()

public:
    UOdysseyPaintWidget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void InitializeCanvas(int32 InWidth, int32 InHeight, const FLinearColor& InClearColor);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetTool(EOdysseyRuntimePaintTool InTool);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetToolSettings(const FOdysseyRuntimeToolSettings& InSettings);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetViewModel(UOdysseyRuntimePaintViewModel* InViewModel);

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    UOdysseyRuntimePaintViewModel* GetViewModel() const { return ViewModel; }
    
    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    UOdysseyBrushAssetBase* GetPaintEngineBrushAsset() const { return PaintEngine.GetBrushAsset();}

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void BeginStroke(const FVector2D& LocalPosition);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void UpdateStroke(const FVector2D& LocalPosition);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void EndStroke(const FVector2D& LocalPosition);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void Clear();

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    bool Undo();

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    bool Redo();

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    UTextureRenderTarget2D* GetPaintTexture() const { return PaintTexture; }

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetPaintTexture(UTextureRenderTarget2D* InPaintTexture);

protected:
    virtual TSharedRef<SWidget> RebuildWidget() override;
    virtual void SynchronizeProperties() override;
    virtual void ReleaseSlateResources(bool bReleaseChildren) override;

#if WITH_EDITOR
    virtual const FText GetPaletteCategory() override;
#endif

private:
    void BindToViewModel();
    void UnbindFromViewModel();
    void HandleViewModelToolChanged(EOdysseyRuntimePaintTool InTool);
    void HandleViewModelToolSettingsChanged(const FOdysseyRuntimeToolSettings& InSettings);
    void HandleViewModelBrushPresetChanged(FName InPresetId, int32 InPresetIndex);
    void HandleViewModelBrushPresetsChanged();
    void EnsureRuntimeObjects();
    FVector2D NormalizeInput(const FVector2D& LocalPosition) const;
    void RefreshTextureBinding();

    void HandleSurfaceBegin(const FVector2D& LocalPosition, const FVector2D& SurfaceSize);
    void HandleSurfaceUpdate(const FVector2D& LocalPosition, const FVector2D& SurfaceSize);
    void HandleSurfaceEnd(const FVector2D& LocalPosition, const FVector2D& SurfaceSize);

private:
    UPROPERTY(EditAnywhere, Category = "Odyssey|Paint")
    int32 CanvasWidth = 1024;

    UPROPERTY(EditAnywhere, Category = "Odyssey|Paint")
    int32 CanvasHeight = 1024;

    UPROPERTY(EditAnywhere, Category = "Odyssey|Paint")
    FLinearColor ClearColor = FLinearColor::Transparent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (AllowPrivateAccess = "true"))
    EOdysseyRuntimePaintTool ActiveTool = EOdysseyRuntimePaintTool::Brush;
 
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (AllowPrivateAccess = "true"))
    FOdysseyRuntimeToolSettings ToolSettings;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (AllowPrivateAccess = "true"))
    TObjectPtr<UTextureRenderTarget2D> PaintTexture = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (AllowPrivateAccess = "true"))
    TObjectPtr<UOdysseyRuntimePaintViewModel> ViewModel = nullptr;

    UPROPERTY(Transient)
    TObjectPtr<UOdysseyRuntimePaintCanvas> PaintCanvas = nullptr;

    FVector2D LastSurfaceSize = FVector2D::ZeroVector;
    FOdysseyRuntimePaintEngine PaintEngine;
    TSharedPtr<SOdysseyPaintSurface> PaintSurface;
    FDelegateHandle ViewModelToolChangedHandle;
    FDelegateHandle ViewModelToolSettingsChangedHandle;
    FDelegateHandle ViewModelBrushPresetChangedHandle;
    FDelegateHandle ViewModelBrushPresetsChangedHandle;
    bool bApplyingViewModel = false;
};
