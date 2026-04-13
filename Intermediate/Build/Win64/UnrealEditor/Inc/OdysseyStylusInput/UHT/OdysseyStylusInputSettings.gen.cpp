// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyStylusInput/Public/Settings/OdysseyStylusInputSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyStylusInputSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ODYSSEYSTYLUSINPUT_API UClass* Z_Construct_UClass_UOdysseyStylusInputSettings();
ODYSSEYSTYLUSINPUT_API UClass* Z_Construct_UClass_UOdysseyStylusInputSettings_NoRegister();
ODYSSEYSTYLUSINPUT_API UEnum* Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver();
UPackage* Z_Construct_UPackage__Script_OdysseyStylusInput();
// End Cross Module References

// Begin Class UOdysseyStylusInputSettings
void UOdysseyStylusInputSettings::StaticRegisterNativesUOdysseyStylusInputSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyStylusInputSettings);
UClass* Z_Construct_UClass_UOdysseyStylusInputSettings_NoRegister()
{
	return UOdysseyStylusInputSettings::StaticClass();
}
struct Z_Construct_UClass_UOdysseyStylusInputSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the StylusInput settings.\n */" },
		{ "IncludePath", "Settings/OdysseyStylusInputSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyStylusInputSettings.h" },
		{ "ToolTip", "Implements the StylusInput settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StylusInputDriver_MetaData[] = {
		{ "Category", "StylusDriver" },
		{ "Comment", "/** Driver to use to interpret Stylus inputs. */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyStylusInputSettings.h" },
		{ "ToolTip", "Driver to use to interpret Stylus inputs." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_StylusInputDriver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyStylusInputSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::NewProp_StylusInputDriver = { "StylusInputDriver", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyStylusInputSettings, StylusInputDriver), Z_Construct_UEnum_OdysseyStylusInput_EOdysseyStylusInputDriver, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StylusInputDriver_MetaData), NewProp_StylusInputDriver_MetaData) }; // 2982627762
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::NewProp_StylusInputDriver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyStylusInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::ClassParams = {
	&UOdysseyStylusInputSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyStylusInputSettings()
{
	if (!Z_Registration_Info_UClass_UOdysseyStylusInputSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyStylusInputSettings.OuterSingleton, Z_Construct_UClass_UOdysseyStylusInputSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyStylusInputSettings.OuterSingleton;
}
template<> ODYSSEYSTYLUSINPUT_API UClass* StaticClass<UOdysseyStylusInputSettings>()
{
	return UOdysseyStylusInputSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyStylusInputSettings);
UOdysseyStylusInputSettings::~UOdysseyStylusInputSettings() {}
// End Class UOdysseyStylusInputSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_Settings_OdysseyStylusInputSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyStylusInputSettings, UOdysseyStylusInputSettings::StaticClass, TEXT("UOdysseyStylusInputSettings"), &Z_Registration_Info_UClass_UOdysseyStylusInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyStylusInputSettings), 1771577888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_Settings_OdysseyStylusInputSettings_h_880083378(TEXT("/Script/OdysseyStylusInput"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_Settings_OdysseyStylusInputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_Settings_OdysseyStylusInputSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
