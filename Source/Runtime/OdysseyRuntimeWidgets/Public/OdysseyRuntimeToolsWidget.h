#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Input/Reply.h"
#include "OdysseyRuntimePaintToolTypes.h"
#include "OdysseyRuntimeToolsWidget.generated.h"

class STextBlock;
class UOdysseyRuntimePaintViewModel;

UCLASS(BlueprintType)
class ODYSSEYRUNTIMEWIDGETS_API UOdysseyRuntimeToolsWidget : public UWidget
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
    void HandleViewModelToolChanged(EOdysseyRuntimePaintTool InTool);
    FReply HandleToolClicked(EOdysseyRuntimePaintTool InTool);
    FText GetToolLabel(EOdysseyRuntimePaintTool InTool, const TCHAR* InBaseLabel) const;
    void RefreshButtonLabels();

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (AllowPrivateAccess = "true"))
    TObjectPtr<UOdysseyRuntimePaintViewModel> ViewModel = nullptr;

    TSharedPtr<STextBlock> BrushLabel;
    TSharedPtr<STextBlock> EraserLabel;
    TSharedPtr<STextBlock> BucketLabel;
    FDelegateHandle ToolChangedHandle;
};
