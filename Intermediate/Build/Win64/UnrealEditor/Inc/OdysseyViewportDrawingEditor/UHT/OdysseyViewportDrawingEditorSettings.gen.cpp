// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyViewportDrawingEditor/Private/Settings/OdysseyViewportDrawingEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyViewportDrawingEditorSettings() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
MESHPAINT_API UClass* Z_Construct_UClass_UMeshPaintSettings();
ODYSSEYVIEWPORTDRAWINGEDITOR_API UClass* Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings();
ODYSSEYVIEWPORTDRAWINGEDITOR_API UClass* Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_NoRegister();
ODYSSEYVIEWPORTDRAWINGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings();
UPackage* Z_Construct_UPackage__Script_OdysseyViewportDrawingEditor();
// End Cross Module References

// Begin ScriptStruct FOdysseyViewportDrawingEditorTexturePaintSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OdysseyViewportDrawingEditorTexturePaintSettings;
class UScriptStruct* FOdysseyViewportDrawingEditorTexturePaintSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyViewportDrawingEditorTexturePaintSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OdysseyViewportDrawingEditorTexturePaintSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings, (UObject*)Z_Construct_UPackage__Script_OdysseyViewportDrawingEditor(), TEXT("OdysseyViewportDrawingEditorTexturePaintSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OdysseyViewportDrawingEditorTexturePaintSettings.OuterSingleton;
}
template<> ODYSSEYVIEWPORTDRAWINGEDITOR_API UScriptStruct* StaticStruct<FOdysseyViewportDrawingEditorTexturePaintSettings>()
{
	return FOdysseyViewportDrawingEditorTexturePaintSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Texture painting settings structure */" },
		{ "ModuleRelativePath", "Private/Settings/OdysseyViewportDrawingEditorSettings.h" },
		{ "ToolTip", "Texture painting settings structure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mPaintTexture_MetaData[] = {
		{ "Category", "Odyssey Viewport Drawing Editor" },
		{ "Comment", "/** Texture to which Painting should be Applied */" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Private/Settings/OdysseyViewportDrawingEditorSettings.h" },
		{ "ToolTip", "Texture to which Painting should be Applied" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_mPaintTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOdysseyViewportDrawingEditorTexturePaintSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::NewProp_mPaintTexture = { "mPaintTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyViewportDrawingEditorTexturePaintSettings, mPaintTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mPaintTexture_MetaData), NewProp_mPaintTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::NewProp_mPaintTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyViewportDrawingEditor,
	nullptr,
	&NewStructOps,
	"OdysseyViewportDrawingEditorTexturePaintSettings",
	Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::PropPointers),
	sizeof(FOdysseyViewportDrawingEditorTexturePaintSettings),
	alignof(FOdysseyViewportDrawingEditorTexturePaintSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyViewportDrawingEditorTexturePaintSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OdysseyViewportDrawingEditorTexturePaintSettings.InnerSingleton, Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OdysseyViewportDrawingEditorTexturePaintSettings.InnerSingleton;
}
// End ScriptStruct FOdysseyViewportDrawingEditorTexturePaintSettings

// Begin Class UOdysseyViewportDrawingEditorSettings
void UOdysseyViewportDrawingEditorSettings::StaticRegisterNativesUOdysseyViewportDrawingEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyViewportDrawingEditorSettings);
UClass* Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_NoRegister()
{
	return UOdysseyViewportDrawingEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Paint mode settings class derives from base mesh painting settings */" },
		{ "IncludePath", "Settings/OdysseyViewportDrawingEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/OdysseyViewportDrawingEditorSettings.h" },
		{ "ToolTip", "Paint mode settings class derives from base mesh painting settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mTexturePaintSettings_MetaData[] = {
		{ "Category", "Odyssey Viewport Drawing Editor" },
		{ "ModuleRelativePath", "Private/Settings/OdysseyViewportDrawingEditorSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_mTexturePaintSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyViewportDrawingEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::NewProp_mTexturePaintSettings = { "mTexturePaintSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyViewportDrawingEditorSettings, mTexturePaintSettings), Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mTexturePaintSettings_MetaData), NewProp_mTexturePaintSettings_MetaData) }; // 424167313
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::NewProp_mTexturePaintSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshPaintSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyViewportDrawingEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::ClassParams = {
	&UOdysseyViewportDrawingEditorSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings()
{
	if (!Z_Registration_Info_UClass_UOdysseyViewportDrawingEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyViewportDrawingEditorSettings.OuterSingleton, Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyViewportDrawingEditorSettings.OuterSingleton;
}
template<> ODYSSEYVIEWPORTDRAWINGEDITOR_API UClass* StaticClass<UOdysseyViewportDrawingEditorSettings>()
{
	return UOdysseyViewportDrawingEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyViewportDrawingEditorSettings);
UOdysseyViewportDrawingEditorSettings::~UOdysseyViewportDrawingEditorSettings() {}
// End Class UOdysseyViewportDrawingEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyViewportDrawingEditor_Private_Settings_OdysseyViewportDrawingEditorSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOdysseyViewportDrawingEditorTexturePaintSettings::StaticStruct, Z_Construct_UScriptStruct_FOdysseyViewportDrawingEditorTexturePaintSettings_Statics::NewStructOps, TEXT("OdysseyViewportDrawingEditorTexturePaintSettings"), &Z_Registration_Info_UScriptStruct_OdysseyViewportDrawingEditorTexturePaintSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOdysseyViewportDrawingEditorTexturePaintSettings), 424167313U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyViewportDrawingEditorSettings, UOdysseyViewportDrawingEditorSettings::StaticClass, TEXT("UOdysseyViewportDrawingEditorSettings"), &Z_Registration_Info_UClass_UOdysseyViewportDrawingEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyViewportDrawingEditorSettings), 3356435885U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyViewportDrawingEditor_Private_Settings_OdysseyViewportDrawingEditorSettings_h_101817786(TEXT("/Script/OdysseyViewportDrawingEditor"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyViewportDrawingEditor_Private_Settings_OdysseyViewportDrawingEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyViewportDrawingEditor_Private_Settings_OdysseyViewportDrawingEditorSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyViewportDrawingEditor_Private_Settings_OdysseyViewportDrawingEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyViewportDrawingEditor_Private_Settings_OdysseyViewportDrawingEditorSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
