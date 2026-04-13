#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "OdysseyRuntimeColorWheelWidget.generated.h"

class SSlider;
class STextBlock;
class UOdysseyRuntimePaintViewModel;
struct FOdysseyRuntimeToolSettings;

UCLASS(BlueprintType)
class ODYSSEYRUNTIMEWIDGETS_API UOdysseyRuntimeColorWheelWidget : public UWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetViewModel(UOdysseyRuntimePaintViewModel* InViewModel);

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    UOdysseyRuntimePaintViewModel* GetViewModel() const { return ViewModel; }

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
    void HandleToolSettingsChanged(const FOdysseyRuntimeToolSettings& InSettings);
    void SyncFromViewModel();

    void HandleRedChanged(float InValue);
    void HandleGreenChanged(float InValue);
    void HandleBlueChanged(float InValue);
    void HandleAlphaChanged(float InValue);

    static FText FormatChannel(float InValue);

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (AllowPrivateAccess = "true"))
    TObjectPtr<UOdysseyRuntimePaintViewModel> ViewModel = nullptr;

    TSharedPtr<SSlider> RedSlider;
    TSharedPtr<SSlider> GreenSlider;
    TSharedPtr<SSlider> BlueSlider;
    TSharedPtr<SSlider> AlphaSlider;

    TSharedPtr<STextBlock> RedValueText;
    TSharedPtr<STextBlock> GreenValueText;
    TSharedPtr<STextBlock> BlueValueText;
    TSharedPtr<STextBlock> AlphaValueText;

    FDelegateHandle ToolSettingsChangedHandle;
    bool bSyncingFromViewModel = false;
};

