#include "OdysseyRuntimePaintViewModel.h"

#include "OdysseyBrushAssetBase.h"
#include "OdysseyBrushOptions.h"
#include "Proxies/OdysseyBrushColor.h"

namespace
{
bool AreSmoothingOptionsEqual(const FOdysseySmoothingOptions& A, const FOdysseySmoothingOptions& B)
{
    return
        A.SmoothingMethod == B.SmoothingMethod &&
        A.SmoothingStrength == B.SmoothingStrength &&
        A.SmoothingRealTime == B.SmoothingRealTime &&
        A.SmoothingCatchUp == B.SmoothingCatchUp;
}
}

UOdysseyRuntimePaintViewModel::UOdysseyRuntimePaintViewModel()
{
    EnsureSelectedBrushIsValid();
}

void UOdysseyRuntimePaintViewModel::SetActiveTool(EOdysseyRuntimePaintTool InTool)
{
    if (ActiveTool == InTool)
    {
        return;
    }

    ActiveTool = InTool;
    OnActiveToolChanged.Broadcast(ActiveTool);
    OnActiveToolChangedNative.Broadcast(ActiveTool);
}

void UOdysseyRuntimePaintViewModel::SetToolSettings(const FOdysseyRuntimeToolSettings& InSettings)
{
    const FOdysseyRuntimeToolSettings SanitizedSettings = SanitizeSettings(InSettings);
    if (ToolSettings.Color == SanitizedSettings.Color &&
        FMath::IsNearlyEqual(ToolSettings.Size, SanitizedSettings.Size) &&
        FMath::IsNearlyEqual(ToolSettings.Opacity, SanitizedSettings.Opacity) &&
        FMath::IsNearlyEqual(ToolSettings.Hardness, SanitizedSettings.Hardness) &&
        FMath::IsNearlyEqual(ToolSettings.Tolerance, SanitizedSettings.Tolerance) &&
        FMath::IsNearlyEqual(ToolSettings.FreehandStep, SanitizedSettings.FreehandStep) &&
        ToolSettings.bFreehandAdaptativeStep == SanitizedSettings.bFreehandAdaptativeStep &&
        ToolSettings.FreehandInterpolationType == SanitizedSettings.FreehandInterpolationType &&
        ToolSettings.bFreehandSmoothingEnabled == SanitizedSettings.bFreehandSmoothingEnabled &&
        AreSmoothingOptionsEqual(ToolSettings.FreehandSmoothingOptions, SanitizedSettings.FreehandSmoothingOptions))
    {
        return;
    }

    ToolSettings = SanitizedSettings;
    OnToolSettingsChanged.Broadcast(ToolSettings);
    OnToolSettingsChangedNative.Broadcast(ToolSettings);
}

void UOdysseyRuntimePaintViewModel::SetColor(const FLinearColor& InColor)
{
    FOdysseyRuntimeToolSettings NewSettings = ToolSettings;
    NewSettings.Color = InColor;
    SetToolSettings(NewSettings);
}

void UOdysseyRuntimePaintViewModel::SetSize(float InSize)
{
    FOdysseyRuntimeToolSettings NewSettings = ToolSettings;
    NewSettings.Size = InSize;
    SetToolSettings(NewSettings);
}

void UOdysseyRuntimePaintViewModel::SetOpacity(float InOpacity)
{
    FOdysseyRuntimeToolSettings NewSettings = ToolSettings;
    NewSettings.Opacity = InOpacity;
    SetToolSettings(NewSettings);
}

void UOdysseyRuntimePaintViewModel::SetHardness(float InHardness)
{
    FOdysseyRuntimeToolSettings NewSettings = ToolSettings;
    NewSettings.Hardness = InHardness;
    SetToolSettings(NewSettings);
}

void UOdysseyRuntimePaintViewModel::SetTolerance(float InTolerance)
{
    FOdysseyRuntimeToolSettings NewSettings = ToolSettings;
    NewSettings.Tolerance = InTolerance;
    SetToolSettings(NewSettings);
}

void UOdysseyRuntimePaintViewModel::SetFreehandStep(float InStep)
{
    FOdysseyRuntimeToolSettings NewSettings = ToolSettings;
    NewSettings.FreehandStep = InStep;
    SetToolSettings(NewSettings);
}

int32 UOdysseyRuntimePaintViewModel::GetSelectedBrushPresetIndex() const
{
    return BrushPresets.IndexOfByPredicate(
        [this](const TObjectPtr<UOdysseyBrushAssetBase>& Preset)
        {
            return BuildBrushId(Preset.Get()) == SelectedBrushPresetId;
        });
}

bool UOdysseyRuntimePaintViewModel::SelectBrushPresetById(FName InPresetId)
{
    const int32 PresetIndex = BrushPresets.IndexOfByPredicate(
        [InPresetId](const TObjectPtr<UOdysseyBrushAssetBase>& Preset)
        {
            return BuildBrushId(Preset.Get()) == InPresetId;
        });

    return SelectBrushPresetByIndex(PresetIndex);
}

