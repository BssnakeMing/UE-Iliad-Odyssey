// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushFormat() {}

// Begin Cross Module References
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth();
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin Enum EOdysseyColorModel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyColorModel;
static UEnum* EOdysseyColorModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyColorModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyColorModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("EOdysseyColorModel"));
	}
	return Z_Registration_Info_UEnum_EOdysseyColorModel.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UEnum* StaticEnum<EOdysseyColorModel>()
{
	return EOdysseyColorModel_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////\n// EOdysseyColorModel Enum\n" },
		{ "kCMYK.DisplayName", "CMYK" },
		{ "kCMYK.Name", "EOdysseyColorModel::kCMYK" },
		{ "kCMYKA.DisplayName", "CMYKA" },
		{ "kCMYKA.Name", "EOdysseyColorModel::kCMYKA" },
		{ "kGrey.DisplayName", "Grey" },
		{ "kGrey.Name", "EOdysseyColorModel::kGrey" },
		{ "kGreyA.DisplayName", "GreyA" },
		{ "kGreyA.Name", "EOdysseyColorModel::kGreyA" },
		{ "kHSL.DisplayName", "HSL" },
		{ "kHSL.Name", "EOdysseyColorModel::kHSL" },
		{ "kHSLA.DisplayName", "HSLA" },
		{ "kHSLA.Name", "EOdysseyColorModel::kHSLA" },
		{ "kHSV.DisplayName", "HSV" },
		{ "kHSV.Name", "EOdysseyColorModel::kHSV" },
		{ "kHSVA.DisplayName", "HSVA" },
		{ "kHSVA.Name", "EOdysseyColorModel::kHSVA" },
		{ "kLab.DisplayName", "Lab" },
		{ "kLab.Name", "EOdysseyColorModel::kLab" },
		{ "kLabA.DisplayName", "LabA" },
		{ "kLabA.Name", "EOdysseyColorModel::kLabA" },
		{ "kRGB.DisplayName", "RGB" },
		{ "kRGB.Name", "EOdysseyColorModel::kRGB" },
		{ "kRGBA.DisplayName", "RGBA" },
		{ "kRGBA.Name", "EOdysseyColorModel::kRGBA" },
		{ "kUninitializedColorModel.DisplayName", "kUninitializedColorModel" },
		{ "kUninitializedColorModel.Hidden", "" },
		{ "kUninitializedColorModel.Name", "EOdysseyColorModel::kUninitializedColorModel" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushFormat.h" },
		{ "ToolTip", "EOdysseyColorModel Enum" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOdysseyColorModel::kUninitializedColorModel", (int64)EOdysseyColorModel::kUninitializedColorModel },
		{ "EOdysseyColorModel::kRGB", (int64)EOdysseyColorModel::kRGB },
		{ "EOdysseyColorModel::kRGBA", (int64)EOdysseyColorModel::kRGBA },
		{ "EOdysseyColorModel::kGrey", (int64)EOdysseyColorModel::kGrey },
		{ "EOdysseyColorModel::kGreyA", (int64)EOdysseyColorModel::kGreyA },
		{ "EOdysseyColorModel::kHSL", (int64)EOdysseyColorModel::kHSL },
		{ "EOdysseyColorModel::kHSLA", (int64)EOdysseyColorModel::kHSLA },
		{ "EOdysseyColorModel::kHSV", (int64)EOdysseyColorModel::kHSV },
		{ "EOdysseyColorModel::kHSVA", (int64)EOdysseyColorModel::kHSVA },
		{ "EOdysseyColorModel::kCMYK", (int64)EOdysseyColorModel::kCMYK },
		{ "EOdysseyColorModel::kCMYKA", (int64)EOdysseyColorModel::kCMYKA },
		{ "EOdysseyColorModel::kLab", (int64)EOdysseyColorModel::kLab },
		{ "EOdysseyColorModel::kLabA", (int64)EOdysseyColorModel::kLabA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	"EOdysseyColorModel",
	"EOdysseyColorModel",
	Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel()
{
	if (!Z_Registration_Info_UEnum_EOdysseyColorModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyColorModel.InnerSingleton, Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyColorModel.InnerSingleton;
}
// End Enum EOdysseyColorModel

// Begin Enum EOdysseyChannelDepth
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyChannelDepth;
static UEnum* EOdysseyChannelDepth_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyChannelDepth.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyChannelDepth.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("EOdysseyChannelDepth"));
	}
	return Z_Registration_Info_UEnum_EOdysseyChannelDepth.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UEnum* StaticEnum<EOdysseyChannelDepth>()
{
	return EOdysseyChannelDepth_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////\n// EOdysseyColorModel Enum\n" },
		{ "k16.DisplayName", "16 bits" },
		{ "k16.Name", "EOdysseyChannelDepth::k16" },
		{ "k8.DisplayName", "8 bits" },
		{ "k8.Name", "EOdysseyChannelDepth::k8" },
		{ "kFloat.Comment", "//k32 UMETA( DisplayName=\"32 bits\" ),\n" },
		{ "kFloat.DisplayName", "32 bits floating-point" },
		{ "kFloat.Name", "EOdysseyChannelDepth::kFloat" },
		{ "kFloat.ToolTip", "k32 UMETA( DisplayName=\"32 bits\" )," },
		{ "kUninitializedChannelDepth.DisplayName", "kUninitializedChannelDepth" },
		{ "kUninitializedChannelDepth.Hidden", "" },
		{ "kUninitializedChannelDepth.Name", "EOdysseyChannelDepth::kUninitializedChannelDepth" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushFormat.h" },
		{ "ToolTip", "EOdysseyColorModel Enum" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOdysseyChannelDepth::kUninitializedChannelDepth", (int64)EOdysseyChannelDepth::kUninitializedChannelDepth },
		{ "EOdysseyChannelDepth::k8", (int64)EOdysseyChannelDepth::k8 },
		{ "EOdysseyChannelDepth::k16", (int64)EOdysseyChannelDepth::k16 },
		{ "EOdysseyChannelDepth::kFloat", (int64)EOdysseyChannelDepth::kFloat },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	"EOdysseyChannelDepth",
	"EOdysseyChannelDepth",
	Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth()
{
	if (!Z_Registration_Info_UEnum_EOdysseyChannelDepth.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyChannelDepth.InnerSingleton, Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyChannelDepth.InnerSingleton;
}
// End Enum EOdysseyChannelDepth

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushFormat_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOdysseyColorModel_StaticEnum, TEXT("EOdysseyColorModel"), &Z_Registration_Info_UEnum_EOdysseyColorModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3604863109U) },
		{ EOdysseyChannelDepth_StaticEnum, TEXT("EOdysseyChannelDepth"), &Z_Registration_Info_UEnum_EOdysseyChannelDepth, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4181229900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushFormat_h_1133366094(TEXT("/Script/OdysseyBrush"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushFormat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushFormat_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
