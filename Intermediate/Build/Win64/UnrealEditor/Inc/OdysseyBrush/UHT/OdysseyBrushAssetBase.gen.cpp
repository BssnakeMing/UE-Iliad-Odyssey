// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/OdysseyBrushAssetBase.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushBlock.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushColor.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushPivot.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushRect.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushAssetBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushAssetBase();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushOptions_NoRegister();
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth();
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBlockProxy();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBrushColor();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBrushRect();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyPivot();
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode();
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin Class UOdysseyBrushAssetBase Function DebugStamp
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_DebugStamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stamps" },
		{ "Comment", "/*******************************///Debug Stamp, stamps a basic shape with the current modifiers parameters. Is also pressure sensitive.\n" },
		{ "HideSelfPin", "" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "***************************//Debug Stamp, stamps a basic shape with the current modifiers parameters. Is also pressure sensitive." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_DebugStamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "DebugStamp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_DebugStamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_DebugStamp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_DebugStamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_DebugStamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execDebugStamp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugStamp();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function DebugStamp

// Begin Class UOdysseyBrushAssetBase Function GetAcceleration
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics
{
	struct OdysseyBrushAssetBase_eventGetAcceleration_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets Acceleration.\n//Returns a Vector 2D.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets Acceleration.\nReturns a Vector 2D." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetAcceleration", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::OdysseyBrushAssetBase_eventGetAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::OdysseyBrushAssetBase_eventGetAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetAcceleration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetAcceleration();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetAcceleration

// Begin Class UOdysseyBrushAssetBase Function GetAltitude
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics
{
	struct OdysseyBrushAssetBase_eventGetAltitude_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Input" },
		{ "Comment", "//Gets stylus altitude on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\n//Returns Float (angle).\n" },
		{ "DisplayName", "Get Stylus Altitude" },
		{ "KeyWords", "Tablet Tilt" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets stylus altitude on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\nReturns Float (angle)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetAltitude_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetAltitude", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::OdysseyBrushAssetBase_eventGetAltitude_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::OdysseyBrushAssetBase_eventGetAltitude_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetAltitude)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAltitude();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetAltitude

// Begin Class UOdysseyBrushAssetBase Function GetAltitudeNormalized
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics
{
	struct OdysseyBrushAssetBase_eventGetAltitudeNormalized_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Input" },
		{ "Comment", "//Gets stylus altitude on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\n//Returns normalized Float (0.5 = 45\xc2\xb0 | 1 = 90\xc2\xb0).\n" },
		{ "DisplayName", "Get Stylus Altitude Normalized" },
		{ "KeyWords", "Tablet" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets stylus altitude on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\nReturns normalized Float (0.5 = 45\xc2\xb0 | 1 = 90\xc2\xb0)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetAltitudeNormalized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetAltitudeNormalized", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::OdysseyBrushAssetBase_eventGetAltitudeNormalized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::OdysseyBrushAssetBase_eventGetAltitudeNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetAltitudeNormalized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAltitudeNormalized();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetAltitudeNormalized

// Begin Class UOdysseyBrushAssetBase Function GetAzimuth
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics
{
	struct OdysseyBrushAssetBase_eventGetAzimuth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Input" },
		{ "Comment", "//Gets stylus azimtuh on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\n//Returns Float (angle).\n" },
		{ "DisplayName", "Get Stylus Azimuth" },
		{ "KeyWords", "Tablet" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets stylus azimtuh on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\nReturns Float (angle)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetAzimuth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetAzimuth", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::OdysseyBrushAssetBase_eventGetAzimuth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::OdysseyBrushAssetBase_eventGetAzimuth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetAzimuth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAzimuth();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetAzimuth

// Begin Class UOdysseyBrushAssetBase Function GetAzimuthNormalized
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics
{
	struct OdysseyBrushAssetBase_eventGetAzimuthNormalized_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Input" },
		{ "Comment", "//Gets stylus azimuth on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\n//Returns normalized Float (0.5 = 180\xc2\xb0 | 1 = 360\xc2\xb0).\n" },
		{ "DisplayName", "Get Stylus Azimuth Normalized" },
		{ "KeyWords", "Tablet" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets stylus azimuth on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\nReturns normalized Float (0.5 = 180\xc2\xb0 | 1 = 360\xc2\xb0)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetAzimuthNormalized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetAzimuthNormalized", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::OdysseyBrushAssetBase_eventGetAzimuthNormalized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::OdysseyBrushAssetBase_eventGetAzimuthNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetAzimuthNormalized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAzimuthNormalized();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetAzimuthNormalized

// Begin Class UOdysseyBrushAssetBase Function GetCanvasChannelDepth
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics
{
	struct OdysseyBrushAssetBase_eventGetCanvasChannelDepth_Parms
	{
		EOdysseyChannelDepth ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Canvas" },
		{ "Comment", "//Get the Canvas Channel Depth\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Get the Canvas Channel Depth" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetCanvasChannelDepth_Parms, ReturnValue), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetCanvasChannelDepth", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::OdysseyBrushAssetBase_eventGetCanvasChannelDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::OdysseyBrushAssetBase_eventGetCanvasChannelDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetCanvasChannelDepth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOdysseyChannelDepth*)Z_Param__Result=P_THIS->GetCanvasChannelDepth();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetCanvasChannelDepth

// Begin Class UOdysseyBrushAssetBase Function GetCanvasColorModel
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics
{
	struct OdysseyBrushAssetBase_eventGetCanvasColorModel_Parms
	{
		EOdysseyColorModel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Canvas" },
		{ "Comment", "//Get the Canvas Color Model\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Get the Canvas Color Model" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetCanvasColorModel_Parms, ReturnValue), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetCanvasColorModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::OdysseyBrushAssetBase_eventGetCanvasColorModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::OdysseyBrushAssetBase_eventGetCanvasColorModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetCanvasColorModel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOdysseyColorModel*)Z_Param__Result=P_THIS->GetCanvasColorModel();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetCanvasColorModel

// Begin Class UOdysseyBrushAssetBase Function GetCanvasHeight
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics
{
	struct OdysseyBrushAssetBase_eventGetCanvasHeight_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Canvas" },
		{ "Comment", "//Gets height of the Texture asset currently modified.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets height of the Texture asset currently modified." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetCanvasHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetCanvasHeight", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::OdysseyBrushAssetBase_eventGetCanvasHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::OdysseyBrushAssetBase_eventGetCanvasHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetCanvasHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCanvasHeight();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetCanvasHeight

// Begin Class UOdysseyBrushAssetBase Function GetCanvasRect
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics
{
	struct OdysseyBrushAssetBase_eventGetCanvasRect_Parms
	{
		FOdysseyBrushRect ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Canvas" },
		{ "Comment", "//Get the Canvas Rectangle\n" },
		{ "DisplayName", "Get Canvas Rectangle" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Get the Canvas Rectangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetCanvasRect_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetCanvasRect", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::OdysseyBrushAssetBase_eventGetCanvasRect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::OdysseyBrushAssetBase_eventGetCanvasRect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetCanvasRect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushRect*)Z_Param__Result=P_THIS->GetCanvasRect();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetCanvasRect

// Begin Class UOdysseyBrushAssetBase Function GetCanvasWidth
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics
{
	struct OdysseyBrushAssetBase_eventGetCanvasWidth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Canvas" },
		{ "Comment", "//Gets width of the Texture asset currently modified.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets width of the Texture asset currently modified." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetCanvasWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetCanvasWidth", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::OdysseyBrushAssetBase_eventGetCanvasWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::OdysseyBrushAssetBase_eventGetCanvasWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetCanvasWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCanvasWidth();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetCanvasWidth

// Begin Class UOdysseyBrushAssetBase Function GetColor
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics
{
	struct OdysseyBrushAssetBase_eventGetColor_Parms
	{
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Modifiers" },
		{ "Comment", "//Gets the editor's currently selected color (in the color wheel for example).\n" },
		{ "DisplayName", "Get Color Modifier" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets the editor's currently selected color (in the color wheel for example)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetColor", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::OdysseyBrushAssetBase_eventGetColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::OdysseyBrushAssetBase_eventGetColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=P_THIS->GetColor();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetColor

// Begin Class UOdysseyBrushAssetBase Function GetCurrentStrokePointIndex
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics
{
	struct OdysseyBrushAssetBase_eventGetCurrentStrokePointIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets index of each stamp applied in the stroke.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets index of each stamp applied in the stroke." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetCurrentStrokePointIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetCurrentStrokePointIndex", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::OdysseyBrushAssetBase_eventGetCurrentStrokePointIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::OdysseyBrushAssetBase_eventGetCurrentStrokePointIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetCurrentStrokePointIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentStrokePointIndex();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetCurrentStrokePointIndex

// Begin Class UOdysseyBrushAssetBase Function GetDeltaPosition
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics
{
	struct OdysseyBrushAssetBase_eventGetDeltaPosition_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets Delta Position between this event and the last.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets Delta Position between this event and the last." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetDeltaPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetDeltaPosition", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::OdysseyBrushAssetBase_eventGetDeltaPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::OdysseyBrushAssetBase_eventGetDeltaPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetDeltaPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetDeltaPosition();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetDeltaPosition

// Begin Class UOdysseyBrushAssetBase Function GetDeltaTime
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics
{
	struct OdysseyBrushAssetBase_eventGetDeltaTime_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets Delta Time in micro seconds between this event and the last.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets Delta Time in micro seconds between this event and the last." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetDeltaTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetDeltaTime", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::OdysseyBrushAssetBase_eventGetDeltaTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::OdysseyBrushAssetBase_eventGetDeltaTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetDeltaTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDeltaTime();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetDeltaTime

// Begin Class UOdysseyBrushAssetBase Function GetDirectionAngleNormalDeg
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics
{
	struct OdysseyBrushAssetBase_eventGetDirectionAngleNormalDeg_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets Direction Angle Normal as Degrees\n//Returns an angle as a float.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets Direction Angle Normal as Degrees\nReturns an angle as a float." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetDirectionAngleNormalDeg_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetDirectionAngleNormalDeg", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::OdysseyBrushAssetBase_eventGetDirectionAngleNormalDeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::OdysseyBrushAssetBase_eventGetDirectionAngleNormalDeg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetDirectionAngleNormalDeg)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDirectionAngleNormalDeg();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetDirectionAngleNormalDeg

// Begin Class UOdysseyBrushAssetBase Function GetDirectionAngleTangentDeg
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics
{
	struct OdysseyBrushAssetBase_eventGetDirectionAngleTangentDeg_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets Direction Angle Tangent as Degrees.\n//Returns an angle as a Float.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets Direction Angle Tangent as Degrees.\nReturns an angle as a Float." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetDirectionAngleTangentDeg_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetDirectionAngleTangentDeg", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::OdysseyBrushAssetBase_eventGetDirectionAngleTangentDeg_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::OdysseyBrushAssetBase_eventGetDirectionAngleTangentDeg_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetDirectionAngleTangentDeg)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDirectionAngleTangentDeg();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetDirectionAngleTangentDeg

// Begin Class UOdysseyBrushAssetBase Function GetDirectionVectorNormal
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics
{
	struct OdysseyBrushAssetBase_eventGetDirectionVectorNormal_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets Direction Vector Normal.\n//Returns a Vector 2D.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets Direction Vector Normal.\nReturns a Vector 2D." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetDirectionVectorNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetDirectionVectorNormal", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::OdysseyBrushAssetBase_eventGetDirectionVectorNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::OdysseyBrushAssetBase_eventGetDirectionVectorNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetDirectionVectorNormal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetDirectionVectorNormal();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetDirectionVectorNormal

// Begin Class UOdysseyBrushAssetBase Function GetDirectionVectorTangent
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics
{
	struct OdysseyBrushAssetBase_eventGetDirectionVectorTangent_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets Direction Vector Tangent.\n//Returns a Vector 2D.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets Direction Vector Tangent.\nReturns a Vector 2D." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetDirectionVectorTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetDirectionVectorTangent", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::OdysseyBrushAssetBase_eventGetDirectionVectorTangent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::OdysseyBrushAssetBase_eventGetDirectionVectorTangent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetDirectionVectorTangent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetDirectionVectorTangent();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetDirectionVectorTangent

// Begin Class UOdysseyBrushAssetBase Function GetDistanceAlongStroke
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics
{
	struct OdysseyBrushAssetBase_eventGetDistanceAlongStroke_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets distance travelled along the stroke.\n//Returns a Float in pixels.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets distance travelled along the stroke.\nReturns a Float in pixels." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetDistanceAlongStroke_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetDistanceAlongStroke", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::OdysseyBrushAssetBase_eventGetDistanceAlongStroke_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::OdysseyBrushAssetBase_eventGetDistanceAlongStroke_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetDistanceAlongStroke)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDistanceAlongStroke();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetDistanceAlongStroke

// Begin Class UOdysseyBrushAssetBase Function GetFlowModifier
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics
{
	struct OdysseyBrushAssetBase_eventGetFlowModifier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Modifiers" },
		{ "Comment", "//Gets flow from Top Bar.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets flow from Top Bar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetFlowModifier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetFlowModifier", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::OdysseyBrushAssetBase_eventGetFlowModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::OdysseyBrushAssetBase_eventGetFlowModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetFlowModifier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFlowModifier();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetFlowModifier

// Begin Class UOdysseyBrushAssetBase Function GetJolt
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics
{
	struct OdysseyBrushAssetBase_eventGetJolt_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets Jolt .\n//Returns a Vector 2D.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets Jolt .\nReturns a Vector 2D." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetJolt_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetJolt", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::OdysseyBrushAssetBase_eventGetJolt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::OdysseyBrushAssetBase_eventGetJolt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetJolt)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetJolt();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetJolt

// Begin Class UOdysseyBrushAssetBase Function GetKeysDown
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics
{
	struct OdysseyBrushAssetBase_eventGetKeysDown_Parms
	{
		TArray<FKey> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Input" },
		{ "Comment", "//Returns the keyboard and mouse keys down at this point.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Returns the keyboard and mouse keys down at this point." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetKeysDown_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetKeysDown", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::OdysseyBrushAssetBase_eventGetKeysDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::OdysseyBrushAssetBase_eventGetKeysDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetKeysDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FKey>*)Z_Param__Result=P_THIS->GetKeysDown();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetKeysDown

// Begin Class UOdysseyBrushAssetBase Function GetPressure
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics
{
	struct OdysseyBrushAssetBase_eventGetPressure_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Input" },
		{ "Comment", "//Gets stylus pressure on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\n//Returns normalized Float (0 = no pressure | 1 = max pressure).\n" },
		{ "DisplayName", "Get Stylus Pressure" },
		{ "KeyWords", "Tablet" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets stylus pressure on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\nReturns normalized Float (0 = no pressure | 1 = max pressure)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetPressure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetPressure", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::OdysseyBrushAssetBase_eventGetPressure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::OdysseyBrushAssetBase_eventGetPressure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetPressure)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPressure();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetPressure

// Begin Class UOdysseyBrushAssetBase Function GetSizeModifier
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics
{
	struct OdysseyBrushAssetBase_eventGetSizeModifier_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Modifiers" },
		{ "Comment", "//Gets size from Top Bar.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets size from Top Bar." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetSizeModifier_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetSizeModifier", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::OdysseyBrushAssetBase_eventGetSizeModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::OdysseyBrushAssetBase_eventGetSizeModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetSizeModifier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSizeModifier();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetSizeModifier

// Begin Class UOdysseyBrushAssetBase Function GetSpeed
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics
{
	struct OdysseyBrushAssetBase_eventGetSpeed_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets Speed.\n//Returns a Vector 2D.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets Speed.\nReturns a Vector 2D." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetSpeed_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetSpeed", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::OdysseyBrushAssetBase_eventGetSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::OdysseyBrushAssetBase_eventGetSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetSpeed();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetSpeed

// Begin Class UOdysseyBrushAssetBase Function GetStrokeBlock
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics
{
	struct OdysseyBrushAssetBase_eventGetStrokeBlock_Parms
	{
		FOdysseyBrushRect Area;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stroke" },
		{ "Comment", "//Gets Stroke Block.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets Stroke Block." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Area;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetStrokeBlock_Parms, Area), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetStrokeBlock_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::NewProp_Area,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetStrokeBlock", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::OdysseyBrushAssetBase_eventGetStrokeBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::OdysseyBrushAssetBase_eventGetStrokeBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetStrokeBlock)
{
	P_GET_STRUCT(FOdysseyBrushRect,Z_Param_Area);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=P_THIS->GetStrokeBlock(Z_Param_Area);
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetStrokeBlock

// Begin Class UOdysseyBrushAssetBase Function GetTwist
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics
{
	struct OdysseyBrushAssetBase_eventGetTwist_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Input" },
		{ "Comment", "//Gets stylus twist on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\n//Only works with specific stylus !\n//Returns Float (angle).\n" },
		{ "DisplayName", "Get Stylus Twist" },
		{ "KeyWords", "Tablet" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets stylus twist on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\nOnly works with specific stylus !\nReturns Float (angle)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetTwist_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetTwist", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::OdysseyBrushAssetBase_eventGetTwist_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::OdysseyBrushAssetBase_eventGetTwist_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetTwist)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTwist();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetTwist

// Begin Class UOdysseyBrushAssetBase Function GetTwistNormalized
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics
{
	struct OdysseyBrushAssetBase_eventGetTwistNormalized_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Input" },
		{ "Comment", "//Gets stylus twist on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\n//Only works with specific stylus !\n//Returns normalize Float (0.5 = 180\xc2\xb0 | 1 = 360\xc2\xb0).\n" },
		{ "DisplayName", "Get Stylus Twist Normalized" },
		{ "KeyWords", "Tablet" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets stylus twist on the tablet (make sure Tablet drivers are activated in Preferences > ILIAD Stylus Input).\nOnly works with specific stylus !\nReturns normalize Float (0.5 = 180\xc2\xb0 | 1 = 360\xc2\xb0)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetTwistNormalized_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetTwistNormalized", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::OdysseyBrushAssetBase_eventGetTwistNormalized_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::OdysseyBrushAssetBase_eventGetTwistNormalized_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetTwistNormalized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTwistNormalized();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetTwistNormalized

// Begin Class UOdysseyBrushAssetBase Function GetX
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics
{
	struct OdysseyBrushAssetBase_eventGetX_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Canvas" },
		{ "Comment", "//Gets the X axis of the stylus or mouse on ILIAD canvas.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets the X axis of the stylus or mouse on ILIAD canvas." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetX_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetX", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::OdysseyBrushAssetBase_eventGetX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::OdysseyBrushAssetBase_eventGetX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetX)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetX();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetX

// Begin Class UOdysseyBrushAssetBase Function GetY
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics
{
	struct OdysseyBrushAssetBase_eventGetY_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Canvas" },
		{ "Comment", "//Gets the Y axis of the stylus or mouse on ILIAD canvas.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Gets the Y axis of the stylus or mouse on ILIAD canvas." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventGetY_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "GetY", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::OdysseyBrushAssetBase_eventGetY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::OdysseyBrushAssetBase_eventGetY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execGetY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetY();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function GetY

// Begin Class UOdysseyBrushAssetBase Function OnSelected
static FName NAME_UOdysseyBrushAssetBase_OnSelected = FName(TEXT("OnSelected"));
void UOdysseyBrushAssetBase::OnSelected()
{
	ProcessEvent(FindFunctionChecked(NAME_UOdysseyBrushAssetBase_OnSelected),NULL);
}
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/*********************************///Event is triggered when the brush is loaded.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "*****************************//Event is triggered when the brush is loaded." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "OnSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execOnSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSelected_Implementation();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function OnSelected

// Begin Class UOdysseyBrushAssetBase Function OnStateChanged
static FName NAME_UOdysseyBrushAssetBase_OnStateChanged = FName(TEXT("OnStateChanged"));
void UOdysseyBrushAssetBase::OnStateChanged()
{
	ProcessEvent(FindFunctionChecked(NAME_UOdysseyBrushAssetBase_OnStateChanged),NULL);
}
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Event is triggered when anything is changed in ILIAD interface (variables or modifiers).\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Event is triggered when anything is changed in ILIAD interface (variables or modifiers)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "OnStateChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStateChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execOnStateChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStateChanged_Implementation();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function OnStateChanged

// Begin Class UOdysseyBrushAssetBase Function OnStep
static FName NAME_UOdysseyBrushAssetBase_OnStep = FName(TEXT("OnStep"));
void UOdysseyBrushAssetBase::OnStep()
{
	ProcessEvent(FindFunctionChecked(NAME_UOdysseyBrushAssetBase_OnStep),NULL);
}
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStep_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Event is triggered at each step of the stroke.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Event is triggered at each step of the stroke." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "OnStep", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStep_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execOnStep)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStep_Implementation();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function OnStep

// Begin Class UOdysseyBrushAssetBase Function OnStrokeBegin
static FName NAME_UOdysseyBrushAssetBase_OnStrokeBegin = FName(TEXT("OnStrokeBegin"));
void UOdysseyBrushAssetBase::OnStrokeBegin()
{
	ProcessEvent(FindFunctionChecked(NAME_UOdysseyBrushAssetBase_OnStrokeBegin),NULL);
}
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Event is triggered when stroke begins on the canvas (after clicking or touching the tablet with the stylus tip).\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Event is triggered when stroke begins on the canvas (after clicking or touching the tablet with the stylus tip)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "OnStrokeBegin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeBegin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execOnStrokeBegin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStrokeBegin_Implementation();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function OnStrokeBegin

// Begin Class UOdysseyBrushAssetBase Function OnStrokeEnd
static FName NAME_UOdysseyBrushAssetBase_OnStrokeEnd = FName(TEXT("OnStrokeEnd"));
void UOdysseyBrushAssetBase::OnStrokeEnd()
{
	ProcessEvent(FindFunctionChecked(NAME_UOdysseyBrushAssetBase_OnStrokeEnd),NULL);
}
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Event is triggered when the stroke ends (when the click or stylus is dropped)\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Event is triggered when the stroke ends (when the click or stylus is dropped)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "OnStrokeEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execOnStrokeEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStrokeEnd_Implementation();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function OnStrokeEnd

// Begin Class UOdysseyBrushAssetBase Function OnSubStrokeBegin
static FName NAME_UOdysseyBrushAssetBase_OnSubStrokeBegin = FName(TEXT("OnSubStrokeBegin"));
void UOdysseyBrushAssetBase::OnSubStrokeBegin()
{
	ProcessEvent(FindFunctionChecked(NAME_UOdysseyBrushAssetBase_OnSubStrokeBegin),NULL);
}
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Event is triggered when a subdivision of the stroke stroke begins on the canvas.\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Event is triggered when a subdivision of the stroke stroke begins on the canvas." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "OnSubStrokeBegin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeBegin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execOnSubStrokeBegin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSubStrokeBegin_Implementation();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function OnSubStrokeBegin

// Begin Class UOdysseyBrushAssetBase Function OnSubStrokeEnd
static FName NAME_UOdysseyBrushAssetBase_OnSubStrokeEnd = FName(TEXT("OnSubStrokeEnd"));
void UOdysseyBrushAssetBase::OnSubStrokeEnd()
{
	ProcessEvent(FindFunctionChecked(NAME_UOdysseyBrushAssetBase_OnSubStrokeEnd),NULL);
}
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Event is triggered when a subdivision of the stroke ends (when the click or stylus is dropped)\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Event is triggered when a subdivision of the stroke ends (when the click or stylus is dropped)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "OnSubStrokeEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execOnSubStrokeEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSubStrokeEnd_Implementation();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function OnSubStrokeEnd

// Begin Class UOdysseyBrushAssetBase Function OnTick
static FName NAME_UOdysseyBrushAssetBase_OnTick = FName(TEXT("OnTick"));
void UOdysseyBrushAssetBase::OnTick()
{
	ProcessEvent(FindFunctionChecked(NAME_UOdysseyBrushAssetBase_OnTick),NULL);
}
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_OnTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//OnInit\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "OnInit" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "OnTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_OnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_OnTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_OnTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_OnTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execOnTick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTick_Implementation();
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function OnTick

// Begin Class UOdysseyBrushAssetBase Function Stamp
struct Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics
{
	struct OdysseyBrushAssetBase_eventStamp_Parms
	{
		FOdysseyBlockProxy Sample;
		FOdysseyPivot Pivot;
		float X;
		float Y;
		float Flow;
		bool AntiAliasing;
		EOdysseyBlendingMode BlendingMode;
		EOdysseyAlphaMode AlphaMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Stamps" },
		{ "Comment", "//Node that reunites all the necessary information to create a stamp.\n//Must be connected to an Event (i.e. \"Event on Step\").\n//Requires 3 mandatory input to work : Odyssey Block Reference and X|Y coordinates.\n" },
		{ "CPP_Default_AlphaMode", "kNormal" },
		{ "CPP_Default_AntiAliasing", "false" },
		{ "CPP_Default_BlendingMode", "kNormal" },
		{ "CPP_Default_Flow", "1.000000" },
		{ "DefaultToSelf", "Target" },
		{ "HidePin", "Target" },
		{ "HideSelfPin", "" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "Node that reunites all the necessary information to create a stamp.\nMust be connected to an Event (i.e. \"Event on Step\").\nRequires 3 mandatory input to work : Odyssey Block Reference and X|Y coordinates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[] = {
		{ "DisplayName", "Handle Position" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Flow;
	static void NewProp_AntiAliasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AntiAliasing;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventStamp_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventStamp_Parms, Pivot), Z_Construct_UScriptStruct_FOdysseyPivot, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pivot_MetaData), NewProp_Pivot_MetaData) }; // 2453957441
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventStamp_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventStamp_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_Flow = { "Flow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventStamp_Parms, Flow), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_AntiAliasing_SetBit(void* Obj)
{
	((OdysseyBrushAssetBase_eventStamp_Parms*)Obj)->AntiAliasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_AntiAliasing = { "AntiAliasing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBrushAssetBase_eventStamp_Parms), &Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_AntiAliasing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_BlendingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_BlendingMode = { "BlendingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventStamp_Parms, BlendingMode), Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode, METADATA_PARAMS(0, nullptr) }; // 1337073500
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_AlphaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_AlphaMode = { "AlphaMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushAssetBase_eventStamp_Parms, AlphaMode), Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode, METADATA_PARAMS(0, nullptr) }; // 1351865346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_Pivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_Flow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_AntiAliasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_BlendingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_BlendingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_AlphaMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::NewProp_AlphaMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushAssetBase, nullptr, "Stamp", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::OdysseyBrushAssetBase_eventStamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::OdysseyBrushAssetBase_eventStamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushAssetBase::execStamp)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_STRUCT(FOdysseyPivot,Z_Param_Pivot);
	P_GET_PROPERTY(FFloatProperty,Z_Param_X);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Flow);
	P_GET_UBOOL(Z_Param_AntiAliasing);
	P_GET_ENUM(EOdysseyBlendingMode,Z_Param_BlendingMode);
	P_GET_ENUM(EOdysseyAlphaMode,Z_Param_AlphaMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stamp(Z_Param_Sample,Z_Param_Pivot,Z_Param_X,Z_Param_Y,Z_Param_Flow,Z_Param_AntiAliasing,EOdysseyBlendingMode(Z_Param_BlendingMode),EOdysseyAlphaMode(Z_Param_AlphaMode));
	P_NATIVE_END;
}
// End Class UOdysseyBrushAssetBase Function Stamp

// Begin Class UOdysseyBrushAssetBase
void UOdysseyBrushAssetBase::StaticRegisterNativesUOdysseyBrushAssetBase()
{
	UClass* Class = UOdysseyBrushAssetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DebugStamp", &UOdysseyBrushAssetBase::execDebugStamp },
		{ "GetAcceleration", &UOdysseyBrushAssetBase::execGetAcceleration },
		{ "GetAltitude", &UOdysseyBrushAssetBase::execGetAltitude },
		{ "GetAltitudeNormalized", &UOdysseyBrushAssetBase::execGetAltitudeNormalized },
		{ "GetAzimuth", &UOdysseyBrushAssetBase::execGetAzimuth },
		{ "GetAzimuthNormalized", &UOdysseyBrushAssetBase::execGetAzimuthNormalized },
		{ "GetCanvasChannelDepth", &UOdysseyBrushAssetBase::execGetCanvasChannelDepth },
		{ "GetCanvasColorModel", &UOdysseyBrushAssetBase::execGetCanvasColorModel },
		{ "GetCanvasHeight", &UOdysseyBrushAssetBase::execGetCanvasHeight },
		{ "GetCanvasRect", &UOdysseyBrushAssetBase::execGetCanvasRect },
		{ "GetCanvasWidth", &UOdysseyBrushAssetBase::execGetCanvasWidth },
		{ "GetColor", &UOdysseyBrushAssetBase::execGetColor },
		{ "GetCurrentStrokePointIndex", &UOdysseyBrushAssetBase::execGetCurrentStrokePointIndex },
		{ "GetDeltaPosition", &UOdysseyBrushAssetBase::execGetDeltaPosition },
		{ "GetDeltaTime", &UOdysseyBrushAssetBase::execGetDeltaTime },
		{ "GetDirectionAngleNormalDeg", &UOdysseyBrushAssetBase::execGetDirectionAngleNormalDeg },
		{ "GetDirectionAngleTangentDeg", &UOdysseyBrushAssetBase::execGetDirectionAngleTangentDeg },
		{ "GetDirectionVectorNormal", &UOdysseyBrushAssetBase::execGetDirectionVectorNormal },
		{ "GetDirectionVectorTangent", &UOdysseyBrushAssetBase::execGetDirectionVectorTangent },
		{ "GetDistanceAlongStroke", &UOdysseyBrushAssetBase::execGetDistanceAlongStroke },
		{ "GetFlowModifier", &UOdysseyBrushAssetBase::execGetFlowModifier },
		{ "GetJolt", &UOdysseyBrushAssetBase::execGetJolt },
		{ "GetKeysDown", &UOdysseyBrushAssetBase::execGetKeysDown },
		{ "GetPressure", &UOdysseyBrushAssetBase::execGetPressure },
		{ "GetSizeModifier", &UOdysseyBrushAssetBase::execGetSizeModifier },
		{ "GetSpeed", &UOdysseyBrushAssetBase::execGetSpeed },
		{ "GetStrokeBlock", &UOdysseyBrushAssetBase::execGetStrokeBlock },
		{ "GetTwist", &UOdysseyBrushAssetBase::execGetTwist },
		{ "GetTwistNormalized", &UOdysseyBrushAssetBase::execGetTwistNormalized },
		{ "GetX", &UOdysseyBrushAssetBase::execGetX },
		{ "GetY", &UOdysseyBrushAssetBase::execGetY },
		{ "OnSelected", &UOdysseyBrushAssetBase::execOnSelected },
		{ "OnStateChanged", &UOdysseyBrushAssetBase::execOnStateChanged },
		{ "OnStep", &UOdysseyBrushAssetBase::execOnStep },
		{ "OnStrokeBegin", &UOdysseyBrushAssetBase::execOnStrokeBegin },
		{ "OnStrokeEnd", &UOdysseyBrushAssetBase::execOnStrokeEnd },
		{ "OnSubStrokeBegin", &UOdysseyBrushAssetBase::execOnSubStrokeBegin },
		{ "OnSubStrokeEnd", &UOdysseyBrushAssetBase::execOnSubStrokeEnd },
		{ "OnTick", &UOdysseyBrushAssetBase::execOnTick },
		{ "Stamp", &UOdysseyBrushAssetBase::execStamp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrushAssetBase);
UClass* Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister()
{
	return UOdysseyBrushAssetBase::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrushAssetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * BrushAssetBase\n * Base class for OdysseyBrush Blueprint.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "OdysseyBrushAssetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "BrushAssetBase\nBase class for OdysseyBrush Blueprint." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushOptions_MetaData[] = {
		{ "Category", "Common" },
		{ "Comment", "//PROPERTIES\n" },
		{ "DisplayPriority", "1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ShowInnerProperties", "" },
		{ "ToolTip", "PROPERTIES" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorOverrides_ValueProp_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ShowDisplayNames", "" },
		{ "ShowInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorOverrides_MetaData[] = {
		{ "Category", "Overrides" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ShowDisplayNames", "" },
		{ "ShowInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[] = {
		{ "Comment", "//needed to be able to still load old brushes\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushAssetBase.h" },
		{ "ToolTip", "needed to be able to still load old brushes" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushOptions;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorOverrides_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EditorOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EditorOverrides;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Overrides_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Overrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Overrides;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_DebugStamp, "DebugStamp" }, // 3120905537
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAcceleration, "GetAcceleration" }, // 3667621756
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitude, "GetAltitude" }, // 1231470707
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAltitudeNormalized, "GetAltitudeNormalized" }, // 1083655914
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuth, "GetAzimuth" }, // 2963756647
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetAzimuthNormalized, "GetAzimuthNormalized" }, // 3716791663
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasChannelDepth, "GetCanvasChannelDepth" }, // 1306864630
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasColorModel, "GetCanvasColorModel" }, // 2615448162
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasHeight, "GetCanvasHeight" }, // 2062455074
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasRect, "GetCanvasRect" }, // 1501057012
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCanvasWidth, "GetCanvasWidth" }, // 3964471878
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetColor, "GetColor" }, // 2181855922
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetCurrentStrokePointIndex, "GetCurrentStrokePointIndex" }, // 3352129838
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaPosition, "GetDeltaPosition" }, // 1492449666
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDeltaTime, "GetDeltaTime" }, // 3973860160
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleNormalDeg, "GetDirectionAngleNormalDeg" }, // 1669495351
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionAngleTangentDeg, "GetDirectionAngleTangentDeg" }, // 3049740404
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorNormal, "GetDirectionVectorNormal" }, // 3753903390
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDirectionVectorTangent, "GetDirectionVectorTangent" }, // 2127171469
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetDistanceAlongStroke, "GetDistanceAlongStroke" }, // 2410145793
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetFlowModifier, "GetFlowModifier" }, // 139731297
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetJolt, "GetJolt" }, // 2716249573
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetKeysDown, "GetKeysDown" }, // 3604755475
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetPressure, "GetPressure" }, // 677800402
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSizeModifier, "GetSizeModifier" }, // 689250959
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetSpeed, "GetSpeed" }, // 430906215
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetStrokeBlock, "GetStrokeBlock" }, // 3362954294
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwist, "GetTwist" }, // 374818846
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetTwistNormalized, "GetTwistNormalized" }, // 4117049569
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetX, "GetX" }, // 4258126072
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_GetY, "GetY" }, // 1625300091
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSelected, "OnSelected" }, // 687861592
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStateChanged, "OnStateChanged" }, // 2475198770
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStep, "OnStep" }, // 2812458541
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeBegin, "OnStrokeBegin" }, // 851651362
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_OnStrokeEnd, "OnStrokeEnd" }, // 429445824
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeBegin, "OnSubStrokeBegin" }, // 841107096
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_OnSubStrokeEnd, "OnSubStrokeEnd" }, // 3795726613
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_OnTick, "OnTick" }, // 4222861828
		{ &Z_Construct_UFunction_UOdysseyBrushAssetBase_Stamp, "Stamp" }, // 3144781988
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrushAssetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_BrushOptions = { "BrushOptions", nullptr, (EPropertyFlags)0x00120004000a2809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBrushAssetBase, BrushOptions), Z_Construct_UClass_UOdysseyBrushOptions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushOptions_MetaData), NewProp_BrushOptions_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_EditorOverrides_ValueProp = { "EditorOverrides", nullptr, (EPropertyFlags)0x01060008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorOverrides_ValueProp_MetaData), NewProp_EditorOverrides_ValueProp_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_EditorOverrides_Key_KeyProp = { "EditorOverrides_Key", nullptr, (EPropertyFlags)0x01060008000a0009, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_EditorOverrides = { "EditorOverrides", nullptr, (EPropertyFlags)0x0114008800030009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBrushAssetBase, EditorOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorOverrides_MetaData), NewProp_EditorOverrides_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_Overrides_ValueProp = { "Overrides", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_Overrides_Key_KeyProp = { "Overrides_Key", nullptr, (EPropertyFlags)0x0100000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBrushAssetBase, Overrides_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Overrides_MetaData), NewProp_Overrides_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_BrushOptions,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_EditorOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_EditorOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_EditorOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_Overrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_Overrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::NewProp_Overrides,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::ClassParams = {
	&UOdysseyBrushAssetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrushAssetBase()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrushAssetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrushAssetBase.OuterSingleton, Z_Construct_UClass_UOdysseyBrushAssetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrushAssetBase.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UClass* StaticClass<UOdysseyBrushAssetBase>()
{
	return UOdysseyBrushAssetBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrushAssetBase);
// End Class UOdysseyBrushAssetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrushAssetBase, UOdysseyBrushAssetBase::StaticClass, TEXT("UOdysseyBrushAssetBase"), &Z_Registration_Info_UClass_UOdysseyBrushAssetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrushAssetBase), 2998579479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_1711384676(TEXT("/Script/OdysseyBrush"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