bool UOdysseyRuntimePaintViewModel::SelectBrushPresetByIndex(int32 InPresetIndex)
{
    if (!BrushPresets.IsValidIndex(InPresetIndex))
    {
        return false;
    }

    UOdysseyBrushAssetBase* Preset = BrushPresets[InPresetIndex].Get();
    SelectedBrushPresetId = BuildBrushId(Preset);
    ApplyBrushPreset(Preset);

    OnBrushPresetChanged.Broadcast(SelectedBrushPresetId, InPresetIndex);
    OnBrushPresetChangedNative.Broadcast(SelectedBrushPresetId, InPresetIndex);
    return true;
}

void UOdysseyRuntimePaintViewModel::SetBrushPresets(const TArray<UOdysseyBrushAssetBase*>& InBrushPresets)
{
    BrushPresets.Reset();
    BrushPresets.Reserve(InBrushPresets.Num());
    for (UOdysseyBrushAssetBase* BrushAsset : InBrushPresets)
    {
        if (BrushAsset)
        {
            BrushPresets.Add(BrushAsset);
        }
    }

    EnsureSelectedBrushIsValid();

    OnBrushPresetsChanged.Broadcast();
    OnBrushPresetsChangedNative.Broadcast();

    int32 SelectedIndex = GetSelectedBrushPresetIndex();
    if (SelectedIndex == INDEX_NONE && !BrushPresets.IsEmpty())
    {
        SelectedIndex = 0;
        SelectedBrushPresetId = BuildBrushId(BrushPresets[SelectedIndex].Get());
    }

    if (BrushPresets.IsValidIndex(SelectedIndex))
    {
        ApplyBrushPreset(BrushPresets[SelectedIndex].Get());
        OnBrushPresetChanged.Broadcast(SelectedBrushPresetId, SelectedIndex);
        OnBrushPresetChangedNative.Broadcast(SelectedBrushPresetId, SelectedIndex);
    }
    else
    {
        SelectedBrushPresetId = NAME_None;
    }
}

TArray<UOdysseyBrushAssetBase*> UOdysseyRuntimePaintViewModel::GetBrushPresetsCopy() const
{
    TArray<UOdysseyBrushAssetBase*> Result;
    Result.Reserve(BrushPresets.Num());
    for (const TObjectPtr<UOdysseyBrushAssetBase>& BrushAsset : BrushPresets)
    {
        Result.Add(BrushAsset.Get());
    }

    return Result;
}

UOdysseyBrushAssetBase* UOdysseyRuntimePaintViewModel::GetSelectedBrushAsset() const
{
    const int32 SelectedIndex = GetSelectedBrushPresetIndex();
    return BrushPresets.IsValidIndex(SelectedIndex) ? BrushPresets[SelectedIndex].Get() : nullptr;
}

void UOdysseyRuntimePaintViewModel::ApplyBrushPreset(UOdysseyBrushAssetBase* InPreset)
{
    if (!InPreset)
    {
        return;
    }

    const UOdysseyBrushOptions* BrushOptions = InPreset->GetBrushOptions();
    if (!BrushOptions)
    {
        return;
    }

    FOdysseyRuntimeToolSettings NewSettings = ToolSettings;
    NewSettings.Size = BrushOptions->Size;
    NewSettings.Opacity = BrushOptions->Flow / 100.0f;

    float R = 1.0f;
    float G = 1.0f;
    float B = 1.0f;
    float A = 1.0f;
    UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoRGBF(BrushOptions->Color, R, G, B, A);
    NewSettings.Color = FLinearColor(R, G, B, A);

    SetToolSettings(NewSettings);
}

FOdysseyRuntimeToolSettings UOdysseyRuntimePaintViewModel::SanitizeSettings(const FOdysseyRuntimeToolSettings& InSettings)
{
    FOdysseyRuntimeToolSettings Sanitized = InSettings;
    Sanitized.Size = FMath::Clamp(Sanitized.Size, 1.0f, 256.0f);
    Sanitized.Opacity = FMath::Clamp(Sanitized.Opacity, 0.0f, 1.0f);
    Sanitized.Hardness = FMath::Clamp(Sanitized.Hardness, 0.0f, 1.0f);
    Sanitized.Tolerance = FMath::Clamp(Sanitized.Tolerance, 0.0f, 1.0f);
    Sanitized.FreehandStep = FMath::Clamp(Sanitized.FreehandStep, 1.0f, 200.0f);
    Sanitized.FreehandSmoothingOptions.SmoothingStrength = FMath::Clamp(Sanitized.FreehandSmoothingOptions.SmoothingStrength, 1, 200);
    return Sanitized;
}

void UOdysseyRuntimePaintViewModel::EnsureSelectedBrushIsValid()
{
    if (BrushPresets.IsEmpty())
    {
        SelectedBrushPresetId = NAME_None;
        return;
    }

    if (GetSelectedBrushPresetIndex() == INDEX_NONE)
    {
        SelectedBrushPresetId = BuildBrushId(BrushPresets[0].Get());
        ApplyBrushPreset(BrushPresets[0].Get());
    }
}

FName UOdysseyRuntimePaintViewModel::BuildBrushId(UOdysseyBrushAssetBase* InBrushAsset)
{
    return InBrushAsset ? InBrushAsset->GetFName() : NAME_None;
}
