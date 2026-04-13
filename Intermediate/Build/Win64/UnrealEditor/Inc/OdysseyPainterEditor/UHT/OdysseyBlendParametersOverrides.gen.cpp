// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyPainterEditor/Public/Tools/RasterDrawingTool/OdysseyBlendParametersOverrides.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBlendParametersOverrides() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode();
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyBlendParametersOverrides();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyBlendParametersOverrides_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyPainterEditor();
// End Cross Module References

// Begin Class UOdysseyBlendParametersOverrides
void UOdysseyBlendParametersOverrides::StaticRegisterNativesUOdysseyBlendParametersOverrides()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBlendParametersOverrides);
UClass* Z_Construct_UClass_UOdysseyBlendParametersOverrides_NoRegister()
{
	return UOdysseyBlendParametersOverrides::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// FOdysseyBlendParametersOverrides\n" },
		{ "DisplayName", "Blend Parameters" },
		{ "IncludePath", "Tools/RasterDrawingTool/OdysseyBlendParametersOverrides.h" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBlendParametersOverrides.h" },
		{ "ToolTip", "FOdysseyBlendParametersOverrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Opacity_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "Comment", "/** Enable Modifier Opacity Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBlendParametersOverrides.h" },
		{ "ToolTip", "Enable Modifier Opacity Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_BlendingMode_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "Comment", "/** Enable Modifier BlendingMode Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBlendParametersOverrides.h" },
		{ "ToolTip", "Enable Modifier BlendingMode Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AlphaMode_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "Comment", "/** Enable Modifier AlphaMode Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBlendParametersOverrides.h" },
		{ "ToolTip", "Enable Modifier AlphaMode Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Modifier Opacity Override Value. */" },
		{ "editcondition", "bOverride_Opacity" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBlendParametersOverrides.h" },
		{ "SliderExponent", "1" },
		{ "ToolTip", "Modifier Opacity Override Value." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingMode_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "Comment", "/** Modifier BlendingMode Override Value. */" },
		{ "editcondition", "bOverride_BlendingMode" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBlendParametersOverrides.h" },
		{ "ToolTip", "Modifier BlendingMode Override Value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaMode_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "Comment", "/** Modifier AlphaMode Override Value. */" },
		{ "editcondition", "bOverride_AlphaMode" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyBlendParametersOverrides.h" },
		{ "ToolTip", "Modifier AlphaMode Override Value." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_Opacity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Opacity;
	static void NewProp_bOverride_BlendingMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_BlendingMode;
	static void NewProp_bOverride_AlphaMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AlphaMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBlendParametersOverrides>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_Opacity_SetBit(void* Obj)
{
	((UOdysseyBlendParametersOverrides*)Obj)->bOverride_Opacity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_Opacity = { "bOverride_Opacity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyBlendParametersOverrides), &Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_Opacity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Opacity_MetaData), NewProp_bOverride_Opacity_MetaData) };
void Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_BlendingMode_SetBit(void* Obj)
{
	((UOdysseyBlendParametersOverrides*)Obj)->bOverride_BlendingMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_BlendingMode = { "bOverride_BlendingMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyBlendParametersOverrides), &Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_BlendingMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_BlendingMode_MetaData), NewProp_bOverride_BlendingMode_MetaData) };
void Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_AlphaMode_SetBit(void* Obj)
{
	((UOdysseyBlendParametersOverrides*)Obj)->bOverride_AlphaMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_AlphaMode = { "bOverride_AlphaMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyBlendParametersOverrides), &Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_AlphaMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AlphaMode_MetaData), NewProp_bOverride_AlphaMode_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBlendParametersOverrides, Opacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_BlendingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_BlendingMode = { "BlendingMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBlendParametersOverrides, BlendingMode), Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingMode_MetaData), NewProp_BlendingMode_MetaData) }; // 1337073500
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_AlphaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_AlphaMode = { "AlphaMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBlendParametersOverrides, AlphaMode), Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaMode_MetaData), NewProp_AlphaMode_MetaData) }; // 1351865346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_BlendingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_bOverride_AlphaMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_BlendingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_BlendingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_AlphaMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::NewProp_AlphaMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyPainterEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::ClassParams = {
	&UOdysseyBlendParametersOverrides::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBlendParametersOverrides()
{
	if (!Z_Registration_Info_UClass_UOdysseyBlendParametersOverrides.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBlendParametersOverrides.OuterSingleton, Z_Construct_UClass_UOdysseyBlendParametersOverrides_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBlendParametersOverrides.OuterSingleton;
}
template<> ODYSSEYPAINTEREDITOR_API UClass* StaticClass<UOdysseyBlendParametersOverrides>()
{
	return UOdysseyBlendParametersOverrides::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBlendParametersOverrides);
UOdysseyBlendParametersOverrides::~UOdysseyBlendParametersOverrides() {}
// End Class UOdysseyBlendParametersOverrides

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyBlendParametersOverrides_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBlendParametersOverrides, UOdysseyBlendParametersOverrides::StaticClass, TEXT("UOdysseyBlendParametersOverrides"), &Z_Registration_Info_UClass_UOdysseyBlendParametersOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBlendParametersOverrides), 1771787861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyBlendParametersOverrides_h_657718604(TEXT("/Script/OdysseyPainterEditor"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyBlendParametersOverrides_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyBlendParametersOverrides_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
