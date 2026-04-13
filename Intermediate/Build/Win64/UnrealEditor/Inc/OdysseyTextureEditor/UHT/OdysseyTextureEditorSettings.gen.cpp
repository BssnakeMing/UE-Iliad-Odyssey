// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyTextureEditor/Public/Settings/OdysseyTextureEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyTextureEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ODYSSEYTEXTUREEDITOR_API UClass* Z_Construct_UClass_UOdysseyTextureEditorSettings();
ODYSSEYTEXTUREEDITOR_API UClass* Z_Construct_UClass_UOdysseyTextureEditorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyTextureEditor();
// End Cross Module References

// Begin Class UOdysseyTextureEditorSettings
void UOdysseyTextureEditorSettings::StaticRegisterNativesUOdysseyTextureEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyTextureEditorSettings);
UClass* Z_Construct_UClass_UOdysseyTextureEditorSettings_NoRegister()
{
	return UOdysseyTextureEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor's user settings.\n */" },
		{ "IncludePath", "Settings/OdysseyTextureEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyTextureEditorSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IliadDefaultEditorEnabled_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** If true, set Iliad as default editor when double-click on a Texture. */" },
		{ "DisplayName", "Set Iliad as default editor for textures" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyTextureEditorSettings.h" },
		{ "ToolTip", "If true, set Iliad as default editor when double-click on a Texture." },
	};
#endif // WITH_METADATA
	static void NewProp_IliadDefaultEditorEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IliadDefaultEditorEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyTextureEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::NewProp_IliadDefaultEditorEnabled_SetBit(void* Obj)
{
	((UOdysseyTextureEditorSettings*)Obj)->IliadDefaultEditorEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::NewProp_IliadDefaultEditorEnabled = { "IliadDefaultEditorEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyTextureEditorSettings), &Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::NewProp_IliadDefaultEditorEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IliadDefaultEditorEnabled_MetaData), NewProp_IliadDefaultEditorEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::NewProp_IliadDefaultEditorEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyTextureEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::ClassParams = {
	&UOdysseyTextureEditorSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyTextureEditorSettings()
{
	if (!Z_Registration_Info_UClass_UOdysseyTextureEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyTextureEditorSettings.OuterSingleton, Z_Construct_UClass_UOdysseyTextureEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyTextureEditorSettings.OuterSingleton;
}
template<> ODYSSEYTEXTUREEDITOR_API UClass* StaticClass<UOdysseyTextureEditorSettings>()
{
	return UOdysseyTextureEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyTextureEditorSettings);
UOdysseyTextureEditorSettings::~UOdysseyTextureEditorSettings() {}
// End Class UOdysseyTextureEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTextureEditor_Public_Settings_OdysseyTextureEditorSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyTextureEditorSettings, UOdysseyTextureEditorSettings::StaticClass, TEXT("UOdysseyTextureEditorSettings"), &Z_Registration_Info_UClass_UOdysseyTextureEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyTextureEditorSettings), 698085695U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTextureEditor_Public_Settings_OdysseyTextureEditorSettings_h_2101028082(TEXT("/Script/OdysseyTextureEditor"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTextureEditor_Public_Settings_OdysseyTextureEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTextureEditor_Public_Settings_OdysseyTextureEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
