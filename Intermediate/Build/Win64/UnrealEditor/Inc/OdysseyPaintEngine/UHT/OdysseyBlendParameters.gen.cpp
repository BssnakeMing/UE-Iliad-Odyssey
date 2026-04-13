// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyPaintEngine/Public/OdysseyBlendParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBlendParameters() {}

// Begin Cross Module References
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode();
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode();
ODYSSEYPAINTENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBlendParameters();
UPackage* Z_Construct_UPackage__Script_OdysseyPaintEngine();
// End Cross Module References

// Begin ScriptStruct FOdysseyBlendParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OdysseyBlendParameters;
class UScriptStruct* FOdysseyBlendParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyBlendParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OdysseyBlendParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOdysseyBlendParameters, (UObject*)Z_Construct_UPackage__Script_OdysseyPaintEngine(), TEXT("OdysseyBlendParameters"));
	}
	return Z_Registration_Info_UScriptStruct_OdysseyBlendParameters.OuterSingleton;
}
template<> ODYSSEYPAINTENGINE_API UScriptStruct* StaticStruct<FOdysseyBlendParameters>()
{
	return FOdysseyBlendParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OdysseyBlendParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEraserMode_MetaData[] = {
		{ "Category", "Blending" },
		{ "ModuleRelativePath", "Public/OdysseyBlendParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendingMode_MetaData[] = {
		{ "Category", "Blending" },
		{ "EditCondition", "!bEraserMode" },
		{ "ModuleRelativePath", "Public/OdysseyBlendParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaMode_MetaData[] = {
		{ "Category", "Blending" },
		{ "EditCondition", "!bEraserMode" },
		{ "ModuleRelativePath", "Public/OdysseyBlendParameters.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "Category", "Blending" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Delta", "1" },
		{ "EditCondition", "!bEraserMode" },
		{ "ModuleRelativePath", "Public/OdysseyBlendParameters.h" },
		{ "Multiple", "1" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
		{ "Units", "Percent" },
	};
#endif // WITH_METADATA
	static void NewProp_bEraserMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEraserMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOdysseyBlendParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_bEraserMode_SetBit(void* Obj)
{
	((FOdysseyBlendParameters*)Obj)->bEraserMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_bEraserMode = { "bEraserMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOdysseyBlendParameters), &Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_bEraserMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEraserMode_MetaData), NewProp_bEraserMode_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_BlendingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_BlendingMode = { "BlendingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyBlendParameters, BlendingMode), Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendingMode_MetaData), NewProp_BlendingMode_MetaData) }; // 1337073500
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_AlphaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_AlphaMode = { "AlphaMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyBlendParameters, AlphaMode), Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaMode_MetaData), NewProp_AlphaMode_MetaData) }; // 1351865346
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyBlendParameters, Opacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_bEraserMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_BlendingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_BlendingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_AlphaMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_AlphaMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewProp_Opacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyPaintEngine,
	nullptr,
	&NewStructOps,
	"OdysseyBlendParameters",
	Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::PropPointers),
	sizeof(FOdysseyBlendParameters),
	alignof(FOdysseyBlendParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBlendParameters()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyBlendParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OdysseyBlendParameters.InnerSingleton, Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OdysseyBlendParameters.InnerSingleton;
}
// End ScriptStruct FOdysseyBlendParameters

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPaintEngine_Public_OdysseyBlendParameters_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOdysseyBlendParameters::StaticStruct, Z_Construct_UScriptStruct_FOdysseyBlendParameters_Statics::NewStructOps, TEXT("OdysseyBlendParameters"), &Z_Registration_Info_UScriptStruct_OdysseyBlendParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOdysseyBlendParameters), 327957349U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPaintEngine_Public_OdysseyBlendParameters_h_2904446942(TEXT("/Script/OdysseyPaintEngine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPaintEngine_Public_OdysseyBlendParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPaintEngine_Public_OdysseyBlendParameters_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
