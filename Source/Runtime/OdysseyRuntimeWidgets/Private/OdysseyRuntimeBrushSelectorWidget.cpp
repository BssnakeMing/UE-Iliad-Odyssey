#include "OdysseyRuntimeBrushSelectorWidget.h"

#include "OdysseyBrushAssetBase.h"
#include "Templates/SubclassOf.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SWrapBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "OdysseyRuntimeBrushSelectorWidget"

void UOdysseyRuntimeBrushSelectorWidget::SetViewModel(UOdysseyRuntimePaintViewModel* InViewModel)
{
    if (ViewModel == InViewModel)
    {
        return;
    }

    UnbindFromViewModel();
    ViewModel = InViewModel;
    BindToViewModel();
    ApplyWidgetBrushPresetsToViewModel();
    EnsureValidSelection();
    RebuildPresetButtons();
}

bool UOdysseyRuntimeBrushSelectorWidget::SelectNextBrush()
{
    return SelectBrushByOffset(1);
}

bool UOdysseyRuntimeBrushSelectorWidget::SelectPreviousBrush()
{
    return SelectBrushByOffset(-1);
}

TSharedRef<SWidget> UOdysseyRuntimeBrushSelectorWidget::RebuildWidget()
{
    TSharedRef<SVerticalBox> Root = SNew(SVerticalBox)
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SNew(STextBlock).Text(LOCTEXT("PresetTitle", "Brush Presets"))
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(0.0f, 0.0f, 4.0f, 0.0f)
            [
                SNew(SButton)
                .OnClicked(FOnClicked::CreateUObject(this, &UOdysseyRuntimeBrushSelectorWidget::HandlePreviousClicked))
                [
                    SNew(STextBlock).Text(LOCTEXT("PrevBrush", "<"))
                ]
            ]
            + SHorizontalBox::Slot()
            .FillWidth(1.0f)
            .VAlign(VAlign_Center)
            [
                SAssignNew(CurrentPresetLabel, STextBlock)
            ]
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(4.0f, 0.0f, 0.0f, 0.0f)
            [
                SNew(SButton)
                .OnClicked(FOnClicked::CreateUObject(this, &UOdysseyRuntimeBrushSelectorWidget::HandleNextClicked))
                [
                    SNew(STextBlock).Text(LOCTEXT("NextBrush", ">"))
                ]
            ]
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SAssignNew(PresetListBox, SWrapBox)
            .UseAllottedWidth(true)
        ];

    BindToViewModel();
    ApplyWidgetBrushPresetsToViewModel();
    EnsureValidSelection();
    RebuildPresetButtons();
    return Root;
}

void UOdysseyRuntimeBrushSelectorWidget::SynchronizeProperties()
{
    Super::SynchronizeProperties();
    BindToViewModel();
    ApplyWidgetBrushPresetsToViewModel();
    EnsureValidSelection();
    RebuildPresetButtons();
}

void UOdysseyRuntimeBrushSelectorWidget::ReleaseSlateResources(bool bReleaseChildren)
{
    Super::ReleaseSlateResources(bReleaseChildren);
    PresetLabels.Reset();
    PresetListBox.Reset();
    CurrentPresetLabel.Reset();
    UnbindFromViewModel();
}

#if WITH_EDITOR
const FText UOdysseyRuntimeBrushSelectorWidget::GetPaletteCategory()
{
    return LOCTEXT("IliadCategory", "Iliad");
}
#endif

bool UOdysseyRuntimeBrushSelectorWidget::SelectBrushByOffset(int32 InOffset)
{
    if (!ViewModel)
    {
        return false;
    }

    const TArray<TObjectPtr<UOdysseyBrushAssetBase>>& Presets = ViewModel->GetBrushPresets();
    if (Presets.IsEmpty())
    {
        return false;
    }

    int32 CurrentIndex = ViewModel->GetSelectedBrushPresetIndex();
    if (CurrentIndex == INDEX_NONE)
    {
        CurrentIndex = InOffset >= 0 ? 0 : (Presets.Num() - 1);
    }

    int32 NextIndex = (CurrentIndex + InOffset) % Presets.Num();
    if (NextIndex < 0)
    {
        NextIndex += Presets.Num();
    }

    const bool bSelected = ViewModel->SelectBrushPresetByIndex(NextIndex);
    RefreshPresetLabels();
    return bSelected;
}

