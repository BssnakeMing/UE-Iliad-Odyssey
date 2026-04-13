#include "OdysseyRuntimeToolOptionsWidget.h"

#include "FreehandShape/OdysseyFreehandShape.h"
#include "OdysseyRuntimePaintViewModel.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SSlider.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "OdysseyRuntimeToolOptionsWidget"

void UOdysseyRuntimeToolOptionsWidget::SetViewModel(UOdysseyRuntimePaintViewModel* InViewModel)
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

void UOdysseyRuntimeToolOptionsWidget::SetFreehandShape(UOdysseyFreehandShape* InFreehandShape)
{
    FreehandShape = InFreehandShape;
    SyncFromViewModel();
}

TSharedRef<SWidget> UOdysseyRuntimeToolOptionsWidget::RebuildWidget()
{
    TSharedRef<SVerticalBox> Root = SNew(SVerticalBox)
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SNew(STextBlock).Text(LOCTEXT("OptionsTitle", "Tool Options"))
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
                SNew(STextBlock).Text(LOCTEXT("SizeLabel", "Size"))
            ]
            + SHorizontalBox::Slot()
            .FillWidth(1.0f)
            [
                SAssignNew(SizeSlider, SSlider)
                .MinValue(1.0f)
                .MaxValue(256.0f)
                .OnValueChanged_UObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleSizeChanged)
            ]
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(8.0f, 0.0f, 0.0f, 0.0f)
            [
                SAssignNew(SizeValueText, STextBlock)
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
                SNew(STextBlock).Text(LOCTEXT("OpacityLabel", "Opacity"))
            ]
            + SHorizontalBox::Slot()
            .FillWidth(1.0f)
            [
                SAssignNew(OpacitySlider, SSlider).OnValueChanged_UObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleOpacityChanged)
            ]
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(8.0f, 0.0f, 0.0f, 0.0f)
            [
                SAssignNew(OpacityValueText, STextBlock)
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
                SNew(STextBlock).Text(LOCTEXT("HardnessLabel", "Hardness"))
            ]
            + SHorizontalBox::Slot()
            .FillWidth(1.0f)
            [
                SAssignNew(HardnessSlider, SSlider).OnValueChanged_UObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleHardnessChanged)
            ]
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(8.0f, 0.0f, 0.0f, 0.0f)
            [
                SAssignNew(HardnessValueText, STextBlock)
            ]
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SAssignNew(FreehandSection, SVerticalBox)
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0.0f, 2.0f)
            [
                SNew(STextBlock).Text(LOCTEXT("FreehandSectionLabel", "Freehand Shape"))
            ]
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0.0f, 2.0f)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                .AutoWidth()
                .VAlign(VAlign_Center)
                .Padding(0.0f, 0.0f, 8.0f, 0.0f)
                [
                    SNew(STextBlock).Text(LOCTEXT("FreehandStepLabel", "Step"))
                ]
                + SHorizontalBox::Slot()
                .FillWidth(1.0f)
                [
                    SAssignNew(FreehandStepSlider, SSlider)
                    .MinValue(1.0f)
                    .MaxValue(200.0f)
                    .OnValueChanged_UObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleFreehandStepChanged)
                ]
                + SHorizontalBox::Slot()
                .AutoWidth()
                .VAlign(VAlign_Center)
                .Padding(8.0f, 0.0f, 0.0f, 0.0f)
                [
                    SAssignNew(FreehandStepValueText, STextBlock)
                ]
            ]
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0.0f, 2.0f)
            [
                SNew(SCheckBox)
                .OnCheckStateChanged_UObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleFreehandAdaptativeStepChanged)
                .IsChecked_UObject(this, &UOdysseyRuntimeToolOptionsWidget::GetFreehandAdaptativeStepCheckState)
                [
                    SNew(STextBlock).Text(LOCTEXT("FreehandAdaptativeLabel", "Adaptative Step"))
                ]
            ]
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0.0f, 2.0f)
            [
                SNew(SHorizontalBox)
                + SHorizontalBox::Slot()
                .AutoWidth()
                .VAlign(VAlign_Center)
                .Padding(0.0f, 0.0f, 8.0f, 0.0f)
                [
                    SNew(STextBlock).Text(LOCTEXT("InterpolationTypeLabel", "Interpolation"))
                ]
                + SHorizontalBox::Slot()
                .AutoWidth()
                .Padding(0.0f, 0.0f, 8.0f, 0.0f)
                [
                    SNew(SCheckBox)
                    .OnCheckStateChanged(FOnCheckStateChanged::CreateUObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleInterpolationTypeChanged, EOdysseyInterpolationType::kCatmullRom))
                    .IsChecked_Lambda([this]() { return IsInterpolationTypeChecked(EOdysseyInterpolationType::kCatmullRom); })
                    [
                        SNew(STextBlock).Text(LOCTEXT("InterpolationCatmullRomLabel", "Catmull-Rom"))
                    ]
                ]
                + SHorizontalBox::Slot()
                .AutoWidth()
                .Padding(0.0f, 0.0f, 8.0f, 0.0f)
                [
                    SNew(SCheckBox)
                    .OnCheckStateChanged(FOnCheckStateChanged::CreateUObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleInterpolationTypeChanged, EOdysseyInterpolationType::kBezier))
                    .IsChecked_Lambda([this]() { return IsInterpolationTypeChecked(EOdysseyInterpolationType::kBezier); })
                    [
                        SNew(STextBlock).Text(LOCTEXT("InterpolationBezierLabel", "Bezier"))
                    ]
                ]
                + SHorizontalBox::Slot()
                .AutoWidth()
                [
                    SNew(SCheckBox)
                    .OnCheckStateChanged(FOnCheckStateChanged::CreateUObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleInterpolationTypeChanged, EOdysseyInterpolationType::kLine))
                    .IsChecked_Lambda([this]() { return IsInterpolationTypeChecked(EOdysseyInterpolationType::kLine); })
                    [
                        SNew(STextBlock).Text(LOCTEXT("InterpolationLineLabel", "Line"))
                    ]
                ]
            ]
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0.0f, 2.0f)
            [
                SNew(SCheckBox)
                .OnCheckStateChanged_UObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleSmoothingEnabledChanged)
                .IsChecked_UObject(this, &UOdysseyRuntimeToolOptionsWidget::GetSmoothingEnabledCheckState)
                [
                    SNew(STextBlock).Text(LOCTEXT("SmoothingEnabledLabel", "Smoothing Enabled"))
                ]
            ]
            + SVerticalBox::Slot()
            .AutoHeight()
            .Padding(0.0f, 2.0f)
            [
                SAssignNew(SmoothingSection, SVerticalBox)
                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(0.0f, 2.0f)
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                    .AutoWidth()
                    .VAlign(VAlign_Center)
                    .Padding(0.0f, 0.0f, 8.0f, 0.0f)
                    [
                        SNew(STextBlock).Text(LOCTEXT("SmoothingMethodLabel", "Method"))
                    ]
                    + SHorizontalBox::Slot()
                    .AutoWidth()
                    .Padding(0.0f, 0.0f, 8.0f, 0.0f)
                    [
                        SNew(SCheckBox)
                        .OnCheckStateChanged(FOnCheckStateChanged::CreateUObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleSmoothingMethodChanged, EOdysseySmoothingMethod::kAverage))
                        .IsChecked_Lambda([this]() { return IsSmoothingMethodChecked(EOdysseySmoothingMethod::kAverage); })
                        [
                            SNew(STextBlock).Text(LOCTEXT("SmoothingAverageLabel", "Average"))
                        ]
                    ]
                    + SHorizontalBox::Slot()
                    .AutoWidth()
                    [
                        SNew(SCheckBox)
                        .OnCheckStateChanged(FOnCheckStateChanged::CreateUObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleSmoothingMethodChanged, EOdysseySmoothingMethod::kPull))
                        .IsChecked_Lambda([this]() { return IsSmoothingMethodChecked(EOdysseySmoothingMethod::kPull); })
                        [
                            SNew(STextBlock).Text(LOCTEXT("SmoothingPullLabel", "Pull"))
                        ]
                    ]
                ]
                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(0.0f, 2.0f)
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                    .AutoWidth()
                    .VAlign(VAlign_Center)
                    .Padding(0.0f, 0.0f, 8.0f, 0.0f)
                    [
                        SNew(STextBlock).Text(LOCTEXT("SmoothingStrengthLabel", "Strength"))
                    ]
                    + SHorizontalBox::Slot()
                    .FillWidth(1.0f)
                    [
                        SAssignNew(SmoothingStrengthSlider, SSlider)
                        .MinValue(1.0f)
                        .MaxValue(200.0f)
                        .OnValueChanged_UObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleSmoothingStrengthChanged)
                    ]
                    + SHorizontalBox::Slot()
                    .AutoWidth()
                    .VAlign(VAlign_Center)
                    .Padding(8.0f, 0.0f, 0.0f, 0.0f)
                    [
                        SAssignNew(SmoothingStrengthValueText, STextBlock)
                    ]
                ]
                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(0.0f, 2.0f)
                [
                    SNew(SCheckBox)
                    .OnCheckStateChanged_UObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleSmoothingRealTimeChanged)
                    .IsChecked_UObject(this, &UOdysseyRuntimeToolOptionsWidget::GetSmoothingRealTimeCheckState)
                    [
                        SNew(STextBlock).Text(LOCTEXT("SmoothingRealtimeLabel", "Realtime"))
                    ]
                ]
                + SVerticalBox::Slot()
                .AutoHeight()
                .Padding(0.0f, 2.0f)
                [
                    SNew(SCheckBox)
                    .OnCheckStateChanged_UObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleSmoothingCatchUpChanged)
                    .IsChecked_UObject(this, &UOdysseyRuntimeToolOptionsWidget::GetSmoothingCatchUpCheckState)
                    [
                        SNew(STextBlock).Text(LOCTEXT("SmoothingCatchUpLabel", "Catch Up"))
                    ]
                ]
            ]
        ]
        + SVerticalBox::Slot()
        .AutoHeight()
        .Padding(2.0f)
        [
            SAssignNew(ToleranceRow, SHorizontalBox)
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(0.0f, 0.0f, 8.0f, 0.0f)
            [
                SNew(STextBlock).Text(LOCTEXT("ToleranceLabel", "Tolerance"))
            ]
            + SHorizontalBox::Slot()
            .FillWidth(1.0f)
            [
                SAssignNew(ToleranceSlider, SSlider).OnValueChanged_UObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleToleranceChanged)
            ]
            + SHorizontalBox::Slot()
            .AutoWidth()
            .VAlign(VAlign_Center)
            .Padding(8.0f, 0.0f, 0.0f, 0.0f)
            [
                SAssignNew(ToleranceValueText, STextBlock)
            ]
        ];

    BindToViewModel();
    SyncFromViewModel();
    return Root;
}

