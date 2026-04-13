// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/OdysseyRuntimeTools/Public/OdysseyRuntimePaintToolTypes.h"
#include "Editor/OdysseyShapes/Public/FreehandShape/Smoothing/OdysseySmoothingOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyRuntimePaintToolTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ODYSSEYRUNTIMETOOLS_API UEnum* Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool();
ODYSSEYRUNTIMETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings();
ODYSSEYSHAPES_API UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType();
ODYSSEYSHAPES_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseySmoothingOptions();
UPackage* Z_Construct_UPackage__Script_OdysseyRuntimeTools();
// End Cross Module References

// Begin Enum EOdysseyRuntimePaintTool
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyRuntimePaintTool;
static UEnum* EOdysseyRuntimePaintTool_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyRuntimePaintTool.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyRuntimePaintTool.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool, (UObject*)Z_Construct_UPackage__Script_OdysseyRuntimeTools(), TEXT("EOdysseyRuntimePaintTool"));
	}
	return Z_Registration_Info_UEnum_EOdysseyRuntimePaintTool.OuterSingleton;
}
template<> ODYSSEYRUNTIMETOOLS_API UEnum* StaticEnum<EOdysseyRuntimePaintTool>()
{
	return EOdysseyRuntimePaintTool_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Brush.DisplayName", "Brush" },
		{ "Brush.Name", "EOdysseyRuntimePaintTool::Brush" },
		{ "Bucket.DisplayName", "Bucket" },
		{ "Bucket.Name", "EOdysseyRuntimePaintTool::Bucket" },
		{ "Eraser.DisplayName", "Eraser" },
		{ "Eraser.Name", "EOdysseyRuntimePaintTool::Eraser" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOdysseyRuntimePaintTool::Brush", (int64)EOdysseyRuntimePaintTool::Brush },
		{ "EOdysseyRuntimePaintTool::Eraser", (int64)EOdysseyRuntimePaintTool::Eraser },
		{ "EOdysseyRuntimePaintTool::Bucket", (int64)EOdysseyRuntimePaintTool::Bucket },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyRuntimeTools,
	nullptr,
	"EOdysseyRuntimePaintTool",
	"EOdysseyRuntimePaintTool",
	Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool()
{
	if (!Z_Registration_Info_UEnum_EOdysseyRuntimePaintTool.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyRuntimePaintTool.InnerSingleton, Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyRuntimePaintTool.InnerSingleton;
}
// End Enum EOdysseyRuntimePaintTool

// Begin ScriptStruct FOdysseyRuntimeToolSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OdysseyRuntimeToolSettings;
class UScriptStruct* FOdysseyRuntimeToolSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyRuntimeToolSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OdysseyRuntimeToolSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings, (UObject*)Z_Construct_UPackage__Script_OdysseyRuntimeTools(), TEXT("OdysseyRuntimeToolSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OdysseyRuntimeToolSettings.OuterSingleton;
}
template<> ODYSSEYRUNTIMETOOLS_API UScriptStruct* StaticStruct<FOdysseyRuntimeToolSettings>()
{
	return FOdysseyRuntimeToolSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ClampMax", "256.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
		{ "UIMax", "256.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreehandStep_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ClampMax", "200.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
		{ "UIMax", "200.0" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFreehandAdaptativeStep_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreehandInterpolationType_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFreehandSmoothingEnabled_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreehandSmoothingOptions_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintToolTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hardness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FreehandStep;
	static void NewProp_bFreehandAdaptativeStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreehandAdaptativeStep;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FreehandInterpolationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FreehandInterpolationType;
	static void NewProp_bFreehandSmoothingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFreehandSmoothingEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FreehandSmoothingOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOdysseyRuntimeToolSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyRuntimeToolSettings, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyRuntimeToolSettings, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyRuntimeToolSettings, Opacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_Hardness = { "Hardness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyRuntimeToolSettings, Hardness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hardness_MetaData), NewProp_Hardness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyRuntimeToolSettings, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_FreehandStep = { "FreehandStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyRuntimeToolSettings, FreehandStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreehandStep_MetaData), NewProp_FreehandStep_MetaData) };
void Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_bFreehandAdaptativeStep_SetBit(void* Obj)
{
	((FOdysseyRuntimeToolSettings*)Obj)->bFreehandAdaptativeStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_bFreehandAdaptativeStep = { "bFreehandAdaptativeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOdysseyRuntimeToolSettings), &Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_bFreehandAdaptativeStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFreehandAdaptativeStep_MetaData), NewProp_bFreehandAdaptativeStep_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_FreehandInterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_FreehandInterpolationType = { "FreehandInterpolationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyRuntimeToolSettings, FreehandInterpolationType), Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreehandInterpolationType_MetaData), NewProp_FreehandInterpolationType_MetaData) }; // 3940167650
void Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_bFreehandSmoothingEnabled_SetBit(void* Obj)
{
	((FOdysseyRuntimeToolSettings*)Obj)->bFreehandSmoothingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_bFreehandSmoothingEnabled = { "bFreehandSmoothingEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FOdysseyRuntimeToolSettings), &Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_bFreehandSmoothingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFreehandSmoothingEnabled_MetaData), NewProp_bFreehandSmoothingEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_FreehandSmoothingOptions = { "FreehandSmoothingOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyRuntimeToolSettings, FreehandSmoothingOptions), Z_Construct_UScriptStruct_FOdysseySmoothingOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreehandSmoothingOptions_MetaData), NewProp_FreehandSmoothingOptions_MetaData) }; // 1665345053
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_Hardness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_FreehandStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_bFreehandAdaptativeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_FreehandInterpolationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_FreehandInterpolationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_bFreehandSmoothingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewProp_FreehandSmoothingOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyRuntimeTools,
	nullptr,
	&NewStructOps,
	"OdysseyRuntimeToolSettings",
	Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::PropPointers),
	sizeof(FOdysseyRuntimeToolSettings),
	alignof(FOdysseyRuntimeToolSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyRuntimeToolSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OdysseyRuntimeToolSettings.InnerSingleton, Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OdysseyRuntimeToolSettings.InnerSingleton;
}
// End ScriptStruct FOdysseyRuntimeToolSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeTools_Public_OdysseyRuntimePaintToolTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOdysseyRuntimePaintTool_StaticEnum, TEXT("EOdysseyRuntimePaintTool"), &Z_Registration_Info_UEnum_EOdysseyRuntimePaintTool, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1298979721U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOdysseyRuntimeToolSettings::StaticStruct, Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics::NewStructOps, TEXT("OdysseyRuntimeToolSettings"), &Z_Registration_Info_UScriptStruct_OdysseyRuntimeToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOdysseyRuntimeToolSettings), 531969073U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeTools_Public_OdysseyRuntimePaintToolTypes_h_2342909452(TEXT("/Script/OdysseyRuntimeTools"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeTools_Public_OdysseyRuntimePaintToolTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeTools_Public_OdysseyRuntimePaintToolTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeTools_Public_OdysseyRuntimePaintToolTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeTools_Public_OdysseyRuntimePaintToolTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
