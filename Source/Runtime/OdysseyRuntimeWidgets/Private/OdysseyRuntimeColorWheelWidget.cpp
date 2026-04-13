#include "OdysseyRuntimeColorWheelWidget.h"

#include "OdysseyRuntimePaintViewModel.h"
#include "Widgets/Input/SSlider.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "OdysseyRuntimeColorWheelWidget"

void UOdysseyRuntimeColorWheelWidget::SetViewModel(UOdysseyRuntimePaintViewModel* InViewModel)
{
    if (ViewModel == InViewModel)
    {
        return;
    }

    UnbindFromViewModel();
    ViewModel = InViewModel;
    BindToViewModel();
    SyncFromViewModel();
}

TSharedRef<SWidget> UOdysseyRuntimeColorWheelWidget::RebuildWidget()
{
    TSharedRef<SVerticalBox> Root = SNew(SVerticalBox)
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SNew(STextBlock).Text(LOCTEXT("ColorTitle", "Color"))
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(0.0f, 0.0f, 8.0f, 0.0f)
            [
                SNew(STextBlock).Text(LOCTEXT("ColorR", "R"))
            ]
            + SHorizontalBox::Slot()
            .FillWidth(1.0f)
            [
                SAssignNew(RedSlider, SSlider).OnValueChanged_UObject(this, &UOdysseyRuntimeColorWheelWidget::HandleRedChanged)
            ]
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(8.0f, 0.0f, 0.0f, 0.0f)
            [
                SAssignNew(RedValueText, STextBlock)
            ]
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(0.0f, 0.0f, 8.0f, 0.0f)
            [
                SNew(STextBlock).Text(LOCTEXT("ColorG", "G"))
            ]
            + SHorizontalBox::Slot()
            .FillWidth(1.0f)
            [
                SAssignNew(GreenSlider, SSlider).OnValueChanged_UObject(this, &UOdysseyRuntimeColorWheelWidget::HandleGreenChanged)
            ]
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(8.0f, 0.0f, 0.0f, 0.0f)
            [
                SAssignNew(GreenValueText, STextBlock)
            ]
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(0.0f, 0.0f, 8.0f, 0.0f)
            [
                SNew(STextBlock).Text(LOCTEXT("ColorB", "B"))
            ]
            + SHorizontalBox::Slot()
            .FillWidth(1.0f)
            [
                SAssignNew(BlueSlider, SSlider).OnValueChanged_UObject(this, &UOdysseyRuntimeColorWheelWidget::HandleBlueChanged)
            ]
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(8.0f, 0.0f, 0.0f, 0.0f)
            [
                SAssignNew(BlueValueText, STextBlock)
            ]
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(0.0f, 0.0f, 8.0f, 0.0f)
            [
                SNew(STextBlock).Text(LOCTEXT("ColorA", "A"))
            ]
            + SHorizontalBox::Slot()
            .FillWidth(1.0f)
            [
                SAssignNew(AlphaSlider, SSlider).OnValueChanged_UObject(this, &UOdysseyRuntimeColorWheelWidget::HandleAlphaChanged)
            ]
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(8.0f, 0.0f, 0.0f, 0.0f)
            [
                SAssignNew(AlphaValueText, STextBlock)
            ]
        ];

    BindToViewModel();
    SyncFromViewModel();
    return Root;
}

void UOdysseyRuntimeColorWheelWidget::SynchronizeProperties()
{
    Super::SynchronizeProperties();
    BindToViewModel();
    SyncFromViewModel();
}

void UOdysseyRuntimeColorWheelWidget::ReleaseSlateResources(bool bReleaseChildren)
{
    Super::ReleaseSlateResources(bReleaseChildren);
    RedSlider.Reset();
    GreenSlider.Reset();
    BlueSlider.Reset();
    AlphaSlider.Reset();
    RedValueText.Reset();
    GreenValueText.Reset();
    BlueValueText.Reset();
    AlphaValueText.Reset();
    UnbindFromViewModel();
}

#if WITH_EDITOR
const FText UOdysseyRuntimeColorWheelWidget::GetPaletteCategory()
{
    return LOCTEXT("IliadCategory", "Iliad");
}
#endif

void UOdysseyRuntimeColorWheelWidget::BindToViewModel()
{
    if (!ViewModel || ToolSettingsChangedHandle.IsValid())
    {
        return;
    }

    ToolSettingsChangedHandle = ViewModel->OnToolSettingsChangedNative.AddUObject(this, &UOdysseyRuntimeColorWheelWidget::HandleToolSettingsChanged);
}

void UOdysseyRuntimeColorWheelWidget::UnbindFromViewModel()
{
    if (ViewModel && ToolSettingsChangedHandle.IsValid())
    {
        ViewModel->OnToolSettingsChangedNative.Remove(ToolSettingsChangedHandle);
    }

    ToolSettingsChangedHandle.Reset();
}

void UOdysseyRuntimeColorWheelWidget::HandleToolSettingsChanged(const FOdysseyRuntimeToolSettings& InSettings)
{
    SyncFromViewModel();
}

void UOdysseyRuntimeColorWheelWidget::SyncFromViewModel()
{
    if (!ViewModel)
    {
        return;
    }

    const FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();

    bSyncingFromViewModel = true;
    if (RedSlider.IsValid())
    {
        RedSlider->SetValue(Settings.Color.R);
    }
    if (GreenSlider.IsValid())
    {
        GreenSlider->SetValue(Settings.Color.G);
    }
    if (BlueSlider.IsValid())
    {
        BlueSlider->SetValue(Settings.Color.B);
    }
    if (AlphaSlider.IsValid())
    {
        AlphaSlider->SetValue(Settings.Color.A);
    }
    bSyncingFromViewModel = false;

    if (RedValueText.IsValid())
    {
        RedValueText->SetText(FormatChannel(Settings.Color.R));
    }
    if (GreenValueText.IsValid())
    {
        GreenValueText->SetText(FormatChannel(Settings.Color.G));
    }
    if (BlueValueText.IsValid())
    {
        BlueValueText->SetText(FormatChannel(Settings.Color.B));
    }
    if (AlphaValueText.IsValid())
    {
        AlphaValueText->SetText(FormatChannel(Settings.Color.A));
    }
}

void UOdysseyRuntimeColorWheelWidget::HandleRedChanged(float InValue)
{
    if (!ViewModel)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.Color.R = InValue;
    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeColorWheelWidget::HandleGreenChanged(float InValue)
{
    if (!ViewModel)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.Color.G = InValue;
    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeColorWheelWidget::HandleBlueChanged(float InValue)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.Color.B = InValue;
    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeColorWheelWidget::HandleAlphaChanged(float InValue)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.Color.A = InValue;
    ViewModel->SetToolSettings(Settings);
}

FText UOdysseyRuntimeColorWheelWidget::FormatChannel(float InValue)
{
    const FString ValueText = FString::Printf(TEXT("%.2f"), FMath::Clamp(InValue, 0.0f, 1.0f));
    return FText::FromString(ValueText);
}

#undef LOCTEXT_NAMESPACE