void UOdysseyRuntimeToolOptionsWidget::SynchronizeProperties()
{
    Super::SynchronizeProperties();
    BindToViewModel();
    SyncFromViewModel();
}

void UOdysseyRuntimeToolOptionsWidget::ReleaseSlateResources(bool bReleaseChildren)
{
    Super::ReleaseSlateResources(bReleaseChildren);
    SizeSlider.Reset();
    OpacitySlider.Reset();
    HardnessSlider.Reset();
    FreehandStepSlider.Reset();
    SmoothingStrengthSlider.Reset();
    ToleranceSlider.Reset();
    SizeValueText.Reset();
    OpacityValueText.Reset();
    HardnessValueText.Reset();
    FreehandStepValueText.Reset();
    SmoothingStrengthValueText.Reset();
    ToleranceValueText.Reset();
    FreehandSection.Reset();
    SmoothingSection.Reset();
    ToleranceRow.Reset();
    UnbindFromViewModel();
}

#if WITH_EDITOR
const FText UOdysseyRuntimeToolOptionsWidget::GetPaletteCategory()
{
    return LOCTEXT("IliadCategory", "Iliad");
}
#endif

void UOdysseyRuntimeToolOptionsWidget::BindToViewModel()
{
    if (!ViewModel)
    {
        return;
    }

    if (!ToolChangedHandle.IsValid())
    {
        ToolChangedHandle = ViewModel->OnActiveToolChangedNative.AddUObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleToolChanged);
    }

    if (!ToolSettingsChangedHandle.IsValid())
    {
        ToolSettingsChangedHandle = ViewModel->OnToolSettingsChangedNative.AddUObject(this, &UOdysseyRuntimeToolOptionsWidget::HandleToolSettingsChanged);
    }
}

