#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Styling/SlateTypes.h"
#include "OdysseyRuntimePaintToolTypes.h"
#include "OdysseyRuntimeToolOptionsWidget.generated.h"

class SHorizontalBox;
class SCheckBox;
class SSlider;
class STextBlock;
class SVerticalBox;
class UOdysseyFreehandShape;
class UOdysseyRuntimePaintViewModel;
struct FOdysseyRuntimeToolSettings;
enum class EOdysseyInterpolationType : uint8;
enum class EOdysseySmoothingMethod : uint8;

UCLASS(BlueprintType)
class ODYSSEYRUNTIMEWIDGETS_API UOdysseyRuntimeToolOptionsWidget : public UWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetViewModel(UOdysseyRuntimePaintViewModel* InViewModel);

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    UOdysseyRuntimePaintViewModel* GetViewModel() const { return ViewModel; }

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetFreehandShape(UOdysseyFreehandShape* InFreehandShape);

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    UOdysseyFreehandShape* GetFreehandShape() const { return FreehandShape; }

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
    void HandleToolChanged(EOdysseyRuntimePaintTool InTool);
    void HandleToolSettingsChanged(const FOdysseyRuntimeToolSettings& InSettings);
    void SyncFromViewModel();
    void RefreshToleranceVisibility();
    void RefreshFreehandVisibility();
    void RefreshSmoothingVisibility();

    UOdysseyFreehandShape* ResolveFreehandShape();
    void ApplyFreehandSettingsToShape(const FOdysseyRuntimeToolSettings& InSettings);

    void HandleSizeChanged(float InValue);
    void HandleOpacityChanged(float InValue);
    void HandleHardnessChanged(float InValue);
    void HandleFreehandStepChanged(float InValue);
    void HandleFreehandAdaptativeStepChanged(ECheckBoxState InState);
    void HandleInterpolationTypeChanged(ECheckBoxState InState, EOdysseyInterpolationType InType);
    void HandleSmoothingEnabledChanged(ECheckBoxState InState);
    void HandleSmoothingMethodChanged(ECheckBoxState InState, EOdysseySmoothingMethod InMethod);
    void HandleSmoothingStrengthChanged(float InValue);
    void HandleSmoothingRealTimeChanged(ECheckBoxState InState);
    void HandleSmoothingCatchUpChanged(ECheckBoxState InState);
    void HandleToleranceChanged(float InValue);

    ECheckBoxState GetFreehandAdaptativeStepCheckState() const;
    ECheckBoxState IsInterpolationTypeChecked(EOdysseyInterpolationType InType) const;
    ECheckBoxState GetSmoothingEnabledCheckState() const;
    ECheckBoxState IsSmoothingMethodChecked(EOdysseySmoothingMethod InMethod) const;
    ECheckBoxState GetSmoothingRealTimeCheckState() const;
    ECheckBoxState GetSmoothingCatchUpCheckState() const;

    static FText FormatUnit(float InValue);

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (AllowPrivateAccess = "true"))
    TObjectPtr<UOdysseyRuntimePaintViewModel> ViewModel = nullptr;

    TSharedPtr<SSlider> SizeSlider;
    TSharedPtr<SSlider> OpacitySlider;
    TSharedPtr<SSlider> HardnessSlider;
    TSharedPtr<SSlider> FreehandStepSlider;
    TSharedPtr<SSlider> SmoothingStrengthSlider;
    TSharedPtr<SSlider> ToleranceSlider;

    TSharedPtr<STextBlock> SizeValueText;
    TSharedPtr<STextBlock> OpacityValueText;
    TSharedPtr<STextBlock> HardnessValueText;
    TSharedPtr<STextBlock> FreehandStepValueText;
    TSharedPtr<STextBlock> SmoothingStrengthValueText;
    TSharedPtr<STextBlock> ToleranceValueText;
    TSharedPtr<SVerticalBox> FreehandSection;
    TSharedPtr<SVerticalBox> SmoothingSection;
    TSharedPtr<SHorizontalBox> ToleranceRow;

    FDelegateHandle ToolChangedHandle;
    FDelegateHandle ToolSettingsChangedHandle;
    bool bSyncingFromViewModel = false;

    UPROPERTY(Transient)
    TObjectPtr<UOdysseyFreehandShape> FreehandShape = nullptr;
};
