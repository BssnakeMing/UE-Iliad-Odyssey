#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Input/Reply.h"
#include "Templates/SubclassOf.h"
#include "OdysseyRuntimePaintViewModel.h"
#include "OdysseyRuntimeBrushSelectorWidget.generated.h"

class STextBlock;
class SWrapBox;
class UOdysseyRuntimePaintViewModel;
class UOdysseyBrushAssetBase;

UCLASS(BlueprintType)
class ODYSSEYRUNTIMEWIDGETS_API UOdysseyRuntimeBrushSelectorWidget : public UWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetViewModel(UOdysseyRuntimePaintViewModel* InViewModel);

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    UOdysseyRuntimePaintViewModel* GetViewModel() const { return ViewModel; }

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    bool SelectNextBrush();

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    bool SelectPreviousBrush();

protected:
    virtual TSharedRef<SWidget> RebuildWidget() override;
    virtual void SynchronizeProperties() override;
    virtual void ReleaseSlateResources(bool bReleaseChildren) override;

#if WITH_EDITOR
    virtual const FText GetPaletteCategory() override;
#endif

private:
    bool SelectBrushByOffset(int32 InOffset);
    void ApplyWidgetBrushPresetsToViewModel();
    void EnsureValidSelection();
    FText BuildPresetLabel(const UOdysseyBrushAssetBase* InPreset, bool bSelected) const;
    FText BuildCurrentPresetText() const;
    void BindToViewModel();
    void UnbindFromViewModel();
    void HandleBrushPresetChanged(FName InPresetId, int32 InPresetIndex);
    void HandleBrushPresetsChanged();
    FReply HandlePresetClicked(int32 InPresetIndex);
    FReply HandlePreviousClicked();
    FReply HandleNextClicked();
    void RebuildPresetButtons();
    void RefreshPresetLabels();

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (AllowPrivateAccess = "true"))
    TObjectPtr<UOdysseyRuntimePaintViewModel> ViewModel = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint|Brushes", meta = (AllowPrivateAccess = "true"))
    TArray<TSubclassOf<UOdysseyBrushAssetBase>> BrushPresetClasses;

    UPROPERTY(Transient)
    TArray<TObjectPtr<UOdysseyBrushAssetBase>> RuntimeBrushPresetInstances;

    TSharedPtr<SWrapBox> PresetListBox;
    TArray<TSharedPtr<STextBlock>> PresetLabels;
    TSharedPtr<STextBlock> CurrentPresetLabel;
    FDelegateHandle BrushPresetChangedHandle;
    FDelegateHandle BrushPresetsChangedHandle;
};