void UOdysseyRuntimeToolOptionsWidget::UnbindFromViewModel()
{
    if (ViewModel && ToolChangedHandle.IsValid())
    {
        ViewModel->OnActiveToolChangedNative.Remove(ToolChangedHandle);
    }

    if (ViewModel && ToolSettingsChangedHandle.IsValid())
    {
        ViewModel->OnToolSettingsChangedNative.Remove(ToolSettingsChangedHandle);
    }

    ToolChangedHandle.Reset();
    ToolSettingsChangedHandle.Reset();
}

void UOdysseyRuntimeToolOptionsWidget::HandleToolChanged(EOdysseyRuntimePaintTool InTool)
{
    (void)InTool;
    RefreshFreehandVisibility();
    RefreshToleranceVisibility();
}

void UOdysseyRuntimeToolOptionsWidget::HandleToolSettingsChanged(const FOdysseyRuntimeToolSettings& InSettings)
{
    (void)InSettings;
    SyncFromViewModel();
}

void UOdysseyRuntimeToolOptionsWidget::SyncFromViewModel()
{
    if (!ViewModel)
    {
        return;
    }

    const FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    ApplyFreehandSettingsToShape(Settings);

    bSyncingFromViewModel = true;
    if (SizeSlider.IsValid())
    {
        SizeSlider->SetValue(Settings.Size);
    }
    if (OpacitySlider.IsValid())
    {
        OpacitySlider->SetValue(Settings.Opacity);
    }
    if (HardnessSlider.IsValid())
    {
        HardnessSlider->SetValue(Settings.Hardness);
    }
    if (FreehandStepSlider.IsValid())
    {
        FreehandStepSlider->SetValue(Settings.FreehandStep);
    }
    if (SmoothingStrengthSlider.IsValid())
    {
        SmoothingStrengthSlider->SetValue(static_cast<float>(Settings.FreehandSmoothingOptions.SmoothingStrength));
    }
    if (ToleranceSlider.IsValid())
    {
        ToleranceSlider->SetValue(Settings.Tolerance);
    }
    bSyncingFromViewModel = false;

    if (SizeValueText.IsValid())
    {
        SizeValueText->SetText(FormatUnit(Settings.Size));
    }
    if (OpacityValueText.IsValid())
    {
        OpacityValueText->SetText(FormatUnit(Settings.Opacity));
    }
    if (HardnessValueText.IsValid())
    {
        HardnessValueText->SetText(FormatUnit(Settings.Hardness));
    }
    if (FreehandStepValueText.IsValid())
    {
        FreehandStepValueText->SetText(FormatUnit(Settings.FreehandStep));
    }
    if (SmoothingStrengthValueText.IsValid())
    {
        SmoothingStrengthValueText->SetText(FText::AsNumber(Settings.FreehandSmoothingOptions.SmoothingStrength));
    }
    if (ToleranceValueText.IsValid())
    {
        ToleranceValueText->SetText(FormatUnit(Settings.Tolerance));
    }

    RefreshFreehandVisibility();
    RefreshToleranceVisibility();
}

