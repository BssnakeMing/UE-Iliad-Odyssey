// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyPainterEditor/Public/Tools/RasterDrawingTool/OdysseyBrushOptionsOverrides.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushOptionsOverrides() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyBrushOptionsOverrides();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyBrushOptionsOverrides_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyPainterEditor();
// End Cross Module References

// Begin Class UOdysseyBrushOptionsOverrides
void UOdysseyBrushOptionsOverrides::StaticRegisterNativesUOdysseyBrushOptionsOverrides()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrushOptionsOverrides);
UClass* Z_Construct_UClass_UOdysseyBrushOptionsOverrides_NoRegister()
{
	return UOdysseyBrushOptionsOverrides::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// FOdysseyBrushOptionsOverrides\n" },
		{ "DisplayName", "Brush Options" },
		{ "IncludePath", "Tools/RasterDrawingTool/OdysseyBrushOptionsOverrides.h" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBrushOptionsOverrides.h" },
		{ "ToolTip", "FOdysseyBrushOptionsOverrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Size_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "Comment", "/** Enable Modifier Size Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBrushOptionsOverrides.h" },
		{ "ToolTip", "Enable Modifier Size Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Flow_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "Comment", "/** Enable Modifier Flow Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBrushOptionsOverrides.h" },
		{ "ToolTip", "Enable Modifier Flow Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Modifier Size Override Value. */" },
		{ "editcondition", "bOverride_Size" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBrushOptionsOverrides.h" },
		{ "SliderExponent", "1" },
		{ "ToolTip", "Modifier Size Override Value." },
		{ "UIMax", "1000" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flow_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Modifier Flow Override Value. */" },
		{ "editcondition", "bOverride_Flow" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBrushOptionsOverrides.h" },
		{ "SliderExponent", "1" },
		{ "ToolTip", "Modifier Flow Override Value." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_Size_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Size;
	static void NewProp_bOverride_Flow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Flow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Flow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrushOptionsOverrides>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_bOverride_Size_SetBit(void* Obj)
{
	((UOdysseyBrushOptionsOverrides*)Obj)->bOverride_Size = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_bOverride_Size = { "bOverride_Size", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyBrushOptionsOverrides), &Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_bOverride_Size_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Size_MetaData), NewProp_bOverride_Size_MetaData) };
void Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_bOverride_Flow_SetBit(void* Obj)
{
	((UOdysseyBrushOptionsOverrides*)Obj)->bOverride_Flow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_bOverride_Flow = { "bOverride_Flow", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyBrushOptionsOverrides), &Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_bOverride_Flow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Flow_MetaData), NewProp_bOverride_Flow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBrushOptionsOverrides, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_Flow = { "Flow", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBrushOptionsOverrides, Flow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flow_MetaData), NewProp_Flow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_bOverride_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_bOverride_Flow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::NewProp_Flow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyPainterEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::ClassParams = {
	&UOdysseyBrushOptionsOverrides::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrushOptionsOverrides()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrushOptionsOverrides.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrushOptionsOverrides.OuterSingleton, Z_Construct_UClass_UOdysseyBrushOptionsOverrides_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrushOptionsOverrides.OuterSingleton;
}
template<> ODYSSEYPAINTEREDITOR_API UClass* StaticClass<UOdysseyBrushOptionsOverrides>()
{
	return UOdysseyBrushOptionsOverrides::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrushOptionsOverrides);
UOdysseyBrushOptionsOverrides::~UOdysseyBrushOptionsOverrides() {}
// End Class UOdysseyBrushOptionsOverrides

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyBrushOptionsOverrides_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrushOptionsOverrides, UOdysseyBrushOptionsOverrides::StaticClass, TEXT("UOdysseyBrushOptionsOverrides"), &Z_Registration_Info_UClass_UOdysseyBrushOptionsOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrushOptionsOverrides), 3547544334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyBrushOptionsOverrides_h_174181020(TEXT("/Script/OdysseyPainterEditor"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyBrushOptionsOverrides_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyBrushOptionsOverrides_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