void UOdysseyRuntimeBrushSelectorWidget::ApplyWidgetBrushPresetsToViewModel()
{
    if (!ViewModel)
    {
        return;
    }

    RuntimeBrushPresetInstances.Reset();

    TSet<UClass*> AddedPresetClasses;
    TArray<UOdysseyBrushAssetBase*> SanitizedPresets;
    SanitizedPresets.Reserve(BrushPresetClasses.Num());

    for (const TSubclassOf<UOdysseyBrushAssetBase>& BrushClassRef : BrushPresetClasses)
    {
        UClass* BrushClass = BrushClassRef.Get();
        if (!BrushClass || BrushClass->HasAnyClassFlags(CLASS_Abstract) || AddedPresetClasses.Contains(BrushClass))
        {
            continue;
        }

        UOdysseyBrushAssetBase* BrushInstance = NewObject<UOdysseyBrushAssetBase>(this, BrushClass);
        if (BrushInstance)
        {
            AddedPresetClasses.Add(BrushClass);
            RuntimeBrushPresetInstances.Add(BrushInstance);
            SanitizedPresets.Add(BrushInstance);
        }
    }

    ViewModel->SetBrushPresets(SanitizedPresets);
}

void UOdysseyRuntimeBrushSelectorWidget::EnsureValidSelection()
{
    if (!ViewModel)
    {
        return;
    }

    if (ViewModel->GetBrushPresets().IsEmpty())
    {
        return;
    }

    if (ViewModel->GetSelectedBrushPresetIndex() == INDEX_NONE)
    {
        ViewModel->SelectBrushPresetByIndex(0);
    }
}

FText UOdysseyRuntimeBrushSelectorWidget::BuildPresetLabel(const UOdysseyBrushAssetBase* InPreset, bool bSelected) const
{
    const FText DisplayText = InPreset ? FText::FromName(InPreset->GetFName()) : LOCTEXT("InvalidBrushAsset", "Invalid Brush");
    const FString Label = FString::Printf(TEXT("%s %s"), bSelected ? TEXT("●") : TEXT("○"), *DisplayText.ToString());

    return FText::FromString(Label);
}

FText UOdysseyRuntimeBrushSelectorWidget::BuildCurrentPresetText() const
{
    if (!ViewModel)
    {
        return LOCTEXT("CurrentBrushNoViewModel", "Current: None");
    }

    const TArray<TObjectPtr<UOdysseyBrushAssetBase>>& Presets = ViewModel->GetBrushPresets();
    if (Presets.IsEmpty())
    {
        return LOCTEXT("CurrentBrushEmpty", "Current: No Brush");
    }

    int32 SelectedIndex = ViewModel->GetSelectedBrushPresetIndex();
    if (!Presets.IsValidIndex(SelectedIndex))
    {
        SelectedIndex = 0;
    }

    const UOdysseyBrushAssetBase* Preset = Presets[SelectedIndex].Get();
    const FText DisplayText = Preset ? FText::FromName(Preset->GetFName()) : LOCTEXT("InvalidBrushAsset", "Invalid Brush");

    return FText::Format(
        LOCTEXT("CurrentBrushFormat", "Current: {0} ({1}/{2})"),
        DisplayText,
        FText::AsNumber(SelectedIndex + 1),
        FText::AsNumber(Presets.Num()));
}

void UOdysseyRuntimeBrushSelectorWidget::BindToViewModel()
{
    if (!ViewModel)
    {
        return;
    }

    if (!BrushPresetChangedHandle.IsValid())
    {
        BrushPresetChangedHandle = ViewModel->OnBrushPresetChangedNative.AddUObject(this, &UOdysseyRuntimeBrushSelectorWidget::HandleBrushPresetChanged);
    }

    if (!BrushPresetsChangedHandle.IsValid())
    {
        BrushPresetsChangedHandle = ViewModel->OnBrushPresetsChangedNative.AddUObject(this, &UOdysseyRuntimeBrushSelectorWidget::HandleBrushPresetsChanged);
    }
}