void UOdysseyRuntimeToolOptionsWidget::RefreshFreehandVisibility()
{
    if (!FreehandSection.IsValid())
    {
        return;
    }

    const bool bShowFreehand =
        ViewModel &&
        (ViewModel->GetActiveTool() == EOdysseyRuntimePaintTool::Brush || ViewModel->GetActiveTool() == EOdysseyRuntimePaintTool::Eraser);
    FreehandSection->SetVisibility(bShowFreehand ? EVisibility::Visible : EVisibility::Collapsed);
    RefreshSmoothingVisibility();
}

void UOdysseyRuntimeToolOptionsWidget::RefreshSmoothingVisibility()
{
    if (!SmoothingSection.IsValid())
    {
        return;
    }

    if (!ViewModel)
    {
        SmoothingSection->SetVisibility(EVisibility::Collapsed);
        return;
    }

    const bool bShowFreehand =
        (ViewModel->GetActiveTool() == EOdysseyRuntimePaintTool::Brush || ViewModel->GetActiveTool() == EOdysseyRuntimePaintTool::Eraser);
    const bool bShowSmoothing = bShowFreehand && ViewModel->GetToolSettings().bFreehandSmoothingEnabled;
    SmoothingSection->SetVisibility(bShowSmoothing ? EVisibility::Visible : EVisibility::Collapsed);
}

