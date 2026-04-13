// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyShapes/Public/FreehandShape/Smoothing/OdysseySmoothingOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseySmoothingOptions() {}

// Begin Cross Module References
ODYSSEYSHAPES_API UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod();
ODYSSEYSHAPES_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseySmoothingOptions();
UPackage* Z_Construct_UPackage__Script_OdysseyShapes();
// End Cross Module References

// Begin ScriptStruct FOdysseySmoothingOptions
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OdysseySmoothingOptions;
class UScriptStruct* FOdysseySmoothingOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseySmoothingOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OdysseySmoothingOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOdysseySmoothingOptions, (UObject*)Z_Construct_UPackage__Script_OdysseyShapes(), TEXT("OdysseySmoothingOptions"));
	}
	return Z_Registration_Info_UScriptStruct_OdysseySmoothingOptions.OuterSingleton;
}
template<> ODYSSEYSHAPES_API UScriptStruct* StaticStruct<FOdysseySmoothingOptions>()
{
	return FOdysseySmoothingOptions::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Smoothing" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FreehandShape/Smoothing/OdysseySmoothingOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingMethod_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "Comment", "/** The method used for smoothing. */" },
		{ "ModuleRelativePath", "Public/FreehandShape/Smoothing/OdysseySmoothingOptions.h" },
		{ "ToolTip", "The method used for smoothing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingStrength_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Distance for Smooting computation. */" },
		{ "ModuleRelativePath", "Public/FreehandShape/Smoothing/OdysseySmoothingOptions.h" },
		{ "SliderExponent", "1" },
		{ "ToolTip", "Distance for Smooting computation." },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingRealTime_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "Comment", "/** Should smoothing be real-time, meaning the first input draws directly, even though the strength is not reached yet. */" },
		{ "ModuleRelativePath", "Public/FreehandShape/Smoothing/OdysseySmoothingOptions.h" },
		{ "ToolTip", "Should smoothing be real-time, meaning the first input draws directly, even though the strength is not reached yet." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingCatchUp_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "Comment", "/** Should smoothing catch-up to the cursor before releasing the stroke. */" },
		{ "ModuleRelativePath", "Public/FreehandShape/Smoothing/OdysseySmoothingOptions.h" },
		{ "ToolTip", "Should smoothing catch-up to the cursor before releasing the stroke." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingStrength;
	static void NewProp_SmoothingRealTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SmoothingRealTime;
	static void NewProp_SmoothingCatchUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SmoothingCatchUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOdysseySmoothingOptions>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingMethod = { "SmoothingMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseySmoothingOptions, SmoothingMethod), Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingMethod_MetaData), NewProp_SmoothingMethod_MetaData) }; // 2715927013
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingStrength = { "SmoothingStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseySmoothingOptions, SmoothingStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingStrength_MetaData), NewProp_SmoothingStrength_MetaData) };
void Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingRealTime_SetBit(void* Obj)
{
	((FOdysseySmoothingOptions*)Obj)->SmoothingRealTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingRealTime = { "SmoothingRealTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOdysseySmoothingOptions), &Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingRealTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingRealTime_MetaData), NewProp_SmoothingRealTime_MetaData) };
void Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingCatchUp_SetBit(void* Obj)
{
	((FOdysseySmoothingOptions*)Obj)->SmoothingCatchUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingCatchUp = { "SmoothingCatchUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOdysseySmoothingOptions), &Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingCatchUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingCatchUp_MetaData), NewProp_SmoothingCatchUp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingRealTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewProp_SmoothingCatchUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyShapes,
	nullptr,
	&NewStructOps,
	"OdysseySmoothingOptions",
	Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::PropPointers),
	sizeof(FOdysseySmoothingOptions),
	alignof(FOdysseySmoothingOptions),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOdysseySmoothingOptions()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseySmoothingOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OdysseySmoothingOptions.InnerSingleton, Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OdysseySmoothingOptions.InnerSingleton;
}
// End ScriptStruct FOdysseySmoothingOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Smoothing_OdysseySmoothingOptions_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOdysseySmoothingOptions::StaticStruct, Z_Construct_UScriptStruct_FOdysseySmoothingOptions_Statics::NewStructOps, TEXT("OdysseySmoothingOptions"), &Z_Registration_Info_UScriptStruct_OdysseySmoothingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOdysseySmoothingOptions), 1665345053U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Smoothing_OdysseySmoothingOptions_h_3994634809(TEXT("/Script/OdysseyShapes"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Smoothing_OdysseySmoothingOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Smoothing_OdysseySmoothingOptions_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
