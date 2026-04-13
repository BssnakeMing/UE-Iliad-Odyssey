// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyStylusInput/Public/Settings/OdysseyStylusInputDriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyStylusInputDriver() {}

// Begin Cross Module References
ODYSSEYSTYLUSINPUT_API UEnum* Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver();
UPackage* Z_Construct_UPackage__Script_OdysseyStylusInput();
// End Cross Module References

// Begin Enum EOdysseyStylusInputDriver
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyStylusInputDriver;
static UEnum* EOdysseyStylusInputDriver_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyStylusInputDriver.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyStylusInputDriver.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver, (UObject*)Z_Construct_UPackage__Script_OdysseyStylusInput(), TEXT("EOdysseyStylusInputDriver"));
	}
	return Z_Registration_Info_UEnum_EOdysseyStylusInputDriver.OuterSingleton;
}
template<> ODYSSEYSTYLUSINPUT_API UEnum* StaticEnum<EOdysseyStylusInputDriver>()
{
	return EOdysseyStylusInputDriver_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// The available stylus drivers\n" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyStylusInputDriver.h" },
		{ "OdysseyStylusInputDriver_Ink.DisplayName", "Ink (Windows)" },
		{ "OdysseyStylusInputDriver_Ink.Name", "OdysseyStylusInputDriver_Ink" },
		{ "OdysseyStylusInputDriver_None.DisplayName", "None" },
		{ "OdysseyStylusInputDriver_None.Name", "OdysseyStylusInputDriver_None" },
		{ "OdysseyStylusInputDriver_NSEvent.DisplayName", "NSEvent (MacOS)" },
		{ "OdysseyStylusInputDriver_NSEvent.Name", "OdysseyStylusInputDriver_NSEvent" },
		{ "OdysseyStylusInputDriver_Wintab.DisplayName", "Wintab (Windows)" },
		{ "OdysseyStylusInputDriver_Wintab.Name", "OdysseyStylusInputDriver_Wintab" },
		{ "ToolTip", "The available stylus drivers" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "OdysseyStylusInputDriver_None", (int64)OdysseyStylusInputDriver_None },
		{ "OdysseyStylusInputDriver_Ink", (int64)OdysseyStylusInputDriver_Ink },
		{ "OdysseyStylusInputDriver_Wintab", (int64)OdysseyStylusInputDriver_Wintab },
		{ "OdysseyStylusInputDriver_NSEvent", (int64)OdysseyStylusInputDriver_NSEvent },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyStylusInput,
	nullptr,
	"EOdysseyStylusInputDriver",
	"EOdysseyStylusInputDriver",
	Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver()
{
	if (!Z_Registration_Info_UEnum_EOdysseyStylusInputDriver.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyStylusInputDriver.InnerSingleton, Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyStylusInputDriver.InnerSingleton;
}
// End Enum EOdysseyStylusInputDriver

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_Settings_OdysseyStylusInputDriver_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOdysseyStylusInputDriver_StaticEnum, TEXT("EOdysseyStylusInputDriver"), &Z_Registration_Info_UEnum_EOdysseyStylusInputDriver, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2982627762U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_Settings_OdysseyStylusInputDriver_h_4264087681(TEXT("/Script/OdysseyStylusInput"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_Settings_OdysseyStylusInputDriver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_Settings_OdysseyStylusInputDriver_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
