#include "OdysseyRuntimeToolsWidget.h"

#include "OdysseyRuntimePaintViewModel.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SUniformGridPanel.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "OdysseyRuntimeToolsWidget"

void UOdysseyRuntimeToolsWidget::SetViewModel(UOdysseyRuntimePaintViewModel* InViewModel)
{
    if (ViewModel == InViewModel)
    {
        return;
    }

    UnbindFromViewModel();
    ViewModel = InViewModel;
    BindToViewModel();
    RefreshButtonLabels();
}

TSharedRef<SWidget> UOdysseyRuntimeToolsWidget::RebuildWidget()
{
    TSharedRef<SUniformGridPanel> Panel = SNew(SUniformGridPanel).SlotPadding(FMargin(2.0f));

    Panel->AddSlot(0, 0)
    [
        SNew(SButton)
        .OnClicked(FOnClicked::CreateUObject(this, &UOdysseyRuntimeToolsWidget::HandleToolClicked, EOdysseyRuntimePaintTool::Brush))
        [
            SAssignNew(BrushLabel, STextBlock)
        ]
    ];

    Panel->AddSlot(1, 0)
    [
        SNew(SButton)
        .OnClicked(FOnClicked::CreateUObject(this, &UOdysseyRuntimeToolsWidget::HandleToolClicked, EOdysseyRuntimePaintTool::Eraser))
        [
            SAssignNew(EraserLabel, STextBlock)
        ]
    ];

    Panel->AddSlot(2, 0)
    [
        SNew(SButton)
        .OnClicked(FOnClicked::CreateUObject(this, &UOdysseyRuntimeToolsWidget::HandleToolClicked, EOdysseyRuntimePaintTool::Bucket))
        [
            SAssignNew(BucketLabel, STextBlock)
        ]
    ];

    BindToViewModel();
    RefreshButtonLabels();
    return Panel;
}

void UOdysseyRuntimeToolsWidget::SynchronizeProperties()
{
    Super::SynchronizeProperties();
    BindToViewModel();
    RefreshButtonLabels();
}

void UOdysseyRuntimeToolsWidget::ReleaseSlateResources(bool bReleaseChildren)
{
    Super::ReleaseSlateResources(bReleaseChildren);
    BrushLabel.Reset();
    EraserLabel.Reset();
    BucketLabel.Reset();
    UnbindFromViewModel();
}

#if WITH_EDITOR
const FText UOdysseyRuntimeToolsWidget::GetPaletteCategory()
{
    return LOCTEXT("IliadCategory", "Iliad");
}
#endif

void UOdysseyRuntimeToolsWidget::BindToViewModel()
{
    if (!ViewModel || ToolChangedHandle.IsValid())
    {
        return;
    }

    ToolChangedHandle = ViewModel->OnActiveToolChangedNative.AddUObject(this, &UOdysseyRuntimeToolsWidget::HandleViewModelToolChanged);
}

void UOdysseyRuntimeToolsWidget::UnbindFromViewModel()
{
    if (ViewModel && ToolChangedHandle.IsValid())
    {
        ViewModel->OnActiveToolChangedNative.Remove(ToolChangedHandle);
    }

    ToolChangedHandle.Reset();
}

void UOdysseyRuntimeToolsWidget::HandleViewModelToolChanged(EOdysseyRuntimePaintTool InTool)
{
    RefreshButtonLabels();
}

FReply UOdysseyRuntimeToolsWidget::HandleToolClicked(EOdysseyRuntimePaintTool InTool)
{
    if (ViewModel)
    {
        ViewModel->SetActiveTool(InTool);
    }

    return FReply::Handled();
}

FText UOdysseyRuntimeToolsWidget::GetToolLabel(EOdysseyRuntimePaintTool InTool, const TCHAR* InBaseLabel) const
{
    const bool bSelected = ViewModel && ViewModel->GetActiveTool() == InTool;
    if (bSelected)
    {
        return FText::FromString(FString::Printf(TEXT("[X] %s"), InBaseLabel));
    }

    return FText::FromString(FString::Printf(TEXT("[ ] %s"), InBaseLabel));
}

void UOdysseyRuntimeToolsWidget::RefreshButtonLabels()
{
    if (BrushLabel.IsValid())
    {
        BrushLabel->SetText(GetToolLabel(EOdysseyRuntimePaintTool::Brush, TEXT("Brush")));
    }

    if (EraserLabel.IsValid())
    {
        EraserLabel->SetText(GetToolLabel(EOdysseyRuntimePaintTool::Eraser, TEXT("Eraser")));
    }

    if (BucketLabel.IsValid())
    {
        BucketLabel->SetText(GetToolLabel(EOdysseyRuntimePaintTool::Bucket, TEXT("Bucket")));
    }
}

#undef LOCTEXT_NAMESPACE