void UOdysseyRuntimeToolOptionsWidget::RefreshToleranceVisibility()
{
    if (!ToleranceRow.IsValid())
    {
        return;
    }

    const bool bShowTolerance = ViewModel && ViewModel->GetActiveTool() == EOdysseyRuntimePaintTool::Bucket;
    ToleranceRow->SetVisibility(bShowTolerance ? EVisibility::Visible : EVisibility::Collapsed);
}

UOdysseyFreehandShape* UOdysseyRuntimeToolOptionsWidget::ResolveFreehandShape()
{
    if (FreehandShape)
    {
        return FreehandShape;
    }

    FreehandShape = NewObject<UOdysseyFreehandShape>(this, TEXT("RuntimeToolOptionsFreehandShape"));
    return FreehandShape;
}

void UOdysseyRuntimeToolOptionsWidget::ApplyFreehandSettingsToShape(const FOdysseyRuntimeToolSettings& InSettings)
{
    UOdysseyFreehandShape* Shape = ResolveFreehandShape();
    if (!Shape)
    {
        return;
    }

    Shape->SetStep(InSettings.FreehandStep);
    Shape->SetAdaptativeStep(InSettings.bFreehandAdaptativeStep);
    Shape->SetInterpolationType(InSettings.FreehandInterpolationType);
    Shape->SetSmoothingEnabled(InSettings.bFreehandSmoothingEnabled);
    Shape->SetSmoothingOptions(InSettings.FreehandSmoothingOptions);
}

void UOdysseyRuntimeToolOptionsWidget::HandleSizeChanged(float InValue)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    ViewModel->SetSize(InValue);
}

void UOdysseyRuntimeToolOptionsWidget::HandleOpacityChanged(float InValue)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    ViewModel->SetOpacity(InValue);
}

void UOdysseyRuntimeToolOptionsWidget::HandleHardnessChanged(float InValue)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    ViewModel->SetHardness(InValue);
}

