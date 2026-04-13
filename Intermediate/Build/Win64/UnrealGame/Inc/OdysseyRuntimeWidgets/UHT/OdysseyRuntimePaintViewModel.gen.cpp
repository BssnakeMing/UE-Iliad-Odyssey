// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/OdysseyRuntimeWidgets/Public/OdysseyRuntimePaintViewModel.h"
#include "Runtime/OdysseyRuntimeTools/Public/OdysseyRuntimePaintToolTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyRuntimePaintViewModel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister();
ODYSSEYRUNTIMETOOLS_API UEnum* Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool();
ODYSSEYRUNTIMETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimePaintViewModel();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister();
ODYSSEYRUNTIMEWIDGETS_API UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature();
ODYSSEYRUNTIMEWIDGETS_API UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature();
ODYSSEYRUNTIMEWIDGETS_API UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature();
ODYSSEYRUNTIMEWIDGETS_API UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OdysseyRuntimeWidgets();
// End Cross Module References

// Begin Delegate FOdysseyRuntimePaintToolChangedSignature
struct Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics
{
	struct _Script_OdysseyRuntimeWidgets_eventOdysseyRuntimePaintToolChangedSignature_Parms
	{
		EOdysseyRuntimePaintTool NewTool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::NewProp_NewTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::NewProp_NewTool = { "NewTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimePaintToolChangedSignature_Parms, NewTool), Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool, METADATA_PARAMS(0, nullptr) }; // 1298979721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::NewProp_NewTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::NewProp_NewTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OdysseyRuntimeWidgets, nullptr, "OdysseyRuntimePaintToolChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimePaintToolChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimePaintToolChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOdysseyRuntimePaintToolChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OdysseyRuntimePaintToolChangedSignature, EOdysseyRuntimePaintTool NewTool)
{
	struct _Script_OdysseyRuntimeWidgets_eventOdysseyRuntimePaintToolChangedSignature_Parms
	{
		EOdysseyRuntimePaintTool NewTool;
	};
	_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimePaintToolChangedSignature_Parms Parms;
	Parms.NewTool=NewTool;
	OdysseyRuntimePaintToolChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOdysseyRuntimePaintToolChangedSignature

// Begin Delegate FOdysseyRuntimeToolSettingsChangedSignature
struct Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics
{
	struct _Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeToolSettingsChangedSignature_Parms
	{
		FOdysseyRuntimeToolSettings NewSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::NewProp_NewSettings = { "NewSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeToolSettingsChangedSignature_Parms, NewSettings), Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings, METADATA_PARAMS(0, nullptr) }; // 531969073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::NewProp_NewSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OdysseyRuntimeWidgets, nullptr, "OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeToolSettingsChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeToolSettingsChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOdysseyRuntimeToolSettingsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OdysseyRuntimeToolSettingsChangedSignature, FOdysseyRuntimeToolSettings NewSettings)
{
	struct _Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeToolSettingsChangedSignature_Parms
	{
		FOdysseyRuntimeToolSettings NewSettings;
	};
	_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeToolSettingsChangedSignature_Parms Parms;
	Parms.NewSettings=NewSettings;
	OdysseyRuntimeToolSettingsChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOdysseyRuntimeToolSettingsChangedSignature

// Begin Delegate FOdysseyRuntimeBrushPresetChangedSignature
struct Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics
{
	struct _Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeBrushPresetChangedSignature_Parms
	{
		FName PresetId;
		int32 PresetIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PresetId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PresetIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeBrushPresetChangedSignature_Parms, PresetId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::NewProp_PresetIndex = { "PresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeBrushPresetChangedSignature_Parms, PresetIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::NewProp_PresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::NewProp_PresetIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OdysseyRuntimeWidgets, nullptr, "OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeBrushPresetChangedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeBrushPresetChangedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOdysseyRuntimeBrushPresetChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OdysseyRuntimeBrushPresetChangedSignature, FName PresetId, int32 PresetIndex)
{
	struct _Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeBrushPresetChangedSignature_Parms
	{
		FName PresetId;
		int32 PresetIndex;
	};
	_Script_OdysseyRuntimeWidgets_eventOdysseyRuntimeBrushPresetChangedSignature_Parms Parms;
	Parms.PresetId=PresetId;
	Parms.PresetIndex=PresetIndex;
	OdysseyRuntimeBrushPresetChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOdysseyRuntimeBrushPresetChangedSignature

// Begin Delegate FOdysseyRuntimeBrushPresetsChangedSignature
struct Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OdysseyRuntimeWidgets, nullptr, "OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOdysseyRuntimeBrushPresetsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OdysseyRuntimeBrushPresetsChangedSignature)
{
	OdysseyRuntimeBrushPresetsChangedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOdysseyRuntimeBrushPresetsChangedSignature

// Begin Class UOdysseyRuntimePaintViewModel Function GetActiveTool
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics
{
	struct OdysseyRuntimePaintViewModel_eventGetActiveTool_Parms
	{
		EOdysseyRuntimePaintTool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventGetActiveTool_Parms, ReturnValue), Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool, METADATA_PARAMS(0, nullptr) }; // 1298979721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "GetActiveTool", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::OdysseyRuntimePaintViewModel_eventGetActiveTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::OdysseyRuntimePaintViewModel_eventGetActiveTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execGetActiveTool)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOdysseyRuntimePaintTool*)Z_Param__Result=P_THIS->GetActiveTool();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function GetActiveTool

// Begin Class UOdysseyRuntimePaintViewModel Function GetBrushPresetsCopy
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics
{
	struct OdysseyRuntimePaintViewModel_eventGetBrushPresetsCopy_Parms
	{
		TArray<UOdysseyBrushAssetBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventGetBrushPresetsCopy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "GetBrushPresetsCopy", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::OdysseyRuntimePaintViewModel_eventGetBrushPresetsCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::OdysseyRuntimePaintViewModel_eventGetBrushPresetsCopy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execGetBrushPresetsCopy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyBrushAssetBase*>*)Z_Param__Result=P_THIS->GetBrushPresetsCopy();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function GetBrushPresetsCopy

// Begin Class UOdysseyRuntimePaintViewModel Function GetSelectedBrushAsset
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics
{
	struct OdysseyRuntimePaintViewModel_eventGetSelectedBrushAsset_Parms
	{
		UOdysseyBrushAssetBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventGetSelectedBrushAsset_Parms, ReturnValue), Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "GetSelectedBrushAsset", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::OdysseyRuntimePaintViewModel_eventGetSelectedBrushAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::OdysseyRuntimePaintViewModel_eventGetSelectedBrushAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execGetSelectedBrushAsset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyBrushAssetBase**)Z_Param__Result=P_THIS->GetSelectedBrushAsset();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function GetSelectedBrushAsset

// Begin Class UOdysseyRuntimePaintViewModel Function GetSelectedBrushPresetId
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics
{
	struct OdysseyRuntimePaintViewModel_eventGetSelectedBrushPresetId_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventGetSelectedBrushPresetId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "GetSelectedBrushPresetId", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::OdysseyRuntimePaintViewModel_eventGetSelectedBrushPresetId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::OdysseyRuntimePaintViewModel_eventGetSelectedBrushPresetId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execGetSelectedBrushPresetId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetSelectedBrushPresetId();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function GetSelectedBrushPresetId

// Begin Class UOdysseyRuntimePaintViewModel Function GetSelectedBrushPresetIndex
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics
{
	struct OdysseyRuntimePaintViewModel_eventGetSelectedBrushPresetIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventGetSelectedBrushPresetIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "GetSelectedBrushPresetIndex", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::OdysseyRuntimePaintViewModel_eventGetSelectedBrushPresetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::OdysseyRuntimePaintViewModel_eventGetSelectedBrushPresetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execGetSelectedBrushPresetIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSelectedBrushPresetIndex();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function GetSelectedBrushPresetIndex

// Begin Class UOdysseyRuntimePaintViewModel Function GetToolSettings
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics
{
	struct OdysseyRuntimePaintViewModel_eventGetToolSettings_Parms
	{
		FOdysseyRuntimeToolSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventGetToolSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings, METADATA_PARAMS(0, nullptr) }; // 531969073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "GetToolSettings", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::OdysseyRuntimePaintViewModel_eventGetToolSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::OdysseyRuntimePaintViewModel_eventGetToolSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execGetToolSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyRuntimeToolSettings*)Z_Param__Result=P_THIS->GetToolSettings();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function GetToolSettings

// Begin Class UOdysseyRuntimePaintViewModel Function SelectBrushPresetById
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSelectBrushPresetById_Parms
	{
		FName InPresetId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InPresetId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::NewProp_InPresetId = { "InPresetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSelectBrushPresetById_Parms, InPresetId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyRuntimePaintViewModel_eventSelectBrushPresetById_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyRuntimePaintViewModel_eventSelectBrushPresetById_Parms), &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::NewProp_InPresetId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SelectBrushPresetById", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::OdysseyRuntimePaintViewModel_eventSelectBrushPresetById_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::OdysseyRuntimePaintViewModel_eventSelectBrushPresetById_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSelectBrushPresetById)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_InPresetId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectBrushPresetById(Z_Param_InPresetId);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SelectBrushPresetById

// Begin Class UOdysseyRuntimePaintViewModel Function SelectBrushPresetByIndex
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSelectBrushPresetByIndex_Parms
	{
		int32 InPresetIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InPresetIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::NewProp_InPresetIndex = { "InPresetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSelectBrushPresetByIndex_Parms, InPresetIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyRuntimePaintViewModel_eventSelectBrushPresetByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyRuntimePaintViewModel_eventSelectBrushPresetByIndex_Parms), &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::NewProp_InPresetIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SelectBrushPresetByIndex", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::OdysseyRuntimePaintViewModel_eventSelectBrushPresetByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::OdysseyRuntimePaintViewModel_eventSelectBrushPresetByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSelectBrushPresetByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InPresetIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectBrushPresetByIndex(Z_Param_InPresetIndex);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SelectBrushPresetByIndex

// Begin Class UOdysseyRuntimePaintViewModel Function SetActiveTool
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSetActiveTool_Parms
	{
		EOdysseyRuntimePaintTool InTool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::NewProp_InTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::NewProp_InTool = { "InTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSetActiveTool_Parms, InTool), Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool, METADATA_PARAMS(0, nullptr) }; // 1298979721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::NewProp_InTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::NewProp_InTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SetActiveTool", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::OdysseyRuntimePaintViewModel_eventSetActiveTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::OdysseyRuntimePaintViewModel_eventSetActiveTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSetActiveTool)
{
	P_GET_ENUM(EOdysseyRuntimePaintTool,Z_Param_InTool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActiveTool(EOdysseyRuntimePaintTool(Z_Param_InTool));
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SetActiveTool

// Begin Class UOdysseyRuntimePaintViewModel Function SetBrushPresets
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSetBrushPresets_Parms
	{
		TArray<UOdysseyBrushAssetBase*> InBrushPresets;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InBrushPresets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InBrushPresets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InBrushPresets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::NewProp_InBrushPresets_Inner = { "InBrushPresets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::NewProp_InBrushPresets = { "InBrushPresets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSetBrushPresets_Parms, InBrushPresets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InBrushPresets_MetaData), NewProp_InBrushPresets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::NewProp_InBrushPresets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::NewProp_InBrushPresets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SetBrushPresets", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::OdysseyRuntimePaintViewModel_eventSetBrushPresets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::OdysseyRuntimePaintViewModel_eventSetBrushPresets_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSetBrushPresets)
{
	P_GET_TARRAY_REF(UOdysseyBrushAssetBase*,Z_Param_Out_InBrushPresets);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrushPresets(Z_Param_Out_InBrushPresets);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SetBrushPresets

// Begin Class UOdysseyRuntimePaintViewModel Function SetColor
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSetColor_Parms
	{
		FLinearColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSetColor_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InColor_MetaData), NewProp_InColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SetColor", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::OdysseyRuntimePaintViewModel_eventSetColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::OdysseyRuntimePaintViewModel_eventSetColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSetColor)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColor(Z_Param_Out_InColor);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SetColor

// Begin Class UOdysseyRuntimePaintViewModel Function SetFreehandStep
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSetFreehandStep_Parms
	{
		float InStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::NewProp_InStep = { "InStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSetFreehandStep_Parms, InStep), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::NewProp_InStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SetFreehandStep", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::OdysseyRuntimePaintViewModel_eventSetFreehandStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::OdysseyRuntimePaintViewModel_eventSetFreehandStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSetFreehandStep)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFreehandStep(Z_Param_InStep);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SetFreehandStep

// Begin Class UOdysseyRuntimePaintViewModel Function SetHardness
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSetHardness_Parms
	{
		float InHardness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InHardness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::NewProp_InHardness = { "InHardness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSetHardness_Parms, InHardness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::NewProp_InHardness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SetHardness", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::OdysseyRuntimePaintViewModel_eventSetHardness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::OdysseyRuntimePaintViewModel_eventSetHardness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSetHardness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InHardness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHardness(Z_Param_InHardness);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SetHardness

// Begin Class UOdysseyRuntimePaintViewModel Function SetOpacity
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSetOpacity_Parms
	{
		float InOpacity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::NewProp_InOpacity = { "InOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSetOpacity_Parms, InOpacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::NewProp_InOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SetOpacity", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::OdysseyRuntimePaintViewModel_eventSetOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::OdysseyRuntimePaintViewModel_eventSetOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSetOpacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOpacity(Z_Param_InOpacity);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SetOpacity

// Begin Class UOdysseyRuntimePaintViewModel Function SetSize
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSetSize_Parms
	{
		float InSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSetSize_Parms, InSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::NewProp_InSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SetSize", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::OdysseyRuntimePaintViewModel_eventSetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::OdysseyRuntimePaintViewModel_eventSetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSetSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSize(Z_Param_InSize);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SetSize

// Begin Class UOdysseyRuntimePaintViewModel Function SetTolerance
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSetTolerance_Parms
	{
		float InTolerance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InTolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::NewProp_InTolerance = { "InTolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSetTolerance_Parms, InTolerance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::NewProp_InTolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SetTolerance", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::OdysseyRuntimePaintViewModel_eventSetTolerance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::OdysseyRuntimePaintViewModel_eventSetTolerance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSetTolerance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InTolerance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTolerance(Z_Param_InTolerance);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SetTolerance

// Begin Class UOdysseyRuntimePaintViewModel Function SetToolSettings
struct Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics
{
	struct OdysseyRuntimePaintViewModel_eventSetToolSettings_Parms
	{
		FOdysseyRuntimeToolSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintViewModel_eventSetToolSettings_Parms, InSettings), Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 531969073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintViewModel, nullptr, "SetToolSettings", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::OdysseyRuntimePaintViewModel_eventSetToolSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::OdysseyRuntimePaintViewModel_eventSetToolSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintViewModel::execSetToolSettings)
{
	P_GET_STRUCT_REF(FOdysseyRuntimeToolSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetToolSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintViewModel Function SetToolSettings

// Begin Class UOdysseyRuntimePaintViewModel
void UOdysseyRuntimePaintViewModel::StaticRegisterNativesUOdysseyRuntimePaintViewModel()
{
	UClass* Class = UOdysseyRuntimePaintViewModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetActiveTool", &UOdysseyRuntimePaintViewModel::execGetActiveTool },
		{ "GetBrushPresetsCopy", &UOdysseyRuntimePaintViewModel::execGetBrushPresetsCopy },
		{ "GetSelectedBrushAsset", &UOdysseyRuntimePaintViewModel::execGetSelectedBrushAsset },
		{ "GetSelectedBrushPresetId", &UOdysseyRuntimePaintViewModel::execGetSelectedBrushPresetId },
		{ "GetSelectedBrushPresetIndex", &UOdysseyRuntimePaintViewModel::execGetSelectedBrushPresetIndex },
		{ "GetToolSettings", &UOdysseyRuntimePaintViewModel::execGetToolSettings },
		{ "SelectBrushPresetById", &UOdysseyRuntimePaintViewModel::execSelectBrushPresetById },
		{ "SelectBrushPresetByIndex", &UOdysseyRuntimePaintViewModel::execSelectBrushPresetByIndex },
		{ "SetActiveTool", &UOdysseyRuntimePaintViewModel::execSetActiveTool },
		{ "SetBrushPresets", &UOdysseyRuntimePaintViewModel::execSetBrushPresets },
		{ "SetColor", &UOdysseyRuntimePaintViewModel::execSetColor },
		{ "SetFreehandStep", &UOdysseyRuntimePaintViewModel::execSetFreehandStep },
		{ "SetHardness", &UOdysseyRuntimePaintViewModel::execSetHardness },
		{ "SetOpacity", &UOdysseyRuntimePaintViewModel::execSetOpacity },
		{ "SetSize", &UOdysseyRuntimePaintViewModel::execSetSize },
		{ "SetTolerance", &UOdysseyRuntimePaintViewModel::execSetTolerance },
		{ "SetToolSettings", &UOdysseyRuntimePaintViewModel::execSetToolSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyRuntimePaintViewModel);
UClass* Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister()
{
	return UOdysseyRuntimePaintViewModel::StaticClass();
}
struct Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OdysseyRuntimePaintViewModel.h" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActiveToolChanged_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnToolSettingsChanged_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBrushPresetChanged_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBrushPresetsChanged_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTool_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolSettings_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushPresets_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBrushPresetId_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintViewModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActiveToolChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnToolSettingsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBrushPresetChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBrushPresetsChanged;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveTool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToolSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushPresets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushPresets;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedBrushPresetId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetActiveTool, "GetActiveTool" }, // 2751421413
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetBrushPresetsCopy, "GetBrushPresetsCopy" }, // 1874390153
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushAsset, "GetSelectedBrushAsset" }, // 4091281751
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetId, "GetSelectedBrushPresetId" }, // 3833508501
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetSelectedBrushPresetIndex, "GetSelectedBrushPresetIndex" }, // 956582179
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_GetToolSettings, "GetToolSettings" }, // 2914723002
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetById, "SelectBrushPresetById" }, // 3600774401
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SelectBrushPresetByIndex, "SelectBrushPresetByIndex" }, // 3018529158
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetActiveTool, "SetActiveTool" }, // 884851809
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetBrushPresets, "SetBrushPresets" }, // 2640639048
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetColor, "SetColor" }, // 3078891219
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetFreehandStep, "SetFreehandStep" }, // 1326683651
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetHardness, "SetHardness" }, // 4073464255
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetOpacity, "SetOpacity" }, // 1523530279
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetSize, "SetSize" }, // 643244774
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetTolerance, "SetTolerance" }, // 1376696074
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintViewModel_SetToolSettings, "SetToolSettings" }, // 37573963
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyRuntimePaintViewModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_OnActiveToolChanged = { "OnActiveToolChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintViewModel, OnActiveToolChanged), Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActiveToolChanged_MetaData), NewProp_OnActiveToolChanged_MetaData) }; // 1161811364
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_OnToolSettingsChanged = { "OnToolSettingsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintViewModel, OnToolSettingsChanged), Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnToolSettingsChanged_MetaData), NewProp_OnToolSettingsChanged_MetaData) }; // 3448704330
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_OnBrushPresetChanged = { "OnBrushPresetChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintViewModel, OnBrushPresetChanged), Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBrushPresetChanged_MetaData), NewProp_OnBrushPresetChanged_MetaData) }; // 4149983027
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_OnBrushPresetsChanged = { "OnBrushPresetsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintViewModel, OnBrushPresetsChanged), Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBrushPresetsChanged_MetaData), NewProp_OnBrushPresetsChanged_MetaData) }; // 2759298067
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_ActiveTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_ActiveTool = { "ActiveTool", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintViewModel, ActiveTool), Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTool_MetaData), NewProp_ActiveTool_MetaData) }; // 1298979721
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_ToolSettings = { "ToolSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintViewModel, ToolSettings), Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolSettings_MetaData), NewProp_ToolSettings_MetaData) }; // 531969073
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_BrushPresets_Inner = { "BrushPresets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_BrushPresets = { "BrushPresets", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintViewModel, BrushPresets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushPresets_MetaData), NewProp_BrushPresets_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_SelectedBrushPresetId = { "SelectedBrushPresetId", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintViewModel, SelectedBrushPresetId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedBrushPresetId_MetaData), NewProp_SelectedBrushPresetId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_OnActiveToolChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_OnToolSettingsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_OnBrushPresetChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_OnBrushPresetsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_ActiveTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_ActiveTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_ToolSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_BrushPresets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_BrushPresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::NewProp_SelectedBrushPresetId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyRuntimeWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::ClassParams = {
	&UOdysseyRuntimePaintViewModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyRuntimePaintViewModel()
{
	if (!Z_Registration_Info_UClass_UOdysseyRuntimePaintViewModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyRuntimePaintViewModel.OuterSingleton, Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyRuntimePaintViewModel.OuterSingleton;
}
template<> ODYSSEYRUNTIMEWIDGETS_API UClass* StaticClass<UOdysseyRuntimePaintViewModel>()
{
	return UOdysseyRuntimePaintViewModel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyRuntimePaintViewModel);
UOdysseyRuntimePaintViewModel::~UOdysseyRuntimePaintViewModel() {}
// End Class UOdysseyRuntimePaintViewModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyRuntimePaintViewModel, UOdysseyRuntimePaintViewModel::StaticClass, TEXT("UOdysseyRuntimePaintViewModel"), &Z_Registration_Info_UClass_UOdysseyRuntimePaintViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyRuntimePaintViewModel), 3693379453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_715896134(TEXT("/Script/OdysseyRuntimeWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
