// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushColor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary_NoRegister();
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth();
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBrushColor();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin ScriptStruct FOdysseyBrushColor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OdysseyBrushColor;
class UScriptStruct* FOdysseyBrushColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyBrushColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OdysseyBrushColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOdysseyBrushColor, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("OdysseyBrushColor"));
	}
	return Z_Registration_Info_UScriptStruct_OdysseyBrushColor.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<FOdysseyBrushColor>()
{
	return FOdysseyBrushColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOdysseyBrushColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////\n// Odyssey Brush Color\n" },
		{ "DisplayName", "Odyssey Color" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Odyssey Brush Color" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOdysseyBrushColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOdysseyBrushColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	&NewStructOps,
	"OdysseyBrushColor",
	nullptr,
	0,
	sizeof(FOdysseyBrushColor),
	alignof(FOdysseyBrushColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyBrushColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOdysseyBrushColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBrushColor()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyBrushColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OdysseyBrushColor.InnerSingleton, Z_Construct_UScriptStruct_FOdysseyBrushColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OdysseyBrushColor.InnerSingleton;
}
// End ScriptStruct FOdysseyBrushColor

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoCMYK
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYK_Parms
	{
		FOdysseyBrushColor Color;
		int32 C;
		int32 M;
		int32 Y;
		int32 K;
		int32 A;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Breaks Odyssey Brush Color input into CMYKA (Integers).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Breaks Odyssey Brush Color input into CMYKA (Integers)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_C;
	static const UECodeGen_Private::FIntPropertyParams NewProp_M;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_K;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYK_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYK_Parms, C), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_M = { "M", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYK_Parms, M), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYK_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_K = { "K", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYK_Parms, K), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYK_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_M,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_K,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoCMYK", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoCMYK)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_C);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_M);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Y);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_K);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoCMYK(Z_Param_Out_Color,Z_Param_Out_C,Z_Param_Out_M,Z_Param_Out_Y,Z_Param_Out_K,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoCMYK

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoCMYKF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYKF_Parms
	{
		FOdysseyBrushColor Color;
		float C;
		float M;
		float Y;
		float K;
		float A;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Breaks Odyssey Brush Color input into CMYKA (Floats).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Breaks Odyssey Brush Color input into CMYKA (Floats)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_C;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_M;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYKF_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYKF_Parms, C), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_M = { "M", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYKF_Parms, M), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYKF_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_K = { "K", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYKF_Parms, K), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYKF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_M,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_K,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoCMYKF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYKF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoCMYKF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoCMYKF)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_C);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_M);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Y);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_K);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoCMYKF(Z_Param_Out_Color,Z_Param_Out_C,Z_Param_Out_M,Z_Param_Out_Y,Z_Param_Out_K,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoCMYKF

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoGrey
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGrey_Parms
	{
		FOdysseyBrushColor Color;
		int32 Grey;
		int32 A;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Breaks Odyssey Brush Color input into GreyA (Integers).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Breaks Odyssey Brush Color input into GreyA (Integers)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Grey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGrey_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::NewProp_Grey = { "Grey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGrey_Parms, Grey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGrey_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::NewProp_Grey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoGrey", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGrey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGrey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoGrey)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Grey);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoGrey(Z_Param_Out_Color,Z_Param_Out_Grey,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoGrey

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoGreyF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGreyF_Parms
	{
		FOdysseyBrushColor Color;
		float Grey;
		float A;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Breaks Odyssey Brush Color input into GreyA (Floats).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Breaks Odyssey Brush Color input into GreyA (Floats)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Grey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGreyF_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::NewProp_Grey = { "Grey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGreyF_Parms, Grey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGreyF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::NewProp_Grey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoGreyF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGreyF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoGreyF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoGreyF)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Grey);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoGreyF(Z_Param_Out_Color,Z_Param_Out_Grey,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoGreyF

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoHSL
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSL_Parms
	{
		FOdysseyBrushColor Color;
		int32 H;
		int32 S;
		int32 L;
		int32 A;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Breaks Odyssey Brush Color input into HSLA (Integers).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Breaks Odyssey Brush Color input into HSLA (Integers)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_H;
	static const UECodeGen_Private::FIntPropertyParams NewProp_S;
	static const UECodeGen_Private::FIntPropertyParams NewProp_L;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSL_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSL_Parms, H), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSL_Parms, S), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSL_Parms, L), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSL_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::NewProp_H,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::NewProp_S,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::NewProp_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoHSL", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoHSL)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_H);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_S);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_L);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoHSL(Z_Param_Out_Color,Z_Param_Out_H,Z_Param_Out_S,Z_Param_Out_L,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoHSL

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoHSLF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSLF_Parms
	{
		FOdysseyBrushColor Color;
		float H;
		float S;
		float L;
		float A;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Breaks Odyssey Brush Color input into HSLA (Floats).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Breaks Odyssey Brush Color input into HSLA (Floats)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_H;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_S;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_L;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSLF_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSLF_Parms, H), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSLF_Parms, S), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSLF_Parms, L), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSLF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::NewProp_H,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::NewProp_S,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::NewProp_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoHSLF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSLF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSLF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoHSLF)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_H);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_S);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_L);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoHSLF(Z_Param_Out_Color,Z_Param_Out_H,Z_Param_Out_S,Z_Param_Out_L,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoHSLF

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoHSV
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSV_Parms
	{
		FOdysseyBrushColor Color;
		int32 H;
		int32 S;
		int32 V;
		int32 A;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Breaks Odyssey Brush Color input into HSVA (Integers).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Breaks Odyssey Brush Color input into HSVA (Integers)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_H;
	static const UECodeGen_Private::FIntPropertyParams NewProp_S;
	static const UECodeGen_Private::FIntPropertyParams NewProp_V;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSV_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSV_Parms, H), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSV_Parms, S), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSV_Parms, V), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSV_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::NewProp_H,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::NewProp_S,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoHSV", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoHSV)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_H);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_S);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_V);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoHSV(Z_Param_Out_Color,Z_Param_Out_H,Z_Param_Out_S,Z_Param_Out_V,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoHSV

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoHSVF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSVF_Parms
	{
		FOdysseyBrushColor Color;
		float H;
		float S;
		float V;
		float A;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Breaks Odyssey Brush Color input into HSVA (Floats).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Breaks Odyssey Brush Color input into HSVA (Floats)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_H;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_S;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSVF_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSVF_Parms, H), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSVF_Parms, S), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSVF_Parms, V), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSVF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::NewProp_H,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::NewProp_S,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoHSVF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSVF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoHSVF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoHSVF)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_H);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_S);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_V);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoHSVF(Z_Param_Out_Color,Z_Param_Out_H,Z_Param_Out_S,Z_Param_Out_V,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoHSVF

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoLabA
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabA_Parms
	{
		FOdysseyBrushColor Color;
		int32 L;
		int32 A;
		int32 B;
		int32 Alpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Breaks Odyssey Brush Color input into LABA (Integers).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Breaks Odyssey Brush Color input into LABA (Integers)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_L;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabA_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabA_Parms, L), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabA_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabA_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabA_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::NewProp_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoLabA", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoLabA)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_L);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_B);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoLabA(Z_Param_Out_Color,Z_Param_Out_L,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Alpha);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoLabA

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoLabF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabF_Parms
	{
		FOdysseyBrushColor Color;
		float L;
		float A;
		float B;
		float Alpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Breaks Odyssey Brush Color input into LAB Alpha (Floats).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Breaks Odyssey Brush Color input into LAB Alpha (Floats)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_L;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabF_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabF_Parms, L), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabF_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabF_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::NewProp_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoLabF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoLabF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoLabF)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_L);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_A);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_B);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoLabF(Z_Param_Out_Color,Z_Param_Out_L,Z_Param_Out_A,Z_Param_Out_B,Z_Param_Out_Alpha);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoLabF

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoRGB
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGB_Parms
	{
		FOdysseyBrushColor Color;
		int32 R;
		int32 G;
		int32 B;
		int32 A;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "/* Break *///Breaks Odyssey Brush Color input into RGBA (Integers).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Break //Breaks Odyssey Brush Color input into RGBA (Integers)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FIntPropertyParams NewProp_R;
	static const UECodeGen_Private::FIntPropertyParams NewProp_G;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGB_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGB_Parms, R), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGB_Parms, G), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGB_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGB_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoRGB", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoRGB)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_R);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_G);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_B);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoRGB(Z_Param_Out_Color,Z_Param_Out_R,Z_Param_Out_G,Z_Param_Out_B,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoRGB

