// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyShapes/Public/FreehandShape/Smoothing/OdysseySmoothingTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseySmoothingTypes() {}

// Begin Cross Module References
ODYSSEYSHAPES_API UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod();
UPackage* Z_Construct_UPackage__Script_OdysseyShapes();
// End Cross Module References

// Begin Enum EOdysseySmoothingMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseySmoothingMethod;
static UEnum* EOdysseySmoothingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseySmoothingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseySmoothingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod, (UObject*)Z_Construct_UPackage__Script_OdysseyShapes(), TEXT("EOdysseySmoothingMethod"));
	}
	return Z_Registration_Info_UEnum_EOdysseySmoothingMethod.OuterSingleton;
}
template<> ODYSSEYSHAPES_API UEnum* StaticEnum<EOdysseySmoothingMethod>()
{
	return EOdysseySmoothingMethod_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "kAverage.DisplayName", "Average" },
		{ "kAverage.Name", "EOdysseySmoothingMethod::kAverage" },
		{ "kPull.DisplayName", "Pull" },
		{ "kPull.Name", "EOdysseySmoothingMethod::kPull" },
		{ "ModuleRelativePath", "Public/FreehandShape/Smoothing/OdysseySmoothingTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOdysseySmoothingMethod::kAverage", (int64)EOdysseySmoothingMethod::kAverage },
		{ "EOdysseySmoothingMethod::kPull", (int64)EOdysseySmoothingMethod::kPull },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyShapes,
	nullptr,
	"EOdysseySmoothingMethod",
	"EOdysseySmoothingMethod",
	Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod()
{
	if (!Z_Registration_Info_UEnum_EOdysseySmoothingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseySmoothingMethod.InnerSingleton, Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseySmoothingMethod.InnerSingleton;
}
// End Enum EOdysseySmoothingMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Smoothing_OdysseySmoothingTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOdysseySmoothingMethod_StaticEnum, TEXT("EOdysseySmoothingMethod"), &Z_Registration_Info_UEnum_EOdysseySmoothingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2715927013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Smoothing_OdysseySmoothingTypes_h_1966023409(TEXT("/Script/OdysseyShapes"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Smoothing_OdysseySmoothingTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Smoothing_OdysseySmoothingTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
