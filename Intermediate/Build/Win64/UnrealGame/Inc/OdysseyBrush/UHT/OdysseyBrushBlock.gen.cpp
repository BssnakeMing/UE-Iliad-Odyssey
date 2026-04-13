// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushBlock.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushColor.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushRect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushBlock() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary_NoRegister();
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth();
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBlockProxy();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBrushColor();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBrushRect();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyFontCharacter();
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode();
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin ScriptStruct FOdysseyBlockProxy
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OdysseyBlockProxy;
class UScriptStruct* FOdysseyBlockProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyBlockProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OdysseyBlockProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOdysseyBlockProxy, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("OdysseyBlockProxy"));
	}
	return Z_Registration_Info_UScriptStruct_OdysseyBlockProxy.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<FOdysseyBlockProxy>()
{
	return FOdysseyBlockProxy::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOdysseyBlockProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////\n// Odyssey Block Reference\n" },
		{ "DisplayName", "Odyssey Block Reference" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Odyssey Block Reference" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOdysseyBlockProxy>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOdysseyBlockProxy_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	&NewStructOps,
	"OdysseyBlockProxy",
	nullptr,
	0,
	sizeof(FOdysseyBlockProxy),
	alignof(FOdysseyBlockProxy),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyBlockProxy_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOdysseyBlockProxy_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBlockProxy()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyBlockProxy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OdysseyBlockProxy.InnerSingleton, Z_Construct_UScriptStruct_FOdysseyBlockProxy_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OdysseyBlockProxy.InnerSingleton;
}
// End ScriptStruct FOdysseyBlockProxy

// Begin ScriptStruct FOdysseyFontCharacter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OdysseyFontCharacter;
class UScriptStruct* FOdysseyFontCharacter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyFontCharacter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OdysseyFontCharacter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOdysseyFontCharacter, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("OdysseyFontCharacter"));
	}
	return Z_Registration_Info_UScriptStruct_OdysseyFontCharacter.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<FOdysseyFontCharacter>()
{
	return FOdysseyFontCharacter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Duplicate FFontCharacter (in Font.h#29) to be able to expose values in BP (as FFontCharacter is not tagged BlueprintType)\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Duplicate FFontCharacter (in Font.h#29) to be able to expose values in BP (as FFontCharacter is not tagged BlueprintType)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartU_MetaData[] = {
		{ "Category", "Odyssey|Block" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartV_MetaData[] = {
		{ "Category", "Odyssey|Block" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_USize_MetaData[] = {
		{ "Category", "Odyssey|Block" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VSize_MetaData[] = {
		{ "Category", "Odyssey|Block" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureIndex_MetaData[] = {
		{ "Category", "Odyssey|Block" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalOffset_MetaData[] = {
		{ "Category", "Odyssey|Block" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartU;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartV;
	static const UECodeGen_Private::FIntPropertyParams NewProp_USize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TextureIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOdysseyFontCharacter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_StartU = { "StartU", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyFontCharacter, StartU), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartU_MetaData), NewProp_StartU_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_StartV = { "StartV", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyFontCharacter, StartV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartV_MetaData), NewProp_StartV_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_USize = { "USize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyFontCharacter, USize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_USize_MetaData), NewProp_USize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_VSize = { "VSize", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyFontCharacter, VSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VSize_MetaData), NewProp_VSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyFontCharacter, TextureIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureIndex_MetaData), NewProp_TextureIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_VerticalOffset = { "VerticalOffset", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyFontCharacter, VerticalOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalOffset_MetaData), NewProp_VerticalOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_StartU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_StartV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_USize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_VSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_TextureIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewProp_VerticalOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	&NewStructOps,
	"OdysseyFontCharacter",
	Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::PropPointers),
	sizeof(FOdysseyFontCharacter),
	alignof(FOdysseyFontCharacter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOdysseyFontCharacter()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyFontCharacter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OdysseyFontCharacter.InnerSingleton, Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OdysseyFontCharacter.InnerSingleton;
}
// End ScriptStruct FOdysseyFontCharacter

// Begin Class UOdysseyBlockProxyFunctionLibrary Function AdjustAlpha
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventAdjustAlpha_Parms
	{
		FOdysseyBlockProxy Block;
		UCurveFloat* Curve;
		bool PreserveNullAlpha;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Adjust the alpha component of each pixel in the given Block according to the given curve\n//Abscissa represents the actual alpha value.\n//Ordinate represents the adjusted alpha value.\n" },
		{ "CPP_Default_PreserveNullAlpha", "true" },
		{ "DisplayName", "Adjust Block Alpha" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Adjust the alpha component of each pixel in the given Block according to the given curve\nAbscissa represents the actual alpha value.\nOrdinate represents the adjusted alpha value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static void NewProp_PreserveNullAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreserveNullAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustAlpha_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustAlpha_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::NewProp_PreserveNullAlpha_SetBit(void* Obj)
{
	((OdysseyBlockProxyFunctionLibrary_eventAdjustAlpha_Parms*)Obj)->PreserveNullAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::NewProp_PreserveNullAlpha = { "PreserveNullAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBlockProxyFunctionLibrary_eventAdjustAlpha_Parms), &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::NewProp_PreserveNullAlpha_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustAlpha_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::NewProp_PreserveNullAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "AdjustAlpha", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execAdjustAlpha)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
	P_GET_UBOOL(Z_Param_PreserveNullAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::AdjustAlpha(Z_Param_Block,Z_Param_Curve,Z_Param_PreserveNullAlpha);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function AdjustAlpha

// Begin Class UOdysseyBlockProxyFunctionLibrary Function AdjustCMYKA
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms
	{
		FOdysseyBlockProxy Block;
		UCurveFloat* CurveC;
		UCurveFloat* CurveM;
		UCurveFloat* CurveY;
		UCurveFloat* CurveK;
		UCurveFloat* CurveAlpha;
		bool PreserveNullAlpha;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Adjust the CMYKA components of each pixel in the given Block according to the given curves\n//Abscissa represents the actual component value.\n//Ordinate represents the adjusted component value.\n" },
		{ "CPP_Default_PreserveNullAlpha", "true" },
		{ "DisplayName", "Adjust Block CMYKA" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Adjust the CMYKA components of each pixel in the given Block according to the given curves\nAbscissa represents the actual component value.\nOrdinate represents the adjusted component value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveM;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveK;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAlpha;
	static void NewProp_PreserveNullAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreserveNullAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_CurveC = { "CurveC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms, CurveC), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_CurveM = { "CurveM", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms, CurveM), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_CurveY = { "CurveY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms, CurveY), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_CurveK = { "CurveK", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms, CurveK), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_CurveAlpha = { "CurveAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms, CurveAlpha), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_PreserveNullAlpha_SetBit(void* Obj)
{
	((OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms*)Obj)->PreserveNullAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_PreserveNullAlpha = { "PreserveNullAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms), &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_PreserveNullAlpha_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_CurveC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_CurveM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_CurveY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_CurveK,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_CurveAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_PreserveNullAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "AdjustCMYKA", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustCMYKA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execAdjustCMYKA)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveC);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveM);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveY);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveK);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveAlpha);
	P_GET_UBOOL(Z_Param_PreserveNullAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::AdjustCMYKA(Z_Param_Block,Z_Param_CurveC,Z_Param_CurveM,Z_Param_CurveY,Z_Param_CurveK,Z_Param_CurveAlpha,Z_Param_PreserveNullAlpha);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function AdjustCMYKA

// Begin Class UOdysseyBlockProxyFunctionLibrary Function AdjustGreyA
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventAdjustGreyA_Parms
	{
		FOdysseyBlockProxy Block;
		UCurveFloat* CurveGrey;
		UCurveFloat* CurveAlpha;
		bool PreserveNullAlpha;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Adjust the GreyA components of each pixel in the given Block according to the given curves\n//Abscissa represents the actual component value.\n//Ordinate represents the adjusted component value.\n" },
		{ "CPP_Default_PreserveNullAlpha", "true" },
		{ "DisplayName", "Adjust Block GreyA" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Adjust the GreyA components of each pixel in the given Block according to the given curves\nAbscissa represents the actual component value.\nOrdinate represents the adjusted component value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveGrey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAlpha;
	static void NewProp_PreserveNullAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreserveNullAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustGreyA_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_CurveGrey = { "CurveGrey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustGreyA_Parms, CurveGrey), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_CurveAlpha = { "CurveAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustGreyA_Parms, CurveAlpha), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_PreserveNullAlpha_SetBit(void* Obj)
{
	((OdysseyBlockProxyFunctionLibrary_eventAdjustGreyA_Parms*)Obj)->PreserveNullAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_PreserveNullAlpha = { "PreserveNullAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBlockProxyFunctionLibrary_eventAdjustGreyA_Parms), &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_PreserveNullAlpha_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustGreyA_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_CurveGrey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_CurveAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_PreserveNullAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "AdjustGreyA", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustGreyA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustGreyA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execAdjustGreyA)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveGrey);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveAlpha);
	P_GET_UBOOL(Z_Param_PreserveNullAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::AdjustGreyA(Z_Param_Block,Z_Param_CurveGrey,Z_Param_CurveAlpha,Z_Param_PreserveNullAlpha);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function AdjustGreyA

// Begin Class UOdysseyBlockProxyFunctionLibrary Function AdjustHSLA
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms
	{
		FOdysseyBlockProxy Block;
		UCurveFloat* CurveH;
		UCurveFloat* CurveS;
		UCurveFloat* CurveL;
		UCurveFloat* CurveAlpha;
		bool PreserveNullAlpha;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Adjust the HSLA components of each pixel in the given Block according to the given curves\n//Abscissa represents the actual component value.\n//Ordinate represents the adjusted component value.\n" },
		{ "CPP_Default_PreserveNullAlpha", "true" },
		{ "DisplayName", "Adjust Block HSLA" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Adjust the HSLA components of each pixel in the given Block according to the given curves\nAbscissa represents the actual component value.\nOrdinate represents the adjusted component value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveH;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAlpha;
	static void NewProp_PreserveNullAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreserveNullAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_CurveH = { "CurveH", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms, CurveH), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_CurveS = { "CurveS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms, CurveS), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_CurveL = { "CurveL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms, CurveL), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_CurveAlpha = { "CurveAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms, CurveAlpha), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_PreserveNullAlpha_SetBit(void* Obj)
{
	((OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms*)Obj)->PreserveNullAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_PreserveNullAlpha = { "PreserveNullAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms), &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_PreserveNullAlpha_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_CurveH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_CurveS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_CurveL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_CurveAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_PreserveNullAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "AdjustHSLA", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustHSLA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execAdjustHSLA)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveH);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveS);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveL);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveAlpha);
	P_GET_UBOOL(Z_Param_PreserveNullAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::AdjustHSLA(Z_Param_Block,Z_Param_CurveH,Z_Param_CurveS,Z_Param_CurveL,Z_Param_CurveAlpha,Z_Param_PreserveNullAlpha);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function AdjustHSLA

// Begin Class UOdysseyBlockProxyFunctionLibrary Function AdjustHSVA
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms
	{
		FOdysseyBlockProxy Block;
		UCurveFloat* CurveH;
		UCurveFloat* CurveS;
		UCurveFloat* CurveV;
		UCurveFloat* CurveAlpha;
		bool PreserveNullAlpha;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Adjust the HSVA components of each pixel in the given Block according to the given curves\n//Abscissa represents the actual component value.\n//Ordinate represents the adjusted component value.\n" },
		{ "CPP_Default_PreserveNullAlpha", "true" },
		{ "DisplayName", "Adjust Block HSVA" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Adjust the HSVA components of each pixel in the given Block according to the given curves\nAbscissa represents the actual component value.\nOrdinate represents the adjusted component value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveH;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveS;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveV;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAlpha;
	static void NewProp_PreserveNullAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreserveNullAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_CurveH = { "CurveH", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms, CurveH), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_CurveS = { "CurveS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms, CurveS), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_CurveV = { "CurveV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms, CurveV), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_CurveAlpha = { "CurveAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms, CurveAlpha), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_PreserveNullAlpha_SetBit(void* Obj)
{
	((OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms*)Obj)->PreserveNullAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_PreserveNullAlpha = { "PreserveNullAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms), &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_PreserveNullAlpha_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_CurveH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_CurveS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_CurveV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_CurveAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_PreserveNullAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "AdjustHSVA", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustHSVA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execAdjustHSVA)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveH);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveS);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveV);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveAlpha);
	P_GET_UBOOL(Z_Param_PreserveNullAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::AdjustHSVA(Z_Param_Block,Z_Param_CurveH,Z_Param_CurveS,Z_Param_CurveV,Z_Param_CurveAlpha,Z_Param_PreserveNullAlpha);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function AdjustHSVA

// Begin Class UOdysseyBlockProxyFunctionLibrary Function AdjustLabA
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms
	{
		FOdysseyBlockProxy Block;
		UCurveFloat* CurveL;
		UCurveFloat* CurveA;
		UCurveFloat* CurveB;
		UCurveFloat* CurveAlpha;
		bool PreserveNullAlpha;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Adjust the LabA components of each pixel in the given Block according to the given curves\n//Abscissa represents the actual component value.\n//Ordinate represents the adjusted component value.\n" },
		{ "CPP_Default_PreserveNullAlpha", "true" },
		{ "DisplayName", "Adjust Block LabA" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Adjust the LabA components of each pixel in the given Block according to the given curves\nAbscissa represents the actual component value.\nOrdinate represents the adjusted component value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveL;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAlpha;
	static void NewProp_PreserveNullAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreserveNullAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_CurveL = { "CurveL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms, CurveL), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_CurveA = { "CurveA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms, CurveA), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_CurveB = { "CurveB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms, CurveB), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_CurveAlpha = { "CurveAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms, CurveAlpha), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_PreserveNullAlpha_SetBit(void* Obj)
{
	((OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms*)Obj)->PreserveNullAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_PreserveNullAlpha = { "PreserveNullAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms), &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_PreserveNullAlpha_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_CurveL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_CurveA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_CurveB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_CurveAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_PreserveNullAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "AdjustLabA", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustLabA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execAdjustLabA)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveL);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveA);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveB);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveAlpha);
	P_GET_UBOOL(Z_Param_PreserveNullAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::AdjustLabA(Z_Param_Block,Z_Param_CurveL,Z_Param_CurveA,Z_Param_CurveB,Z_Param_CurveAlpha,Z_Param_PreserveNullAlpha);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function AdjustLabA

// Begin Class UOdysseyBlockProxyFunctionLibrary Function AdjustRGBA
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms
	{
		FOdysseyBlockProxy Block;
		UCurveFloat* CurveR;
		UCurveFloat* CurveG;
		UCurveFloat* CurveB;
		UCurveFloat* CurveAlpha;
		bool PreserveNullAlpha;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Adjust the RGBA components of each pixel in the given Block according to the given curves\n//Abscissa represents the actual component value.\n//Ordinate represents the adjusted component value.\n" },
		{ "CPP_Default_PreserveNullAlpha", "true" },
		{ "DisplayName", "Adjust Block RGBA" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Adjust the RGBA components of each pixel in the given Block according to the given curves\nAbscissa represents the actual component value.\nOrdinate represents the adjusted component value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveR;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveG;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveB;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurveAlpha;
	static void NewProp_PreserveNullAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreserveNullAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_CurveR = { "CurveR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms, CurveR), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_CurveG = { "CurveG", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms, CurveG), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_CurveB = { "CurveB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms, CurveB), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_CurveAlpha = { "CurveAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms, CurveAlpha), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_PreserveNullAlpha_SetBit(void* Obj)
{
	((OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms*)Obj)->PreserveNullAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_PreserveNullAlpha = { "PreserveNullAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms), &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_PreserveNullAlpha_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_CurveR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_CurveG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_CurveB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_CurveAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_PreserveNullAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "AdjustRGBA", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::OdysseyBlockProxyFunctionLibrary_eventAdjustRGBA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execAdjustRGBA)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveR);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveG);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveB);
	P_GET_OBJECT(UCurveFloat,Z_Param_CurveAlpha);
	P_GET_UBOOL(Z_Param_PreserveNullAlpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::AdjustRGBA(Z_Param_Block,Z_Param_CurveR,Z_Param_CurveG,Z_Param_CurveB,Z_Param_CurveAlpha,Z_Param_PreserveNullAlpha);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function AdjustRGBA

// Begin Class UOdysseyBlockProxyFunctionLibrary Function Blend
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventBlend_Parms
	{
		FOdysseyBlockProxy Top;
		FOdysseyBlockProxy Back;
		FOdysseyBrushRect TopArea;
		int32 X;
		int32 Y;
		float Opacity;
		EOdysseyColorModel ColorModel;
		EOdysseyChannelDepth ChannelDepth;
		EOdysseyBlendingMode BlendingMode;
		EOdysseyAlphaMode AlphaMode;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Blends two Odyssey Block Reference on Top and Back.\n//If Top is bigger than Back = Back will crop Top.\n//If Top is smaller than Back = Both will be visible.\n//X | Y are an offset to pan Top.\n" },
		{ "CPP_Default_AlphaMode", "kNormal" },
		{ "CPP_Default_BlendingMode", "kNormal" },
		{ "CPP_Default_ChannelDepth", "k8" },
		{ "CPP_Default_ColorModel", "kRGBA" },
		{ "CPP_Default_Opacity", "1.000000" },
		{ "CPP_Default_X", "0" },
		{ "CPP_Default_Y", "0" },
		{ "DisplayName", "Blend Blocks" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Blends two Odyssey Block Reference on Top and Back.\nIf Top is bigger than Back = Back will crop Top.\nIf Top is smaller than Back = Both will be visible.\nX | Y are an offset to pan Top." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "DisplayName", "Top Offset X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "DisplayName", "Top Offset Y" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Top;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Back;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopArea;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelDepth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, Top), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, Back), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_TopArea = { "TopArea", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, TopArea), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, Opacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_ColorModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_ColorModel = { "ColorModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, ColorModel), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_ChannelDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, ChannelDepth), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_BlendingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_BlendingMode = { "BlendingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, BlendingMode), Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode, METADATA_PARAMS(0, nullptr) }; // 1337073500
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_AlphaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_AlphaMode = { "AlphaMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, AlphaMode), Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode, METADATA_PARAMS(0, nullptr) }; // 1351865346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlend_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_Top,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_Back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_TopArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_ColorModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_ColorModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_ChannelDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_ChannelDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_BlendingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_BlendingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_AlphaMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_AlphaMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "Blend", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::OdysseyBlockProxyFunctionLibrary_eventBlend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::OdysseyBlockProxyFunctionLibrary_eventBlend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execBlend)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Top);
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Back);
	P_GET_STRUCT(FOdysseyBrushRect,Z_Param_TopArea);
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Opacity);
	P_GET_ENUM(EOdysseyColorModel,Z_Param_ColorModel);
	P_GET_ENUM(EOdysseyChannelDepth,Z_Param_ChannelDepth);
	P_GET_ENUM(EOdysseyBlendingMode,Z_Param_BlendingMode);
	P_GET_ENUM(EOdysseyAlphaMode,Z_Param_AlphaMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::Blend(Z_Param_Top,Z_Param_Back,Z_Param_TopArea,Z_Param_X,Z_Param_Y,Z_Param_Opacity,EOdysseyColorModel(Z_Param_ColorModel),EOdysseyChannelDepth(Z_Param_ChannelDepth),EOdysseyBlendingMode(Z_Param_BlendingMode),EOdysseyAlphaMode(Z_Param_AlphaMode));
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function Blend

// Begin Class UOdysseyBlockProxyFunctionLibrary Function BlendColor
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms
	{
		FOdysseyBrushColor Color;
		FOdysseyBlockProxy Back;
		FOdysseyBrushRect Area;
		float Opacity;
		EOdysseyColorModel ColorModel;
		EOdysseyChannelDepth ChannelDepth;
		EOdysseyBlendingMode BlendingMode;
		EOdysseyAlphaMode AlphaMode;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Blends a color on the whole given Sample. Requires an Odyssey Brush Color input.\n" },
		{ "CPP_Default_AlphaMode", "kNormal" },
		{ "CPP_Default_BlendingMode", "kNormal" },
		{ "CPP_Default_ChannelDepth", "k8" },
		{ "CPP_Default_ColorModel", "kRGBA" },
		{ "CPP_Default_Opacity", "1.000000" },
		{ "DisplayName", "Blend Block With Color" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Blends a color on the whole given Sample. Requires an Odyssey Brush Color input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Back;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Area;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelDepth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendingMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_Back = { "Back", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms, Back), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms, Area), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms, Opacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_ColorModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_ColorModel = { "ColorModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms, ColorModel), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_ChannelDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms, ChannelDepth), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_BlendingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_BlendingMode = { "BlendingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms, BlendingMode), Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode, METADATA_PARAMS(0, nullptr) }; // 1337073500
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_AlphaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_AlphaMode = { "AlphaMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms, AlphaMode), Z_Construct_UEnum_OdysseyCore_EOdysseyAlphaMode, METADATA_PARAMS(0, nullptr) }; // 1351865346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_Back,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_Area,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_ColorModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_ColorModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_ChannelDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_ChannelDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_BlendingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_BlendingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_AlphaMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_AlphaMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "BlendColor", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::OdysseyBlockProxyFunctionLibrary_eventBlendColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execBlendColor)
{
	P_GET_STRUCT(FOdysseyBrushColor,Z_Param_Color);
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Back);
	P_GET_STRUCT(FOdysseyBrushRect,Z_Param_Area);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Opacity);
	P_GET_ENUM(EOdysseyColorModel,Z_Param_ColorModel);
	P_GET_ENUM(EOdysseyChannelDepth,Z_Param_ChannelDepth);
	P_GET_ENUM(EOdysseyBlendingMode,Z_Param_BlendingMode);
	P_GET_ENUM(EOdysseyAlphaMode,Z_Param_AlphaMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::BlendColor(Z_Param_Color,Z_Param_Back,Z_Param_Area,Z_Param_Opacity,EOdysseyColorModel(Z_Param_ColorModel),EOdysseyChannelDepth(Z_Param_ChannelDepth),EOdysseyBlendingMode(Z_Param_BlendingMode),EOdysseyAlphaMode(Z_Param_AlphaMode));
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function BlendColor

// Begin Class UOdysseyBlockProxyFunctionLibrary Function Conv_TextureToOdysseyBlockProxy
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventConv_TextureToOdysseyBlockProxy_Parms
	{
		UTexture2D* Texture;
		EOdysseyColorModel ColorModel;
		EOdysseyChannelDepth ChannelDepth;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Converts Texture 2D to Odyssey Block Reference.\n" },
		{ "CPP_Default_ChannelDepth", "k8" },
		{ "CPP_Default_ColorModel", "kRGBA" },
		{ "DisplayName", "To Odyssey Block Reference (Texture2D)" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Converts Texture 2D to Odyssey Block Reference." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelDepth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventConv_TextureToOdysseyBlockProxy_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_ColorModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_ColorModel = { "ColorModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventConv_TextureToOdysseyBlockProxy_Parms, ColorModel), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_ChannelDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventConv_TextureToOdysseyBlockProxy_Parms, ChannelDepth), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventConv_TextureToOdysseyBlockProxy_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_ColorModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_ColorModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_ChannelDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_ChannelDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "Conv_TextureToOdysseyBlockProxy", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::OdysseyBlockProxyFunctionLibrary_eventConv_TextureToOdysseyBlockProxy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::OdysseyBlockProxyFunctionLibrary_eventConv_TextureToOdysseyBlockProxy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execConv_TextureToOdysseyBlockProxy)
{
	P_GET_OBJECT(UTexture2D,Z_Param_Texture);
	P_GET_ENUM(EOdysseyColorModel,Z_Param_ColorModel);
	P_GET_ENUM(EOdysseyChannelDepth,Z_Param_ChannelDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::Conv_TextureToOdysseyBlockProxy(Z_Param_Texture,EOdysseyColorModel(Z_Param_ColorModel),EOdysseyChannelDepth(Z_Param_ChannelDepth));
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function Conv_TextureToOdysseyBlockProxy

// Begin Class UOdysseyBlockProxyFunctionLibrary Function ConvertToFormat
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventConvertToFormat_Parms
	{
		FOdysseyBlockProxy Block;
		EOdysseyColorModel ColorModel;
		EOdysseyChannelDepth ChannelDepth;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Convert the Odyssey Block Reference to the specified Color Model and Channel Depth\n" },
		{ "CPP_Default_ChannelDepth", "k8" },
		{ "CPP_Default_ColorModel", "kRGBA" },
		{ "DisplayName", "Convert Block to Format" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Convert the Odyssey Block Reference to the specified Color Model and Channel Depth" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelDepth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventConvertToFormat_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_ColorModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_ColorModel = { "ColorModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventConvertToFormat_Parms, ColorModel), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_ChannelDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventConvertToFormat_Parms, ChannelDepth), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventConvertToFormat_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_ColorModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_ColorModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_ChannelDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_ChannelDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "ConvertToFormat", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::OdysseyBlockProxyFunctionLibrary_eventConvertToFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::OdysseyBlockProxyFunctionLibrary_eventConvertToFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execConvertToFormat)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_ENUM(EOdysseyColorModel,Z_Param_ColorModel);
	P_GET_ENUM(EOdysseyChannelDepth,Z_Param_ChannelDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::ConvertToFormat(Z_Param_Block,EOdysseyColorModel(Z_Param_ColorModel),EOdysseyChannelDepth(Z_Param_ChannelDepth));
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function ConvertToFormat

// Begin Class UOdysseyBlockProxyFunctionLibrary Function CreateBlock
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventCreateBlock_Parms
	{
		int32 Width;
		int32 Height;
		EOdysseyColorModel ColorModel;
		EOdysseyChannelDepth ChannelDepth;
		bool InitializeData;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "InitializeData" },
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Creates an empty Odyssey Block Reference.\n" },
		{ "CPP_Default_ChannelDepth", "k8" },
		{ "CPP_Default_ColorModel", "kRGBA" },
		{ "CPP_Default_Height", "256" },
		{ "CPP_Default_InitializeData", "true" },
		{ "CPP_Default_Width", "256" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Creates an empty Odyssey Block Reference." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelDepth;
	static void NewProp_InitializeData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InitializeData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventCreateBlock_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventCreateBlock_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_ColorModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_ColorModel = { "ColorModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventCreateBlock_Parms, ColorModel), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_ChannelDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventCreateBlock_Parms, ChannelDepth), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
void Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_InitializeData_SetBit(void* Obj)
{
	((OdysseyBlockProxyFunctionLibrary_eventCreateBlock_Parms*)Obj)->InitializeData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_InitializeData = { "InitializeData", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBlockProxyFunctionLibrary_eventCreateBlock_Parms), &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_InitializeData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventCreateBlock_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_ColorModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_ColorModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_ChannelDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_ChannelDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_InitializeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "CreateBlock", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::OdysseyBlockProxyFunctionLibrary_eventCreateBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::OdysseyBlockProxyFunctionLibrary_eventCreateBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execCreateBlock)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_ENUM(EOdysseyColorModel,Z_Param_ColorModel);
	P_GET_ENUM(EOdysseyChannelDepth,Z_Param_ChannelDepth);
	P_GET_UBOOL(Z_Param_InitializeData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::CreateBlock(Z_Param_Width,Z_Param_Height,EOdysseyColorModel(Z_Param_ColorModel),EOdysseyChannelDepth(Z_Param_ChannelDepth),Z_Param_InitializeData);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function CreateBlock

// Begin Class UOdysseyBlockProxyFunctionLibrary Function CropBlock
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventCropBlock_Parms
	{
		FOdysseyBlockProxy Block;
		FOdysseyBrushRect Area;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Crops the Odyssey Block Reference according to the given Rect.\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Crops the Odyssey Block Reference according to the given Rect." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Area;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventCropBlock_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventCropBlock_Parms, Area), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventCropBlock_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::NewProp_Area,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "CropBlock", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::OdysseyBlockProxyFunctionLibrary_eventCropBlock_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::OdysseyBlockProxyFunctionLibrary_eventCropBlock_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execCropBlock)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_STRUCT(FOdysseyBrushRect,Z_Param_Area);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::CropBlock(Z_Param_Block,Z_Param_Area);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function CropBlock

// Begin Class UOdysseyBlockProxyFunctionLibrary Function Fill
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventFill_Parms
	{
		FOdysseyBlockProxy Block;
		FOdysseyBrushColor Color;
		FOdysseyBrushRect Area;
		bool PreserveAlpha;
		EOdysseyColorModel ColorModel;
		EOdysseyChannelDepth ChannelDepth;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Fills the given Sample with thge given Color. Requires an Odyssey Brush Color input.\n" },
		{ "CPP_Default_ChannelDepth", "k8" },
		{ "CPP_Default_ColorModel", "kRGBA" },
		{ "CPP_Default_PreserveAlpha", "false" },
		{ "DisplayName", "Fill Block With Color" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Fills the given Sample with thge given Color. Requires an Odyssey Brush Color input." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Area;
	static void NewProp_PreserveAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PreserveAlpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelDepth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventFill_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventFill_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventFill_Parms, Area), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
void Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_PreserveAlpha_SetBit(void* Obj)
{
	((OdysseyBlockProxyFunctionLibrary_eventFill_Parms*)Obj)->PreserveAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_PreserveAlpha = { "PreserveAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBlockProxyFunctionLibrary_eventFill_Parms), &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_PreserveAlpha_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_ColorModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_ColorModel = { "ColorModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventFill_Parms, ColorModel), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_ChannelDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventFill_Parms, ChannelDepth), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventFill_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_Area,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_PreserveAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_ColorModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_ColorModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_ChannelDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_ChannelDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "Fill", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::OdysseyBlockProxyFunctionLibrary_eventFill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::OdysseyBlockProxyFunctionLibrary_eventFill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execFill)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_STRUCT(FOdysseyBrushColor,Z_Param_Color);
	P_GET_STRUCT(FOdysseyBrushRect,Z_Param_Area);
	P_GET_UBOOL(Z_Param_PreserveAlpha);
	P_GET_ENUM(EOdysseyColorModel,Z_Param_ColorModel);
	P_GET_ENUM(EOdysseyChannelDepth,Z_Param_ChannelDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::Fill(Z_Param_Block,Z_Param_Color,Z_Param_Area,Z_Param_PreserveAlpha,EOdysseyColorModel(Z_Param_ColorModel),EOdysseyChannelDepth(Z_Param_ChannelDepth));
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function Fill

// Begin Class UOdysseyBlockProxyFunctionLibrary Function FillPreserveAlpha
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventFillPreserveAlpha_Parms
	{
		FOdysseyBlockProxy Sample;
		FOdysseyBrushColor Color;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Applies a color on sample's alpha channel. Requires an Odyssey Brush Color input.\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Fill Block With Color" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Applies a color on sample's alpha channel. Requires an Odyssey Brush Color input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventFillPreserveAlpha_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventFillPreserveAlpha_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventFillPreserveAlpha_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "FillPreserveAlpha", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::OdysseyBlockProxyFunctionLibrary_eventFillPreserveAlpha_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::OdysseyBlockProxyFunctionLibrary_eventFillPreserveAlpha_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execFillPreserveAlpha)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_STRUCT(FOdysseyBrushColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::FillPreserveAlpha(Z_Param_Sample,Z_Param_Color);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function FillPreserveAlpha

// Begin Class UOdysseyBlockProxyFunctionLibrary Function GetChannelDepth
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventGetChannelDepth_Parms
	{
		FOdysseyBlockProxy Block;
		EOdysseyChannelDepth ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Get the Odyssey Block Reference Channel Depth\n" },
		{ "DisplayName", "Get Block Channel Depth" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Get the Odyssey Block Reference Channel Depth" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetChannelDepth_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetChannelDepth_Parms, ReturnValue), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "GetChannelDepth", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::OdysseyBlockProxyFunctionLibrary_eventGetChannelDepth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::OdysseyBlockProxyFunctionLibrary_eventGetChannelDepth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execGetChannelDepth)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOdysseyChannelDepth*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::GetChannelDepth(Z_Param_Block);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function GetChannelDepth

// Begin Class UOdysseyBlockProxyFunctionLibrary Function GetCharactersSize
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventGetCharactersSize_Parms
	{
		const UFont* Font;
		FString String;
		TArray<float> Width;
		TArray<float> Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Requires a Font and a String to return Arrays of width/height of each character.\n//This node compute the box of each character corresponding to the font.\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Requires a Font and a String to return Arrays of width/height of each character.\nThis node compute the box of each character corresponding to the font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Width_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Width;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Height_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetCharactersSize_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetCharactersSize_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_Width_Inner = { "Width", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetCharactersSize_Parms, Width), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_Height_Inner = { "Height", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetCharactersSize_Parms, Height), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_Width_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_Height_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "GetCharactersSize", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::OdysseyBlockProxyFunctionLibrary_eventGetCharactersSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::OdysseyBlockProxyFunctionLibrary_eventGetCharactersSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execGetCharactersSize)
{
	P_GET_OBJECT(UFont,Z_Param_Font);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_GET_TARRAY_REF(float,Z_Param_Out_Width);
	P_GET_TARRAY_REF(float,Z_Param_Out_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBlockProxyFunctionLibrary::GetCharactersSize(Z_Param_Font,Z_Param_String,Z_Param_Out_Width,Z_Param_Out_Height);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function GetCharactersSize

// Begin Class UOdysseyBlockProxyFunctionLibrary Function GetColorAtPosition
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventGetColorAtPosition_Parms
	{
		FOdysseyBlockProxy Block;
		float X;
		float Y;
		FOdysseyBrushColor Color;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//This node automatically picks the color up at position on the canvas. \n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "This node automatically picks the color up at position on the canvas." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetColorAtPosition_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetColorAtPosition_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetColorAtPosition_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetColorAtPosition_Parms, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(0, nullptr) }; // 1885050580
void Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyBlockProxyFunctionLibrary_eventGetColorAtPosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyBlockProxyFunctionLibrary_eventGetColorAtPosition_Parms), &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "GetColorAtPosition", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::OdysseyBlockProxyFunctionLibrary_eventGetColorAtPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::OdysseyBlockProxyFunctionLibrary_eventGetColorAtPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execGetColorAtPosition)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_GET_PROPERTY(FFloatProperty,Z_Param_X);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Y);
	P_GET_STRUCT_REF(FOdysseyBrushColor,Z_Param_Out_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::GetColorAtPosition(Z_Param_Block,Z_Param_X,Z_Param_Y,Z_Param_Out_Color);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function GetColorAtPosition

// Begin Class UOdysseyBlockProxyFunctionLibrary Function GetColorModel
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventGetColorModel_Parms
	{
		FOdysseyBlockProxy Block;
		EOdysseyColorModel ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "/* Format Management *///Get the Odyssey Block Reference Color Model\n" },
		{ "DisplayName", "Get Block Color Model" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Format Management //Get the Odyssey Block Reference Color Model" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetColorModel_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetColorModel_Parms, ReturnValue), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "GetColorModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::OdysseyBlockProxyFunctionLibrary_eventGetColorModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::OdysseyBlockProxyFunctionLibrary_eventGetColorModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execGetColorModel)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EOdysseyColorModel*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::GetColorModel(Z_Param_Block);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function GetColorModel

// Begin Class UOdysseyBlockProxyFunctionLibrary Function GetFontBlocks
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventGetFontBlocks_Parms
	{
		const UFont* Font;
		EOdysseyColorModel ColorModel;
		EOdysseyChannelDepth ChannelDepth;
		TArray<FOdysseyBlockProxy> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Requires a Font to return an Array of Odyssey Block Reference.\n//This node turns the Font into a big block that contains all characters in the font.\n" },
		{ "CPP_Default_ChannelDepth", "k8" },
		{ "CPP_Default_ColorModel", "kRGBA" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Requires a Font to return an Array of Odyssey Block Reference.\nThis node turns the Font into a big block that contains all characters in the font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ColorModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorModel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChannelDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChannelDepth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetFontBlocks_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ColorModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ColorModel = { "ColorModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetFontBlocks_Parms, ColorModel), Z_Construct_UEnum_OdysseyBrush_EOdysseyColorModel, METADATA_PARAMS(0, nullptr) }; // 3604863109
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ChannelDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ChannelDepth = { "ChannelDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetFontBlocks_Parms, ChannelDepth), Z_Construct_UEnum_OdysseyBrush_EOdysseyChannelDepth, METADATA_PARAMS(0, nullptr) }; // 4181229900
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetFontBlocks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ColorModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ColorModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ChannelDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ChannelDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "GetFontBlocks", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::OdysseyBlockProxyFunctionLibrary_eventGetFontBlocks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::OdysseyBlockProxyFunctionLibrary_eventGetFontBlocks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execGetFontBlocks)
{
	P_GET_OBJECT(UFont,Z_Param_Font);
	P_GET_ENUM(EOdysseyColorModel,Z_Param_ColorModel);
	P_GET_ENUM(EOdysseyChannelDepth,Z_Param_ChannelDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FOdysseyBlockProxy>*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::GetFontBlocks(Z_Param_Font,EOdysseyColorModel(Z_Param_ColorModel),EOdysseyChannelDepth(Z_Param_ChannelDepth));
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function GetFontBlocks

// Begin Class UOdysseyBlockProxyFunctionLibrary Function GetFontCharacterInfo
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventGetFontCharacterInfo_Parms
	{
		const UFont* Font;
		FString String;
		TArray<FOdysseyFontCharacter> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Requires a Font and a String to return an Array of Odyssey Block Reference.\n//This node find the correspondance between letters from the String and characters from the Font.\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Requires a Font and a String to return an Array of Odyssey Block Reference.\nThis node find the correspondance between letters from the String and characters from the Font." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Font;
	static const UECodeGen_Private::FStrPropertyParams NewProp_String;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetFontCharacterInfo_Parms, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Font_MetaData), NewProp_Font_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetFontCharacterInfo_Parms, String), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_String_MetaData), NewProp_String_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOdysseyFontCharacter, METADATA_PARAMS(0, nullptr) }; // 3109802927
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetFontCharacterInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3109802927
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::NewProp_Font,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::NewProp_String,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "GetFontCharacterInfo", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::OdysseyBlockProxyFunctionLibrary_eventGetFontCharacterInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::OdysseyBlockProxyFunctionLibrary_eventGetFontCharacterInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execGetFontCharacterInfo)
{
	P_GET_OBJECT(UFont,Z_Param_Font);
	P_GET_PROPERTY(FStrProperty,Z_Param_String);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FOdysseyFontCharacter>*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::GetFontCharacterInfo(Z_Param_Font,Z_Param_String);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function GetFontCharacterInfo

// Begin Class UOdysseyBlockProxyFunctionLibrary Function GetHeight
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventGetHeight_Parms
	{
		FOdysseyBlockProxy Sample;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Returns the Height of an Odyssey Block Reference as an Integer.\n" },
		{ "DisplayName", "Get Block Height" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Returns the Height of an Odyssey Block Reference as an Integer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetHeight_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "GetHeight", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::OdysseyBlockProxyFunctionLibrary_eventGetHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::OdysseyBlockProxyFunctionLibrary_eventGetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execGetHeight)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::GetHeight(Z_Param_Sample);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function GetHeight

// Begin Class UOdysseyBlockProxyFunctionLibrary Function GetRect
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventGetRect_Parms
	{
		FOdysseyBlockProxy Block;
		FOdysseyBrushRect ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Get the Odyssey Block Reference Rectangle\n" },
		{ "DisplayName", "Get Block Rectangle" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Get the Odyssey Block Reference Rectangle" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetRect_Parms, Block), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetRect_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "GetRect", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::OdysseyBlockProxyFunctionLibrary_eventGetRect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::OdysseyBlockProxyFunctionLibrary_eventGetRect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execGetRect)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Block);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushRect*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::GetRect(Z_Param_Block);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function GetRect

// Begin Class UOdysseyBlockProxyFunctionLibrary Function GetWidth
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventGetWidth_Parms
	{
		FOdysseyBlockProxy Sample;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "Comment", "//Returns the Width of an Odyssey Block Reference as an Integer.\n" },
		{ "DisplayName", "Get Block Width" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ToolTip", "Returns the Width of an Odyssey Block Reference as an Integer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetWidth_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "GetWidth", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::OdysseyBlockProxyFunctionLibrary_eventGetWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::OdysseyBlockProxyFunctionLibrary_eventGetWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execGetWidth)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UOdysseyBlockProxyFunctionLibrary::GetWidth(Z_Param_Sample);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function GetWidth

// Begin Class UOdysseyBlockProxyFunctionLibrary Function TestIsValid
struct Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics
{
	struct OdysseyBlockProxyFunctionLibrary_eventTestIsValid_Parms
	{
		TArray<FOdysseyBlockProxy> Block;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Block" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Block_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Block;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::NewProp_Block_Inner = { "Block", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBlockProxyFunctionLibrary_eventTestIsValid_Parms, Block), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::NewProp_Block_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::NewProp_Block,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, nullptr, "TestIsValid", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::OdysseyBlockProxyFunctionLibrary_eventTestIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::OdysseyBlockProxyFunctionLibrary_eventTestIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBlockProxyFunctionLibrary::execTestIsValid)
{
	P_GET_TARRAY(FOdysseyBlockProxy,Z_Param_Block);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBlockProxyFunctionLibrary::TestIsValid(Z_Param_Block);
	P_NATIVE_END;
}
// End Class UOdysseyBlockProxyFunctionLibrary Function TestIsValid

// Begin Class UOdysseyBlockProxyFunctionLibrary
void UOdysseyBlockProxyFunctionLibrary::StaticRegisterNativesUOdysseyBlockProxyFunctionLibrary()
{
	UClass* Class = UOdysseyBlockProxyFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustAlpha", &UOdysseyBlockProxyFunctionLibrary::execAdjustAlpha },
		{ "AdjustCMYKA", &UOdysseyBlockProxyFunctionLibrary::execAdjustCMYKA },
		{ "AdjustGreyA", &UOdysseyBlockProxyFunctionLibrary::execAdjustGreyA },
		{ "AdjustHSLA", &UOdysseyBlockProxyFunctionLibrary::execAdjustHSLA },
		{ "AdjustHSVA", &UOdysseyBlockProxyFunctionLibrary::execAdjustHSVA },
		{ "AdjustLabA", &UOdysseyBlockProxyFunctionLibrary::execAdjustLabA },
		{ "AdjustRGBA", &UOdysseyBlockProxyFunctionLibrary::execAdjustRGBA },
		{ "Blend", &UOdysseyBlockProxyFunctionLibrary::execBlend },
		{ "BlendColor", &UOdysseyBlockProxyFunctionLibrary::execBlendColor },
		{ "Conv_TextureToOdysseyBlockProxy", &UOdysseyBlockProxyFunctionLibrary::execConv_TextureToOdysseyBlockProxy },
		{ "ConvertToFormat", &UOdysseyBlockProxyFunctionLibrary::execConvertToFormat },
		{ "CreateBlock", &UOdysseyBlockProxyFunctionLibrary::execCreateBlock },
		{ "CropBlock", &UOdysseyBlockProxyFunctionLibrary::execCropBlock },
		{ "Fill", &UOdysseyBlockProxyFunctionLibrary::execFill },
		{ "FillPreserveAlpha", &UOdysseyBlockProxyFunctionLibrary::execFillPreserveAlpha },
		{ "GetChannelDepth", &UOdysseyBlockProxyFunctionLibrary::execGetChannelDepth },
		{ "GetCharactersSize", &UOdysseyBlockProxyFunctionLibrary::execGetCharactersSize },
		{ "GetColorAtPosition", &UOdysseyBlockProxyFunctionLibrary::execGetColorAtPosition },
		{ "GetColorModel", &UOdysseyBlockProxyFunctionLibrary::execGetColorModel },
		{ "GetFontBlocks", &UOdysseyBlockProxyFunctionLibrary::execGetFontBlocks },
		{ "GetFontCharacterInfo", &UOdysseyBlockProxyFunctionLibrary::execGetFontCharacterInfo },
		{ "GetHeight", &UOdysseyBlockProxyFunctionLibrary::execGetHeight },
		{ "GetRect", &UOdysseyBlockProxyFunctionLibrary::execGetRect },
		{ "GetWidth", &UOdysseyBlockProxyFunctionLibrary::execGetWidth },
		{ "TestIsValid", &UOdysseyBlockProxyFunctionLibrary::execTestIsValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBlockProxyFunctionLibrary);
UClass* Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary_NoRegister()
{
	return UOdysseyBlockProxyFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyBlockProxyFunctionLibrary\n" },
		{ "IncludePath", "Proxies/OdysseyBrushBlock.h" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushBlock.h" },
		{ "ScriptName", "OdysseyBlockProxyLibrary" },
		{ "ToolTip", "UOdysseyBlockProxyFunctionLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustAlpha, "AdjustAlpha" }, // 78486774
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustCMYKA, "AdjustCMYKA" }, // 1886361431
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustGreyA, "AdjustGreyA" }, // 1585358494
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSLA, "AdjustHSLA" }, // 2001604588
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustHSVA, "AdjustHSVA" }, // 2031324246
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustLabA, "AdjustLabA" }, // 3688672297
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_AdjustRGBA, "AdjustRGBA" }, // 868415386
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Blend, "Blend" }, // 2495154679
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_BlendColor, "BlendColor" }, // 4289780976
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Conv_TextureToOdysseyBlockProxy, "Conv_TextureToOdysseyBlockProxy" }, // 2258432223
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_ConvertToFormat, "ConvertToFormat" }, // 283078668
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CreateBlock, "CreateBlock" }, // 3910620325
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_CropBlock, "CropBlock" }, // 3330747761
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_Fill, "Fill" }, // 1839938502
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_FillPreserveAlpha, "FillPreserveAlpha" }, // 2831440917
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetChannelDepth, "GetChannelDepth" }, // 3247961816
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetCharactersSize, "GetCharactersSize" }, // 1736963847
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorAtPosition, "GetColorAtPosition" }, // 111019784
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetColorModel, "GetColorModel" }, // 157699991
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontBlocks, "GetFontBlocks" }, // 2983641018
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetFontCharacterInfo, "GetFontCharacterInfo" }, // 3045127422
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetHeight, "GetHeight" }, // 1582766895
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetRect, "GetRect" }, // 3986345301
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_GetWidth, "GetWidth" }, // 2362687283
		{ &Z_Construct_UFunction_UOdysseyBlockProxyFunctionLibrary_TestIsValid, "TestIsValid" }, // 501007964
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBlockProxyFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary_Statics::ClassParams = {
	&UOdysseyBlockProxyFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOdysseyBlockProxyFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBlockProxyFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBlockProxyFunctionLibrary.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UClass* StaticClass<UOdysseyBlockProxyFunctionLibrary>()
{
	return UOdysseyBlockProxyFunctionLibrary::StaticClass();
}
UOdysseyBlockProxyFunctionLibrary::UOdysseyBlockProxyFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBlockProxyFunctionLibrary);
UOdysseyBlockProxyFunctionLibrary::~UOdysseyBlockProxyFunctionLibrary() {}
// End Class UOdysseyBlockProxyFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOdysseyBlockProxy::StaticStruct, Z_Construct_UScriptStruct_FOdysseyBlockProxy_Statics::NewStructOps, TEXT("OdysseyBlockProxy"), &Z_Registration_Info_UScriptStruct_OdysseyBlockProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOdysseyBlockProxy), 1186883968U) },
		{ FOdysseyFontCharacter::StaticStruct, Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics::NewStructOps, TEXT("OdysseyFontCharacter"), &Z_Registration_Info_UScriptStruct_OdysseyFontCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOdysseyFontCharacter), 3109802927U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary, UOdysseyBlockProxyFunctionLibrary::StaticClass, TEXT("UOdysseyBlockProxyFunctionLibrary"), &Z_Registration_Info_UClass_UOdysseyBlockProxyFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBlockProxyFunctionLibrary), 1233582665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_1314540396(TEXT("/Script/OdysseyBrush"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