void UOdysseyRuntimeToolOptionsWidget::HandleFreehandStepChanged(float InValue)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.FreehandStep = InValue;

    if (UOdysseyFreehandShape* Shape = ResolveFreehandShape())
    {
        Shape->SetStep(Settings.FreehandStep);
        Settings.FreehandStep = Shape->GetStep();
    }

    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeToolOptionsWidget::HandleFreehandAdaptativeStepChanged(ECheckBoxState InState)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.bFreehandAdaptativeStep = (InState == ECheckBoxState::Checked);
    if (UOdysseyFreehandShape* Shape = ResolveFreehandShape())
    {
        Shape->SetAdaptativeStep(Settings.bFreehandAdaptativeStep);
    }

    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeToolOptionsWidget::HandleInterpolationTypeChanged(ECheckBoxState InState, EOdysseyInterpolationType InType)
{
    if (!ViewModel || bSyncingFromViewModel || InState != ECheckBoxState::Checked)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.FreehandInterpolationType = InType;
    if (UOdysseyFreehandShape* Shape = ResolveFreehandShape())
    {
        Shape->SetInterpolationType(InType);
    }

    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeToolOptionsWidget::HandleSmoothingEnabledChanged(ECheckBoxState InState)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.bFreehandSmoothingEnabled = (InState == ECheckBoxState::Checked);
    if (UOdysseyFreehandShape* Shape = ResolveFreehandShape())
    {
        Shape->SetSmoothingEnabled(Settings.bFreehandSmoothingEnabled);
    }

    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeToolOptionsWidget::HandleSmoothingMethodChanged(ECheckBoxState InState, EOdysseySmoothingMethod InMethod)
{
    if (!ViewModel || bSyncingFromViewModel || InState != ECheckBoxState::Checked)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.FreehandSmoothingOptions.SmoothingMethod = InMethod;
    if (UOdysseyFreehandShape* Shape = ResolveFreehandShape())
    {
        Shape->SetSmoothingOptions(Settings.FreehandSmoothingOptions);
    }

    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeToolOptionsWidget::HandleSmoothingStrengthChanged(float InValue)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.FreehandSmoothingOptions.SmoothingStrength = FMath::Clamp(FMath::RoundToInt(InValue), 1, 200);
    if (UOdysseyFreehandShape* Shape = ResolveFreehandShape())
    {
        Shape->SetSmoothingOptions(Settings.FreehandSmoothingOptions);
    }

    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeToolOptionsWidget::HandleSmoothingRealTimeChanged(ECheckBoxState InState)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.FreehandSmoothingOptions.SmoothingRealTime = (InState == ECheckBoxState::Checked);
    if (UOdysseyFreehandShape* Shape = ResolveFreehandShape())
    {
        Shape->SetSmoothingOptions(Settings.FreehandSmoothingOptions);
    }

    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeToolOptionsWidget::HandleSmoothingCatchUpChanged(ECheckBoxState InState)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    FOdysseyRuntimeToolSettings Settings = ViewModel->GetToolSettings();
    Settings.FreehandSmoothingOptions.SmoothingCatchUp = (InState == ECheckBoxState::Checked);
    if (UOdysseyFreehandShape* Shape = ResolveFreehandShape())
    {
        Shape->SetSmoothingOptions(Settings.FreehandSmoothingOptions);
    }

    ViewModel->SetToolSettings(Settings);
}

void UOdysseyRuntimeToolOptionsWidget::HandleToleranceChanged(float InValue)
{
    if (!ViewModel || bSyncingFromViewModel)
    {
        return;
    }

    ViewModel->SetTolerance(InValue);
}

ECheckBoxState UOdysseyRuntimeToolOptionsWidget::GetFreehandAdaptativeStepCheckState() const
{
    return ViewModel && ViewModel->GetToolSettings().bFreehandAdaptativeStep ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

ECheckBoxState UOdysseyRuntimeToolOptionsWidget::IsInterpolationTypeChecked(EOdysseyInterpolationType InType) const
{
    return ViewModel && ViewModel->GetToolSettings().FreehandInterpolationType == InType ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

ECheckBoxState UOdysseyRuntimeToolOptionsWidget::GetSmoothingEnabledCheckState() const
{
    return ViewModel && ViewModel->GetToolSettings().bFreehandSmoothingEnabled ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

ECheckBoxState UOdysseyRuntimeToolOptionsWidget::IsSmoothingMethodChecked(EOdysseySmoothingMethod InMethod) const
{
    return ViewModel && ViewModel->GetToolSettings().FreehandSmoothingOptions.SmoothingMethod == InMethod ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

ECheckBoxState UOdysseyRuntimeToolOptionsWidget::GetSmoothingRealTimeCheckState() const
{
    return ViewModel && ViewModel->GetToolSettings().FreehandSmoothingOptions.SmoothingRealTime ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

ECheckBoxState UOdysseyRuntimeToolOptionsWidget::GetSmoothingCatchUpCheckState() const
{
    return ViewModel && ViewModel->GetToolSettings().FreehandSmoothingOptions.SmoothingCatchUp ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

FText UOdysseyRuntimeToolOptionsWidget::FormatUnit(float InValue)
{
    return FText::FromString(FString::Printf(TEXT("%.2f"), InValue));
}

#undef LOCTEXT_NAMESPACE
