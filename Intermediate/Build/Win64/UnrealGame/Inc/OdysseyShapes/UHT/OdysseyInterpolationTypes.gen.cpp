// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyShapes/Public/FreehandShape/Interpolation/OdysseyInterpolationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyInterpolationTypes() {}

// Begin Cross Module References
ODYSSEYSHAPES_API UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType();
UPackage* Z_Construct_UPackage__Script_OdysseyShapes();
// End Cross Module References

// Begin Enum EOdysseyInterpolationType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyInterpolationType;
static UEnum* EOdysseyInterpolationType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyInterpolationType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType, (UObject*)Z_Construct_UPackage__Script_OdysseyShapes(), TEXT("EOdysseyInterpolationType"));
	}
	return Z_Registration_Info_UEnum_EOdysseyInterpolationType.OuterSingleton;
}
template<> ODYSSEYSHAPES_API UEnum* StaticEnum<EOdysseyInterpolationType>()
{
	return EOdysseyInterpolationType_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "kBezier.DisplayName", "Bezier" },
		{ "kBezier.Name", "EOdysseyInterpolationType::kBezier" },
		{ "kCatmullRom.DisplayName", "Catmull-Rom" },
		{ "kCatmullRom.Name", "EOdysseyInterpolationType::kCatmullRom" },
		{ "kLine.DisplayName", "Line" },
		{ "kLine.Name", "EOdysseyInterpolationType::kLine" },
		{ "ModuleRelativePath", "Public/FreehandShape/Interpolation/OdysseyInterpolationTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOdysseyInterpolationType::kBezier", (int64)EOdysseyInterpolationType::kBezier },
		{ "EOdysseyInterpolationType::kLine", (int64)EOdysseyInterpolationType::kLine },
		{ "EOdysseyInterpolationType::kCatmullRom", (int64)EOdysseyInterpolationType::kCatmullRom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyShapes,
	nullptr,
	"EOdysseyInterpolationType",
	"EOdysseyInterpolationType",
	Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType()
{
	if (!Z_Registration_Info_UEnum_EOdysseyInterpolationType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyInterpolationType.InnerSingleton, Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyInterpolationType.InnerSingleton;
}
// End Enum EOdysseyInterpolationType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Interpolation_OdysseyInterpolationTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOdysseyInterpolationType_StaticEnum, TEXT("EOdysseyInterpolationType"), &Z_Registration_Info_UEnum_EOdysseyInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3940167650U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Interpolation_OdysseyInterpolationTypes_h_2535663161(TEXT("/Script/OdysseyShapes"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Interpolation_OdysseyInterpolationTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Interpolation_OdysseyInterpolationTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
