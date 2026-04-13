// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/OdysseyCore/Public/Image/OdysseyBlendingMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBlendingMode() {}

// Begin Cross Module References
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode();
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode();
UPackage* Z_Construct_UPackage__Script_OdysseyCore();
// End Cross Module References

// Begin Enum EOdysseyBlendingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyBlendingMode;
static UEnum* EOdysseyBlendingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyBlendingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyBlendingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode, (UObject*)Z_Construct_UPackage__Script_OdysseyCore(), TEXT("EOdysseyBlendingMode"));
	}
	return Z_Registration_Info_UEnum_EOdysseyBlendingMode.OuterSingleton;
}
template<> ODYSSEYCORE_API UEnum* StaticEnum<EOdysseyBlendingMode>()
{
	return EOdysseyBlendingMode_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "kAdd.DisplayName", "Add" },
		{ "kAdd.Name", "EOdysseyBlendingMode::kAdd" },
		{ "kAngleCorrected.DisplayName", "AngleCorrected" },
		{ "kAngleCorrected.Name", "EOdysseyBlendingMode::kAngleCorrected" },
		{ "kAverage.DisplayName", "Average" },
		{ "kAverage.Name", "EOdysseyBlendingMode::kAverage" },
		{ "kBack.DisplayName", "Back" },
		{ "kBack.Name", "EOdysseyBlendingMode::kBack" },
		{ "kBayerDither8x8.DisplayName", "BayerDither8x8" },
		{ "kBayerDither8x8.Name", "EOdysseyBlendingMode::kBayerDither8x8" },
		{ "kBehind.DisplayName", "Behind" },
		{ "kBehind.Name", "EOdysseyBlendingMode::kBehind" },
		{ "kColor.DisplayName", "Color" },
		{ "kColor.Name", "EOdysseyBlendingMode::kColor" },
		{ "kColorBurn.DisplayName", "ColorBurn" },
		{ "kColorBurn.Name", "EOdysseyBlendingMode::kColorBurn" },
		{ "kColorDodge.DisplayName", "ColorDodge" },
		{ "kColorDodge.Name", "EOdysseyBlendingMode::kColorDodge" },
		{ "kDarken.DisplayName", "Darken" },
		{ "kDarken.Name", "EOdysseyBlendingMode::kDarken" },
		{ "kDarkerColor.DisplayName", "DarkerColor" },
		{ "kDarkerColor.Name", "EOdysseyBlendingMode::kDarkerColor" },
		{ "kDifference.DisplayName", "Difference" },
		{ "kDifference.Name", "EOdysseyBlendingMode::kDifference" },
		{ "kDissolve.DisplayName", "Dissolve" },
		{ "kDissolve.Name", "EOdysseyBlendingMode::kDissolve" },
		{ "kDivide.DisplayName", "Divide" },
		{ "kDivide.Name", "EOdysseyBlendingMode::kDivide" },
		{ "kExclusion.DisplayName", "Exclusion" },
		{ "kExclusion.Name", "EOdysseyBlendingMode::kExclusion" },
		{ "kGlow.DisplayName", "Glow" },
		{ "kGlow.Name", "EOdysseyBlendingMode::kGlow" },
		{ "kHardLight.DisplayName", "HardLight" },
		{ "kHardLight.Name", "EOdysseyBlendingMode::kHardLight" },
		{ "kHardMix.DisplayName", "HardMix" },
		{ "kHardMix.Name", "EOdysseyBlendingMode::kHardMix" },
		{ "kHue.DisplayName", "Hue" },
		{ "kHue.Name", "EOdysseyBlendingMode::kHue" },
		{ "kLighten.DisplayName", "Lighten" },
		{ "kLighten.Name", "EOdysseyBlendingMode::kLighten" },
		{ "kLighterColor.DisplayName", "LighterColor" },
		{ "kLighterColor.Name", "EOdysseyBlendingMode::kLighterColor" },
		{ "kLinearBurn.DisplayName", "LinearBurn" },
		{ "kLinearBurn.Name", "EOdysseyBlendingMode::kLinearBurn" },
		{ "kLinearDodge.DisplayName", "LinearDodge" },
		{ "kLinearDodge.Name", "EOdysseyBlendingMode::kLinearDodge" },
		{ "kLinearLight.DisplayName", "LinearLight" },
		{ "kLinearLight.Name", "EOdysseyBlendingMode::kLinearLight" },
		{ "kLuminosity.DisplayName", "Luminosity" },
		{ "kLuminosity.Name", "EOdysseyBlendingMode::kLuminosity" },
		{ "kMultiply.DisplayName", "Multiply" },
		{ "kMultiply.Name", "EOdysseyBlendingMode::kMultiply" },
		{ "kNegation.DisplayName", "Negation" },
		{ "kNegation.Name", "EOdysseyBlendingMode::kNegation" },
		{ "kNormal.DisplayName", "Normal" },
		{ "kNormal.Name", "EOdysseyBlendingMode::kNormal" },
		{ "kOverlay.DisplayName", "Overlay" },
		{ "kOverlay.Name", "EOdysseyBlendingMode::kOverlay" },
		{ "kPartialDerivative.DisplayName", "PartialDerivative" },
		{ "kPartialDerivative.Name", "EOdysseyBlendingMode::kPartialDerivative" },
		{ "kPhoenix.DisplayName", "Phoenix" },
		{ "kPhoenix.Name", "EOdysseyBlendingMode::kPhoenix" },
		{ "kPinLight.DisplayName", "PinLight" },
		{ "kPinLight.Name", "EOdysseyBlendingMode::kPinLight" },
		{ "kReflect.DisplayName", "Reflect" },
		{ "kReflect.Name", "EOdysseyBlendingMode::kReflect" },
		{ "kSaturation.DisplayName", "Saturation" },
		{ "kSaturation.Name", "EOdysseyBlendingMode::kSaturation" },
		{ "kScreen.DisplayName", "Screen" },
		{ "kScreen.Name", "EOdysseyBlendingMode::kScreen" },
		{ "kSoftLight.DisplayName", "SoftLight" },
		{ "kSoftLight.Name", "EOdysseyBlendingMode::kSoftLight" },
		{ "kSubstract.DisplayName", "Substract" },
		{ "kSubstract.Name", "EOdysseyBlendingMode::kSubstract" },
		{ "kTop.DisplayName", "Top" },
		{ "kTop.Name", "EOdysseyBlendingMode::kTop" },
		{ "kVividLight.DisplayName", "VividLight" },
		{ "kVividLight.Name", "EOdysseyBlendingMode::kVividLight" },
		{ "kWhiteOut.DisplayName", "WhiteOut" },
		{ "kWhiteOut.Name", "EOdysseyBlendingMode::kWhiteOut" },
		{ "ModuleRelativePath", "Public/Image/OdysseyBlendingMode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOdysseyBlendingMode::kNormal", (int64)EOdysseyBlendingMode::kNormal },
		{ "EOdysseyBlendingMode::kTop", (int64)EOdysseyBlendingMode::kTop },
		{ "EOdysseyBlendingMode::kBack", (int64)EOdysseyBlendingMode::kBack },
		{ "EOdysseyBlendingMode::kBehind", (int64)EOdysseyBlendingMode::kBehind },
		{ "EOdysseyBlendingMode::kDissolve", (int64)EOdysseyBlendingMode::kDissolve },
		{ "EOdysseyBlendingMode::kBayerDither8x8", (int64)EOdysseyBlendingMode::kBayerDither8x8 },
		{ "EOdysseyBlendingMode::kDarken", (int64)EOdysseyBlendingMode::kDarken },
		{ "EOdysseyBlendingMode::kMultiply", (int64)EOdysseyBlendingMode::kMultiply },
		{ "EOdysseyBlendingMode::kColorBurn", (int64)EOdysseyBlendingMode::kColorBurn },
		{ "EOdysseyBlendingMode::kLinearBurn", (int64)EOdysseyBlendingMode::kLinearBurn },
		{ "EOdysseyBlendingMode::kDarkerColor", (int64)EOdysseyBlendingMode::kDarkerColor },
		{ "EOdysseyBlendingMode::kLighten", (int64)EOdysseyBlendingMode::kLighten },
		{ "EOdysseyBlendingMode::kScreen", (int64)EOdysseyBlendingMode::kScreen },
		{ "EOdysseyBlendingMode::kColorDodge", (int64)EOdysseyBlendingMode::kColorDodge },
		{ "EOdysseyBlendingMode::kLinearDodge", (int64)EOdysseyBlendingMode::kLinearDodge },
		{ "EOdysseyBlendingMode::kLighterColor", (int64)EOdysseyBlendingMode::kLighterColor },
		{ "EOdysseyBlendingMode::kOverlay", (int64)EOdysseyBlendingMode::kOverlay },
		{ "EOdysseyBlendingMode::kSoftLight", (int64)EOdysseyBlendingMode::kSoftLight },
		{ "EOdysseyBlendingMode::kHardLight", (int64)EOdysseyBlendingMode::kHardLight },
		{ "EOdysseyBlendingMode::kVividLight", (int64)EOdysseyBlendingMode::kVividLight },
		{ "EOdysseyBlendingMode::kLinearLight", (int64)EOdysseyBlendingMode::kLinearLight },
		{ "EOdysseyBlendingMode::kPinLight", (int64)EOdysseyBlendingMode::kPinLight },
		{ "EOdysseyBlendingMode::kHardMix", (int64)EOdysseyBlendingMode::kHardMix },
		{ "EOdysseyBlendingMode::kPhoenix", (int64)EOdysseyBlendingMode::kPhoenix },
		{ "EOdysseyBlendingMode::kReflect", (int64)EOdysseyBlendingMode::kReflect },
		{ "EOdysseyBlendingMode::kGlow", (int64)EOdysseyBlendingMode::kGlow },
		{ "EOdysseyBlendingMode::kDifference", (int64)EOdysseyBlendingMode::kDifference },
		{ "EOdysseyBlendingMode::kExclusion", (int64)EOdysseyBlendingMode::kExclusion },
		{ "EOdysseyBlendingMode::kAdd", (int64)EOdysseyBlendingMode::kAdd },
		{ "EOdysseyBlendingMode::kSubstract", (int64)EOdysseyBlendingMode::kSubstract },
		{ "EOdysseyBlendingMode::kDivide", (int64)EOdysseyBlendingMode::kDivide },
		{ "EOdysseyBlendingMode::kAverage", (int64)EOdysseyBlendingMode::kAverage },
		{ "EOdysseyBlendingMode::kNegation", (int64)EOdysseyBlendingMode::kNegation },
		{ "EOdysseyBlendingMode::kHue", (int64)EOdysseyBlendingMode::kHue },
		{ "EOdysseyBlendingMode::kSaturation", (int64)EOdysseyBlendingMode::kSaturation },
		{ "EOdysseyBlendingMode::kColor", (int64)EOdysseyBlendingMode::kColor },
		{ "EOdysseyBlendingMode::kLuminosity", (int64)EOdysseyBlendingMode::kLuminosity },
		{ "EOdysseyBlendingMode::kPartialDerivative", (int64)EOdysseyBlendingMode::kPartialDerivative },
		{ "EOdysseyBlendingMode::kWhiteOut", (int64)EOdysseyBlendingMode::kWhiteOut },
		{ "EOdysseyBlendingMode::kAngleCorrected", (int64)EOdysseyBlendingMode::kAngleCorrected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyCore,
	nullptr,
	"EOdysseyBlendingMode",
	"EOdysseyBlendingMode",
	Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode()
{
	if (!Z_Registration_Info_UEnum_EOdysseyBlendingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyBlendingMode.InnerSingleton, Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyBlendingMode.InnerSingleton;
}
// End Enum EOdysseyBlendingMode

// Begin Enum EOdysseyAlphaMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyAlphaMode;
static UEnum* EOdysseyAlphaMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyAlphaMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyAlphaMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode, (UObject*)Z_Construct_UPackage__Script_OdysseyCore(), TEXT("EOdysseyAlphaMode"));
	}
	return Z_Registration_Info_UEnum_EOdysseyAlphaMode.OuterSingleton;
}
template<> ODYSSEYCORE_API UEnum* StaticEnum<EOdysseyAlphaMode>()
{
	return EOdysseyAlphaMode_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "kAdd.DisplayName", "Add" },
		{ "kAdd.Name", "EOdysseyAlphaMode::kAdd" },
		{ "kBack.DisplayName", "Back" },
		{ "kBack.Name", "EOdysseyAlphaMode::kBack" },
		{ "kErase.DisplayName", "Erase" },
		{ "kErase.Name", "EOdysseyAlphaMode::kErase" },
		{ "kMax.DisplayName", "Max" },
		{ "kMax.Name", "EOdysseyAlphaMode::kMax" },
		{ "kMin.DisplayName", "Min" },
		{ "kMin.Name", "EOdysseyAlphaMode::kMin" },
		{ "kMul.DisplayName", "Mul" },
		{ "kMul.Name", "EOdysseyAlphaMode::kMul" },
		{ "kNormal.DisplayName", "Normal" },
		{ "kNormal.Name", "EOdysseyAlphaMode::kNormal" },
		{ "kSub.DisplayName", "Sub" },
		{ "kSub.Name", "EOdysseyAlphaMode::kSub" },
		{ "kTop.DisplayName", "Top" },
		{ "kTop.Name", "EOdysseyAlphaMode::kTop" },
		{ "ModuleRelativePath", "Public/Image/OdysseyBlendingMode.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOdysseyAlphaMode::kNormal", (int64)EOdysseyAlphaMode::kNormal },
		{ "EOdysseyAlphaMode::kErase", (int64)EOdysseyAlphaMode::kErase },
		{ "EOdysseyAlphaMode::kTop", (int64)EOdysseyAlphaMode::kTop },
		{ "EOdysseyAlphaMode::kBack", (int64)EOdysseyAlphaMode::kBack },
		{ "EOdysseyAlphaMode::kSub", (int64)EOdysseyAlphaMode::kSub },
		{ "EOdysseyAlphaMode::kAdd", (int64)EOdysseyAlphaMode::kAdd },
		{ "EOdysseyAlphaMode::kMul", (int64)EOdysseyAlphaMode::kMul },
		{ "EOdysseyAlphaMode::kMin", (int64)EOdysseyAlphaMode::kMin },
		{ "EOdysseyAlphaMode::kMax", (int64)EOdysseyAlphaMode::kMax },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyCore,
	nullptr,
	"EOdysseyAlphaMode",
	"EOdysseyAlphaMode",
	Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode()
{
	if (!Z_Registration_Info_UEnum_EOdysseyAlphaMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyAlphaMode.InnerSingleton, Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyAlphaMode.InnerSingleton;
}
// End Enum EOdysseyAlphaMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyCore_Public_Image_OdysseyBlendingMode_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOdysseyBlendingMode_StaticEnum, TEXT("EOdysseyBlendingMode"), &Z_Registration_Info_UEnum_EOdysseyBlendingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1337073500U) },
		{ EOdysseyAlphaMode_StaticEnum, TEXT("EOdysseyAlphaMode"), &Z_Registration_Info_UEnum_EOdysseyAlphaMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1351865346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyCore_Public_Image_OdysseyBlendingMode_h_1572252975(TEXT("/Script/OdysseyCore"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyCore_Public_Image_OdysseyBlendingMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyCore_Public_Image_OdysseyBlendingMode_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
