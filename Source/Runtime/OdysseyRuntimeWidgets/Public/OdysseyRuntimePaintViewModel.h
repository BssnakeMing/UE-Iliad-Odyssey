#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OdysseyRuntimePaintToolTypes.h"
#include "OdysseyRuntimePaintViewModel.generated.h"

class UOdysseyBrushAssetBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdysseyRuntimePaintToolChangedSignature, EOdysseyRuntimePaintTool, NewTool);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOdysseyRuntimeToolSettingsChangedSignature, FOdysseyRuntimeToolSettings, NewSettings);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOdysseyRuntimeBrushPresetChangedSignature, FName, PresetId, int32, PresetIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOdysseyRuntimeBrushPresetsChangedSignature);

DECLARE_MULTICAST_DELEGATE_OneParam(FOdysseyRuntimePaintToolChangedNative, EOdysseyRuntimePaintTool);
DECLARE_MULTICAST_DELEGATE_OneParam(FOdysseyRuntimeToolSettingsChangedNative, const FOdysseyRuntimeToolSettings&);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOdysseyRuntimeBrushPresetChangedNative, FName, int32);
DECLARE_MULTICAST_DELEGATE(FOdysseyRuntimeBrushPresetsChangedNative);

UCLASS(BlueprintType)
class ODYSSEYRUNTIMEWIDGETS_API UOdysseyRuntimePaintViewModel : public UObject
{
    GENERATED_BODY()

public:
    UOdysseyRuntimePaintViewModel();

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    EOdysseyRuntimePaintTool GetActiveTool() const { return ActiveTool; }

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetActiveTool(EOdysseyRuntimePaintTool InTool);

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    FOdysseyRuntimeToolSettings GetToolSettings() const { return ToolSettings; }

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetToolSettings(const FOdysseyRuntimeToolSettings& InSettings);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetColor(const FLinearColor& InColor);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetSize(float InSize);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetOpacity(float InOpacity);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetHardness(float InHardness);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetTolerance(float InTolerance);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetFreehandStep(float InStep);

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    FName GetSelectedBrushPresetId() const { return SelectedBrushPresetId; }

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    int32 GetSelectedBrushPresetIndex() const;

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    bool SelectBrushPresetById(FName InPresetId);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    bool SelectBrushPresetByIndex(int32 InPresetIndex);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetBrushPresets(const TArray<UOdysseyBrushAssetBase*>& InBrushPresets);

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    TArray<UOdysseyBrushAssetBase*> GetBrushPresetsCopy() const;

    const TArray<TObjectPtr<UOdysseyBrushAssetBase>>& GetBrushPresets() const { return BrushPresets; }

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    UOdysseyBrushAssetBase* GetSelectedBrushAsset() const;

    UPROPERTY(BlueprintAssignable, Category = "Odyssey|Paint")
    FOdysseyRuntimePaintToolChangedSignature OnActiveToolChanged;

    UPROPERTY(BlueprintAssignable, Category = "Odyssey|Paint")
    FOdysseyRuntimeToolSettingsChangedSignature OnToolSettingsChanged;

    UPROPERTY(BlueprintAssignable, Category = "Odyssey|Paint")
    FOdysseyRuntimeBrushPresetChangedSignature OnBrushPresetChanged;

    UPROPERTY(BlueprintAssignable, Category = "Odyssey|Paint")
    FOdysseyRuntimeBrushPresetsChangedSignature OnBrushPresetsChanged;

    FOdysseyRuntimePaintToolChangedNative OnActiveToolChangedNative;
    FOdysseyRuntimeToolSettingsChangedNative OnToolSettingsChangedNative;
    FOdysseyRuntimeBrushPresetChangedNative OnBrushPresetChangedNative;
    FOdysseyRuntimeBrushPresetsChangedNative OnBrushPresetsChangedNative;

private:
    void ApplyBrushPreset(UOdysseyBrushAssetBase* InPreset);
    static FOdysseyRuntimeToolSettings SanitizeSettings(const FOdysseyRuntimeToolSettings& InSettings);
    void EnsureSelectedBrushIsValid();
    static FName BuildBrushId(UOdysseyBrushAssetBase* InBrushAsset);

private:
    UPROPERTY(EditAnywhere, Category = "Odyssey|Paint")
    EOdysseyRuntimePaintTool ActiveTool = EOdysseyRuntimePaintTool::Brush;

    UPROPERTY(EditAnywhere, Category = "Odyssey|Paint")
    FOdysseyRuntimeToolSettings ToolSettings;

    UPROPERTY(EditAnywhere, Category = "Odyssey|Paint")
    TArray<TObjectPtr<UOdysseyBrushAssetBase>> BrushPresets;

    UPROPERTY(EditAnywhere, Category = "Odyssey|Paint")
    FName SelectedBrushPresetId = NAME_None;
};