void UOdysseyRuntimeBrushSelectorWidget::UnbindFromViewModel()
{
    if (ViewModel && BrushPresetChangedHandle.IsValid())
    {
        ViewModel->OnBrushPresetChangedNative.Remove(BrushPresetChangedHandle);
    }

    if (ViewModel && BrushPresetsChangedHandle.IsValid())
    {
        ViewModel->OnBrushPresetsChangedNative.Remove(BrushPresetsChangedHandle);
    }

    BrushPresetChangedHandle.Reset();
    BrushPresetsChangedHandle.Reset();
}

void UOdysseyRuntimeBrushSelectorWidget::HandleBrushPresetChanged(FName InPresetId, int32 InPresetIndex)
{
    RefreshPresetLabels();
}

void UOdysseyRuntimeBrushSelectorWidget::HandleBrushPresetsChanged()
{
    EnsureValidSelection();
    RebuildPresetButtons();
}

FReply UOdysseyRuntimeBrushSelectorWidget::HandlePresetClicked(int32 InPresetIndex)
{
    if (ViewModel)
    {
        ViewModel->SelectBrushPresetByIndex(InPresetIndex);
    }

    RefreshPresetLabels();
    return FReply::Handled();
}

FReply UOdysseyRuntimeBrushSelectorWidget::HandlePreviousClicked()
{
    SelectPreviousBrush();
    return FReply::Handled();
}

FReply UOdysseyRuntimeBrushSelectorWidget::HandleNextClicked()
{
    SelectNextBrush();
    return FReply::Handled();
}

void UOdysseyRuntimeBrushSelectorWidget::RebuildPresetButtons()
{
    if (!PresetListBox.IsValid())
    {
        return;
    }

    PresetListBox->ClearChildren();
    PresetLabels.Reset();

    if (!ViewModel)
    {
        return;
    }

    const TArray<TObjectPtr<UOdysseyBrushAssetBase>>& Presets = ViewModel->GetBrushPresets();
    PresetLabels.Reserve(Presets.Num());

    for (int32 PresetIndex = 0; PresetIndex < Presets.Num(); ++PresetIndex)
    {
        TSharedPtr<STextBlock> PresetLabel;

        PresetListBox->AddSlot()
        .Padding(2.0f)
        [
            SNew(SButton)
            .OnClicked(FOnClicked::CreateUObject(this, &UOdysseyRuntimeBrushSelectorWidget::HandlePresetClicked, PresetIndex))
            [
                SAssignNew(PresetLabel, STextBlock)
            ]
        ];

        PresetLabels.Add(PresetLabel);
    }

    RefreshPresetLabels();
}

void UOdysseyRuntimeBrushSelectorWidget::RefreshPresetLabels()
{
    if (ViewModel)
    {
        const TArray<TObjectPtr<UOdysseyBrushAssetBase>>& Presets = ViewModel->GetBrushPresets();
        const FName SelectedPresetId = ViewModel->GetSelectedBrushPresetId();

        const int32 LabelCount = FMath::Min(Presets.Num(), PresetLabels.Num());
        for (int32 Index = 0; Index < LabelCount; ++Index)
        {
            if (!PresetLabels[Index].IsValid())
            {
                continue;
            }

            const UOdysseyBrushAssetBase* Preset = Presets[Index].Get();
            const bool bSelected = Preset && Preset->GetFName() == SelectedPresetId;
            PresetLabels[Index]->SetText(BuildPresetLabel(Preset, bSelected));
        }
    }

    if (CurrentPresetLabel.IsValid())
    {
        CurrentPresetLabel->SetText(BuildCurrentPresetText());
    }
}

#undef LOCTEXT_NAMESPACE