// Begin Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoRGBF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGBF_Parms
	{
		FOdysseyBrushColor Color;
		float R;
		float G;
		float B;
		float A;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "/* Break F *///Breaks Odyssey Brush Color input into RGBA (Floats).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Break F //Breaks Odyssey Brush Color input into RGBA (Floats)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_G;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGBF_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGBF_Parms, R), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGBF_Parms, G), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGBF_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGBF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::NewProp_A,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "BreakOdysseyBrushColorIntoRGBF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGBF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::OdysseyBrushColorFunctionLibrary_eventBreakOdysseyBrushColorIntoRGBF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoRGBF)
{
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_R);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_G);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_B);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushColorFunctionLibrary::BreakOdysseyBrushColorIntoRGBF(Z_Param_Out_Color,Z_Param_Out_R,Z_Param_Out_G,Z_Param_Out_B,Z_Param_Out_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function BreakOdysseyBrushColorIntoRGBF

// Begin Class UOdysseyBrushColorFunctionLibrary Function ConvertToFormat
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventConvertToFormat_Parms
	{
		FOdysseyBrushColor Color;
		EOdysseyColorModel ColorModel;
		EOdysseyChannelDepth ChannelDepth;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Convert the Odyssey Brush Color to the specified Color Model and Channel Depth\n" },
		{ "CPP_Default_ChannelDepth", "k8" },
		{ "CPP_Default_ColorModel", "kRGBA" },
		{ "DisplayName", "Convert OdysseyBrushColor to Format" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Convert the Odyssey Brush Color to the specified Color Model and Channel Depth" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelDepth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventConvertToFormat_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_ColorModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_ColorModel = { "ColorModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventConvertToFormat_Parms, ColorModel), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_ChannelDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventConvertToFormat_Parms, ChannelDepth), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventConvertToFormat_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_ColorModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_ColorModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_ChannelDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_ChannelDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "ConvertToFormat", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::OdysseyBrushColorFunctionLibrary_eventConvertToFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::OdysseyBrushColorFunctionLibrary_eventConvertToFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execConvertToFormat)
{
	P_GET_STRUCT(FOdysseyBrushColor,Z_Param_Color);
	P_GET_ENUM(EOdysseyColorModel,Z_Param_ColorModel);
	P_GET_ENUM(EOdysseyChannelDepth,Z_Param_ChannelDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::ConvertToFormat(Z_Param_Color,EOdysseyColorModel(Z_Param_ColorModel),EOdysseyChannelDepth(Z_Param_ChannelDepth));
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function ConvertToFormat

// Begin Class UOdysseyBrushColorFunctionLibrary Function GetAlpha
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventGetAlpha_Parms
	{
		FOdysseyBrushColor Color;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Get the Odyssey Brush Color Alpha Component\n" },
		{ "DisplayName", "Get OdysseyBrushColor Alpha" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Get the Odyssey Brush Color Alpha Component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventGetAlpha_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventGetAlpha_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "GetAlpha", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::OdysseyBrushColorFunctionLibrary_eventGetAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::OdysseyBrushColorFunctionLibrary_eventGetAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execGetAlpha)
{
	P_GET_STRUCT(FOdysseyBrushColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::GetAlpha(Z_Param_Color);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function GetAlpha

// Begin Class UOdysseyBrushColorFunctionLibrary Function GetChannelDepth
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventGetChannelDepth_Parms
	{
		FOdysseyBrushColor Color;
		EOdysseyChannelDepth ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Get the Odyssey Brush Color Channel Depth\n" },
		{ "DisplayName", "Get OdysseyBrushColor Channel Depth" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Get the Odyssey Brush Color Channel Depth" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventGetChannelDepth_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventGetChannelDepth_Parms, ReturnValue), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "GetChannelDepth", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::OdysseyBrushColorFunctionLibrary_eventGetChannelDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::OdysseyBrushColorFunctionLibrary_eventGetChannelDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execGetChannelDepth)
{
	P_GET_STRUCT(FOdysseyBrushColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOdysseyChannelDepth*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::GetChannelDepth(Z_Param_Color);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function GetChannelDepth

// Begin Class UOdysseyBrushColorFunctionLibrary Function GetColorModel
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventGetColorModel_Parms
	{
		FOdysseyBrushColor Color;
		EOdysseyColorModel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "/* Format Management *///Get the Odyssey Brush Color Color Model\n" },
		{ "DisplayName", "Get OdysseyBrushColor Color Model" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Format Management //Get the Odyssey Brush Color Color Model" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventGetColorModel_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventGetColorModel_Parms, ReturnValue), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "GetColorModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::OdysseyBrushColorFunctionLibrary_eventGetColorModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::OdysseyBrushColorFunctionLibrary_eventGetColorModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execGetColorModel)
{
	P_GET_STRUCT(FOdysseyBrushColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOdysseyColorModel*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::GetColorModel(Z_Param_Color);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function GetColorModel

// Begin Class UOdysseyBrushColorFunctionLibrary Function Lerp
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventLerp_Parms
	{
		FOdysseyBrushColor Color1;
		FOdysseyBrushColor Color2;
		float Value;
		EOdysseyColorModel ColorModel;
		EOdysseyChannelDepth ChannelDepth;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Interpolates an OdysseyBrushColor between 2 colors\n" },
		{ "CPP_Default_ChannelDepth", "k8" },
		{ "CPP_Default_ColorModel", "kRGBA" },
		{ "DisplayName", "Lerp (OdysseyBrushColor)" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Interpolates an OdysseyBrushColor between 2 colors" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelDepth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_Color1 = { "Color1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventLerp_Parms, Color1), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_Color2 = { "Color2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventLerp_Parms, Color2), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventLerp_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_ColorModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_ColorModel = { "ColorModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventLerp_Parms, ColorModel), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_ChannelDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventLerp_Parms, ChannelDepth), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventLerp_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_Color1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_Color2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_ColorModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_ColorModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_ChannelDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_ChannelDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "Lerp", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::OdysseyBrushColorFunctionLibrary_eventLerp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::OdysseyBrushColorFunctionLibrary_eventLerp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execLerp)
{
	P_GET_STRUCT(FOdysseyBrushColor,Z_Param_Color1);
	P_GET_STRUCT(FOdysseyBrushColor,Z_Param_Color2);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_ENUM(EOdysseyColorModel,Z_Param_ColorModel);
	P_GET_ENUM(EOdysseyChannelDepth,Z_Param_ChannelDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::Lerp(Z_Param_Color1,Z_Param_Color2,Z_Param_Value,EOdysseyColorModel(Z_Param_ColorModel),EOdysseyChannelDepth(Z_Param_ChannelDepth));
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function Lerp

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeDebugColor
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeDebugColor_Parms
	{
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Debug node to generate a pure red color (RGB 255, 0, 0).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Debug node to generate a pure red color (RGB 255, 0, 0)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeDebugColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeDebugColor", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::OdysseyBrushColorFunctionLibrary_eventMakeDebugColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::OdysseyBrushColorFunctionLibrary_eventMakeDebugColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeDebugColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeDebugColor();
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeDebugColor

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromCMYK
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYK_Parms
	{
		int32 C;
		int32 M;
		int32 Y;
		int32 K;
		int32 A;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Make Odyssey Brush color from CMYKA values (Integers).\n" },
		{ "CPP_Default_A", "255" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make Odyssey Brush color from CMYKA values (Integers)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_C;
	static const UECodeGen_Private::FIntPropertyParams NewProp_M;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_K;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYK_Parms, C), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_M = { "M", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYK_Parms, M), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYK_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_K = { "K", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYK_Parms, K), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYK_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYK_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_M,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_K,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromCMYK", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYK_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYK_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromCMYK)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_C);
	P_GET_PROPERTY(FIntProperty,Z_Param_M);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_K);
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromCMYK(Z_Param_C,Z_Param_M,Z_Param_Y,Z_Param_K,Z_Param_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromCMYK

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromCMYKF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYKF_Parms
	{
		float C;
		float M;
		float Y;
		float K;
		float A;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Make Odyssey Brush color from CMYKA values (Floats).\n" },
		{ "CPP_Default_A", "1.000000" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make Odyssey Brush color from CMYKA values (Floats)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_C;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_M;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYKF_Parms, C), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_M = { "M", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYKF_Parms, M), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYKF_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_K = { "K", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYKF_Parms, K), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYKF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYKF_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_C,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_M,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_K,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromCMYKF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYKF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromCMYKF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromCMYKF)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_C);
	P_GET_PROPERTY(FFloatProperty,Z_Param_M);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_K);
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromCMYKF(Z_Param_C,Z_Param_M,Z_Param_Y,Z_Param_K,Z_Param_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromCMYKF

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromGrey
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGrey_Parms
	{
		int32 Grey;
		int32 A;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Make Odyssey Brush color from GreyA values (Integers).\n" },
		{ "CPP_Default_A", "255" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make Odyssey Brush color from GreyA values (Integers)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Grey;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::NewProp_Grey = { "Grey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGrey_Parms, Grey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGrey_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGrey_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::NewProp_Grey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromGrey", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGrey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGrey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromGrey)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Grey);
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromGrey(Z_Param_Grey,Z_Param_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromGrey

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromGreyF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGreyF_Parms
	{
		float Grey;
		float A;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Make Odyssey Brush color from GreyA values (Floats).\n" },
		{ "CPP_Default_A", "1.000000" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make Odyssey Brush color from GreyA values (Floats)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Grey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::NewProp_Grey = { "Grey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGreyF_Parms, Grey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGreyF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGreyF_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::NewProp_Grey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromGreyF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGreyF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromGreyF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromGreyF)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Grey);
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromGreyF(Z_Param_Grey,Z_Param_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromGreyF

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromHSL
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSL_Parms
	{
		int32 H;
		int32 S;
		int32 L;
		int32 A;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Make Odyssey Brush color from HSLA values (Integers).\n" },
		{ "CPP_Default_A", "255" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make Odyssey Brush color from HSLA values (Integers)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_H;
	static const UECodeGen_Private::FIntPropertyParams NewProp_S;
	static const UECodeGen_Private::FIntPropertyParams NewProp_L;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSL_Parms, H), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSL_Parms, S), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSL_Parms, L), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSL_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSL_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::NewProp_H,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::NewProp_S,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::NewProp_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromHSL", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromHSL)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_H);
	P_GET_PROPERTY(FIntProperty,Z_Param_S);
	P_GET_PROPERTY(FIntProperty,Z_Param_L);
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromHSL(Z_Param_H,Z_Param_S,Z_Param_L,Z_Param_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromHSL

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromHSLF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSLF_Parms
	{
		float H;
		float S;
		float L;
		float A;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Make Odyssey Brush color from HSLA values (Floats).\n" },
		{ "CPP_Default_A", "1.000000" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make Odyssey Brush color from HSLA values (Floats)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_H;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_S;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_L;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSLF_Parms, H), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSLF_Parms, S), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSLF_Parms, L), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSLF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSLF_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::NewProp_H,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::NewProp_S,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::NewProp_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromHSLF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSLF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSLF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromHSLF)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_H);
	P_GET_PROPERTY(FFloatProperty,Z_Param_S);
	P_GET_PROPERTY(FFloatProperty,Z_Param_L);
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromHSLF(Z_Param_H,Z_Param_S,Z_Param_L,Z_Param_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromHSLF

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromHSV
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSV_Parms
	{
		int32 H;
		int32 S;
		int32 V;
		int32 A;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Make Odyssey Brush color from HSVA values (Integers).\n" },
		{ "CPP_Default_A", "255" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make Odyssey Brush color from HSVA values (Integers)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_H;
	static const UECodeGen_Private::FIntPropertyParams NewProp_S;
	static const UECodeGen_Private::FIntPropertyParams NewProp_V;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSV_Parms, H), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSV_Parms, S), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSV_Parms, V), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSV_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSV_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::NewProp_H,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::NewProp_S,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromHSV", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromHSV)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_H);
	P_GET_PROPERTY(FIntProperty,Z_Param_S);
	P_GET_PROPERTY(FIntProperty,Z_Param_V);
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromHSV(Z_Param_H,Z_Param_S,Z_Param_V,Z_Param_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromHSV

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromHSVF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSVF_Parms
	{
		float H;
		float S;
		float V;
		float A;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Make Odyssey Brush color from HSVA values (Floats).\n" },
		{ "CPP_Default_A", "1.000000" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make Odyssey Brush color from HSVA values (Floats)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_H;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_S;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSVF_Parms, H), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSVF_Parms, S), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSVF_Parms, V), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSVF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSVF_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::NewProp_H,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::NewProp_S,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::NewProp_V,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromHSVF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSVF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromHSVF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromHSVF)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_H);
	P_GET_PROPERTY(FFloatProperty,Z_Param_S);
	P_GET_PROPERTY(FFloatProperty,Z_Param_V);
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromHSVF(Z_Param_H,Z_Param_S,Z_Param_V,Z_Param_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromHSVF

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromLab
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLab_Parms
	{
		int32 L;
		int32 A;
		int32 B;
		int32 Alpha;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Make Odyssey Brush color from LabA values (Integers).\n" },
		{ "CPP_Default_Alpha", "255" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make Odyssey Brush color from LabA values (Integers)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_L;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLab_Parms, L), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLab_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLab_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLab_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLab_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::NewProp_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromLab", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLab_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLab_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromLab)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_L);
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_GET_PROPERTY(FIntProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromLab(Z_Param_L,Z_Param_A,Z_Param_B,Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromLab

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromLabF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLabF_Parms
	{
		float L;
		float A;
		float B;
		float Alpha;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Make Odyssey Brush color from LAB Alpha values (Floats).\n" },
		{ "CPP_Default_Alpha", "255.000000" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make Odyssey Brush color from LAB Alpha values (Floats)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_L;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::NewProp_L = { "L", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLabF_Parms, L), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLabF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLabF_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLabF_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLabF_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::NewProp_L,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromLabF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLabF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromLabF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromLabF)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_L);
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_GET_PROPERTY(FFloatProperty,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromLabF(Z_Param_L,Z_Param_A,Z_Param_B,Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromLabF

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromRGB
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGB_Parms
	{
		int32 R;
		int32 G;
		int32 B;
		int32 A;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "/* Make *///Make Odyssey Brush color from RGBA values (Integers).\n" },
		{ "CPP_Default_A", "255" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make //Make Odyssey Brush color from RGBA values (Integers)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_R;
	static const UECodeGen_Private::FIntPropertyParams NewProp_G;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGB_Parms, R), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGB_Parms, G), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGB_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGB_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGB_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromRGB", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGB_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGB_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromRGB)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_R);
	P_GET_PROPERTY(FIntProperty,Z_Param_G);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromRGB(Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromRGB

// Begin Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromRGBF
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGBF_Parms
	{
		float R;
		float G;
		float B;
		float A;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "/* Make F *///Make Odyssey Brush color from RGBA values (Floats).\n" },
		{ "CPP_Default_A", "1.000000" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Make F //Make Odyssey Brush color from RGBA values (Floats)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_R;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_G;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_B;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGBF_Parms, R), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGBF_Parms, G), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGBF_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGBF_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGBF_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::NewProp_R,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::NewProp_G,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "MakeOdysseyBrushColorFromRGBF", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGBF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::OdysseyBrushColorFunctionLibrary_eventMakeOdysseyBrushColorFromRGBF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromRGBF)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_R);
	P_GET_PROPERTY(FFloatProperty,Z_Param_G);
	P_GET_PROPERTY(FFloatProperty,Z_Param_B);
	P_GET_PROPERTY(FFloatProperty,Z_Param_A);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::MakeOdysseyBrushColorFromRGBF(Z_Param_R,Z_Param_G,Z_Param_B,Z_Param_A);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function MakeOdysseyBrushColorFromRGBF

// Begin Class UOdysseyBrushColorFunctionLibrary Function SetAlpha
struct Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics
{
	struct OdysseyBrushColorFunctionLibrary_eventSetAlpha_Parms
	{
		FOdysseyBrushColor Color;
		float Alpha;
		FOdysseyBrushColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Color" },
		{ "Comment", "//Set the Odyssey Brush Color Alpha Component\n" },
		{ "DisplayName", "Set OdysseyBrushColor Alpha" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ToolTip", "Set the Odyssey Brush Color Alpha Component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventSetAlpha_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventSetAlpha_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushColorFunctionLibrary_eventSetAlpha_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, nullptr, "SetAlpha", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::OdysseyBrushColorFunctionLibrary_eventSetAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::OdysseyBrushColorFunctionLibrary_eventSetAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushColorFunctionLibrary::execSetAlpha)
{
	P_GET_STRUCT(FOdysseyBrushColor,Z_Param_Color);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushColor*)Z_Param__Result=UOdysseyBrushColorFunctionLibrary::SetAlpha(Z_Param_Color,Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class UOdysseyBrushColorFunctionLibrary Function SetAlpha

// Begin Class UOdysseyBrushColorFunctionLibrary
void UOdysseyBrushColorFunctionLibrary::StaticRegisterNativesUOdysseyBrushColorFunctionLibrary()
{
	UClass* Class = UOdysseyBrushColorFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BreakOdysseyBrushColorIntoCMYK", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoCMYK },
		{ "BreakOdysseyBrushColorIntoCMYKF", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoCMYKF },
		{ "BreakOdysseyBrushColorIntoGrey", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoGrey },
		{ "BreakOdysseyBrushColorIntoGreyF", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoGreyF },
		{ "BreakOdysseyBrushColorIntoHSL", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoHSL },
		{ "BreakOdysseyBrushColorIntoHSLF", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoHSLF },
		{ "BreakOdysseyBrushColorIntoHSV", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoHSV },
		{ "BreakOdysseyBrushColorIntoHSVF", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoHSVF },
		{ "BreakOdysseyBrushColorIntoLabA", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoLabA },
		{ "BreakOdysseyBrushColorIntoLabF", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoLabF },
		{ "BreakOdysseyBrushColorIntoRGB", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoRGB },
		{ "BreakOdysseyBrushColorIntoRGBF", &UOdysseyBrushColorFunctionLibrary::execBreakOdysseyBrushColorIntoRGBF },
		{ "ConvertToFormat", &UOdysseyBrushColorFunctionLibrary::execConvertToFormat },
		{ "GetAlpha", &UOdysseyBrushColorFunctionLibrary::execGetAlpha },
		{ "GetChannelDepth", &UOdysseyBrushColorFunctionLibrary::execGetChannelDepth },
		{ "GetColorModel", &UOdysseyBrushColorFunctionLibrary::execGetColorModel },
		{ "Lerp", &UOdysseyBrushColorFunctionLibrary::execLerp },
		{ "MakeDebugColor", &UOdysseyBrushColorFunctionLibrary::execMakeDebugColor },
		{ "MakeOdysseyBrushColorFromCMYK", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromCMYK },
		{ "MakeOdysseyBrushColorFromCMYKF", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromCMYKF },
		{ "MakeOdysseyBrushColorFromGrey", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromGrey },
		{ "MakeOdysseyBrushColorFromGreyF", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromGreyF },
		{ "MakeOdysseyBrushColorFromHSL", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromHSL },
		{ "MakeOdysseyBrushColorFromHSLF", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromHSLF },
		{ "MakeOdysseyBrushColorFromHSV", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromHSV },
		{ "MakeOdysseyBrushColorFromHSVF", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromHSVF },
		{ "MakeOdysseyBrushColorFromLab", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromLab },
		{ "MakeOdysseyBrushColorFromLabF", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromLabF },
		{ "MakeOdysseyBrushColorFromRGB", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromRGB },
		{ "MakeOdysseyBrushColorFromRGBF", &UOdysseyBrushColorFunctionLibrary::execMakeOdysseyBrushColorFromRGBF },
		{ "SetAlpha", &UOdysseyBrushColorFunctionLibrary::execSetAlpha },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrushColorFunctionLibrary);
UClass* Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary_NoRegister()
{
	return UOdysseyBrushColorFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyBrushColorFunctionLibrary\n" },
		{ "IncludePath", "Proxies/OdysseyBrushColor.h" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushColor.h" },
		{ "ScriptName", "OdysseyBrushColorLibrary" },
		{ "ToolTip", "UOdysseyBrushColorFunctionLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYK, "BreakOdysseyBrushColorIntoCMYK" }, // 3239268032
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoCMYKF, "BreakOdysseyBrushColorIntoCMYKF" }, // 1895878326
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGrey, "BreakOdysseyBrushColorIntoGrey" }, // 2285478523
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoGreyF, "BreakOdysseyBrushColorIntoGreyF" }, // 2879507365
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSL, "BreakOdysseyBrushColorIntoHSL" }, // 3262151894
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSLF, "BreakOdysseyBrushColorIntoHSLF" }, // 1650663780
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSV, "BreakOdysseyBrushColorIntoHSV" }, // 4277637903
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoHSVF, "BreakOdysseyBrushColorIntoHSVF" }, // 1434672478
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabA, "BreakOdysseyBrushColorIntoLabA" }, // 3865739240
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoLabF, "BreakOdysseyBrushColorIntoLabF" }, // 3120761102
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGB, "BreakOdysseyBrushColorIntoRGB" }, // 1650374787
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_BreakOdysseyBrushColorIntoRGBF, "BreakOdysseyBrushColorIntoRGBF" }, // 3086390758
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_ConvertToFormat, "ConvertToFormat" }, // 2817410536
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetAlpha, "GetAlpha" }, // 947863783
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetChannelDepth, "GetChannelDepth" }, // 2065109133
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_GetColorModel, "GetColorModel" }, // 2024726424
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_Lerp, "Lerp" }, // 2421271054
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeDebugColor, "MakeDebugColor" }, // 2638055220
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYK, "MakeOdysseyBrushColorFromCMYK" }, // 2986061522
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromCMYKF, "MakeOdysseyBrushColorFromCMYKF" }, // 4160656462
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGrey, "MakeOdysseyBrushColorFromGrey" }, // 231712292
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromGreyF, "MakeOdysseyBrushColorFromGreyF" }, // 167325252
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSL, "MakeOdysseyBrushColorFromHSL" }, // 780925851
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSLF, "MakeOdysseyBrushColorFromHSLF" }, // 298127868
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSV, "MakeOdysseyBrushColorFromHSV" }, // 3272175722
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromHSVF, "MakeOdysseyBrushColorFromHSVF" }, // 1264141825
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLab, "MakeOdysseyBrushColorFromLab" }, // 430534268
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromLabF, "MakeOdysseyBrushColorFromLabF" }, // 145222010
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGB, "MakeOdysseyBrushColorFromRGB" }, // 2458024018
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_MakeOdysseyBrushColorFromRGBF, "MakeOdysseyBrushColorFromRGBF" }, // 1790320680
		{ &Z_Construct_UFunction_UOdysseyBrushColorFunctionLibrary_SetAlpha, "SetAlpha" }, // 2607668450
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrushColorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary_Statics::ClassParams = {
	&UOdysseyBrushColorFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrushColorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrushColorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrushColorFunctionLibrary.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UClass* StaticClass<UOdysseyBrushColorFunctionLibrary>()
{
	return UOdysseyBrushColorFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrushColorFunctionLibrary);
UOdysseyBrushColorFunctionLibrary::~UOdysseyBrushColorFunctionLibrary() {}
// End Class UOdysseyBrushColorFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOdysseyBrushColor::StaticStruct, Z_Construct_UScriptStruct_FOdysseyBrushColor_Statics::NewStructOps, TEXT("OdysseyBrushColor"), &Z_Registration_Info_UScriptStruct_OdysseyBrushColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOdysseyBrushColor), 1885050580U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary, UOdysseyBrushColorFunctionLibrary::StaticClass, TEXT("UOdysseyBrushColorFunctionLibrary"), &Z_Registration_Info_UClass_UOdysseyBrushColorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrushColorFunctionLibrary), 645716384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_3488921648(TEXT("/Script/OdysseyBrush"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
