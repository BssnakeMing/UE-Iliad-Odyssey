// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushTransform.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushBlock.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushRect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushTransform() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyTransformProxyLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyTransformProxyLibrary_NoRegister();
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EResamplingMethod();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBlockProxy();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBrushRect();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyMatrix();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin ScriptStruct FOdysseyMatrix
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OdysseyMatrix;
class UScriptStruct* FOdysseyMatrix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyMatrix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OdysseyMatrix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOdysseyMatrix, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("OdysseyMatrix"));
	}
	return Z_Registration_Info_UScriptStruct_OdysseyMatrix.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<FOdysseyMatrix>()
{
	return FOdysseyMatrix::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOdysseyMatrix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////\n// Odyssey Matrix\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Odyssey Matrix" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOdysseyMatrix>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOdysseyMatrix_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	&NewStructOps,
	"OdysseyMatrix",
	nullptr,
	0,
	sizeof(FOdysseyMatrix),
	alignof(FOdysseyMatrix),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyMatrix_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOdysseyMatrix_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOdysseyMatrix()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyMatrix.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OdysseyMatrix.InnerSingleton, Z_Construct_UScriptStruct_FOdysseyMatrix_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OdysseyMatrix.InnerSingleton;
}
// End ScriptStruct FOdysseyMatrix

// Begin Enum EResamplingMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EResamplingMethod;
static UEnum* EResamplingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EResamplingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EResamplingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("EResamplingMethod"));
	}
	return Z_Registration_Info_UEnum_EResamplingMethod.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UEnum* StaticEnum<EResamplingMethod>()
{
	return EResamplingMethod_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyBrush_EResamplingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////\n// Odyssey Resampling\n" },
		{ "DisplayName", "EOdysseyResamplingMethod" },
		{ "kArea.DisplayName", "Area" },
		{ "kArea.Name", "EResamplingMethod::kArea" },
		{ "kBicubic.DisplayName", "Bicubic" },
		{ "kBicubic.Name", "EResamplingMethod::kBicubic" },
		{ "kBilinear.DisplayName", "Bilinear" },
		{ "kBilinear.Name", "EResamplingMethod::kBilinear" },
		{ "kNearestNeighbour.DisplayName", "Nearest Neighbour" },
		{ "kNearestNeighbour.Name", "EResamplingMethod::kNearestNeighbour" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Odyssey Resampling" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EResamplingMethod::kNearestNeighbour", (int64)EResamplingMethod::kNearestNeighbour },
		{ "EResamplingMethod::kBilinear", (int64)EResamplingMethod::kBilinear },
		{ "EResamplingMethod::kBicubic", (int64)EResamplingMethod::kBicubic },
		{ "EResamplingMethod::kArea", (int64)EResamplingMethod::kArea },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyBrush_EResamplingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	"EResamplingMethod",
	"EResamplingMethod",
	Z_Construct_UEnum_OdysseyBrush_EResamplingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyBrush_EResamplingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyBrush_EResamplingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyBrush_EResamplingMethod()
{
	if (!Z_Registration_Info_UEnum_EResamplingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EResamplingMethod.InnerSingleton, Z_Construct_UEnum_OdysseyBrush_EResamplingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EResamplingMethod.InnerSingleton;
}
// End Enum EResamplingMethod

// Begin Class UOdysseyTransformProxyLibrary Function ComposeMatrix
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics
{
	struct OdysseyTransformProxyLibrary_eventComposeMatrix_Parms
	{
		FOdysseyMatrix First;
		FOdysseyMatrix Second;
		FOdysseyMatrix ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Matrix" },
		{ "Comment", "//Composes a Matrix with several Matrices.\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Composes a Matrix with several Matrices." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_First_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Second_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_First;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Second;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::NewProp_First = { "First", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventComposeMatrix_Parms, First), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_First_MetaData), NewProp_First_MetaData) }; // 1505219887
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::NewProp_Second = { "Second", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventComposeMatrix_Parms, Second), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Second_MetaData), NewProp_Second_MetaData) }; // 1505219887
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventComposeMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(0, nullptr) }; // 1505219887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::NewProp_First,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::NewProp_Second,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "ComposeMatrix", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::OdysseyTransformProxyLibrary_eventComposeMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::OdysseyTransformProxyLibrary_eventComposeMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execComposeMatrix)
{
	P_GET_STRUCT_REF(FOdysseyMatrix,Z_Param_Out_First);
	P_GET_STRUCT_REF(FOdysseyMatrix,Z_Param_Out_Second);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyMatrix*)Z_Param__Result=UOdysseyTransformProxyLibrary::ComposeMatrix(Z_Param_Out_First,Z_Param_Out_Second);
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function ComposeMatrix

// Begin Class UOdysseyTransformProxyLibrary Function FlipX
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics
{
	struct OdysseyTransformProxyLibrary_eventFlipX_Parms
	{
		FOdysseyBlockProxy Sample;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Flips an Odyssey Block Reference on horizontal axis.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Flips an Odyssey Block Reference on horizontal axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventFlipX_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventFlipX_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventFlipX_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "FlipX", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::OdysseyTransformProxyLibrary_eventFlipX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::OdysseyTransformProxyLibrary_eventFlipX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execFlipX)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::FlipX(Z_Param_Sample,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function FlipX

// Begin Class UOdysseyTransformProxyLibrary Function FlipXY
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics
{
	struct OdysseyTransformProxyLibrary_eventFlipXY_Parms
	{
		FOdysseyBlockProxy Sample;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Flips an Odyssey Block Reference on horizontal and vertical axis.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Flips an Odyssey Block Reference on horizontal and vertical axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventFlipXY_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventFlipXY_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventFlipXY_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "FlipXY", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::OdysseyTransformProxyLibrary_eventFlipXY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::OdysseyTransformProxyLibrary_eventFlipXY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execFlipXY)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::FlipXY(Z_Param_Sample,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function FlipXY

// Begin Class UOdysseyTransformProxyLibrary Function FlipY
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics
{
	struct OdysseyTransformProxyLibrary_eventFlipY_Parms
	{
		FOdysseyBlockProxy Sample;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Flips an Odyssey Block Reference on vertical axis.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Flips an Odyssey Block Reference on vertical axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventFlipY_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventFlipY_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventFlipY_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "FlipY", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::OdysseyTransformProxyLibrary_eventFlipY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::OdysseyTransformProxyLibrary_eventFlipY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execFlipY)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::FlipY(Z_Param_Sample,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function FlipY

// Begin Class UOdysseyTransformProxyLibrary Function GetMatrixResultRect
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics
{
	struct OdysseyTransformProxyLibrary_eventGetMatrixResultRect_Parms
	{
		FOdysseyMatrix Matrix;
		FOdysseyBrushRect Rectangle;
		EResamplingMethod ResamplingMethod;
		FOdysseyBrushRect ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Matrix" },
		{ "Comment", "//Returns the resulting rectangle of a matrix as if it were applied on the given Rectangle with the given ResamplingMethod\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Returns the resulting rectangle of a matrix as if it were applied on the given Rectangle with the given ResamplingMethod" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rectangle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rectangle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventGetMatrixResultRect_Parms, Matrix), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Matrix_MetaData), NewProp_Matrix_MetaData) }; // 1505219887
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::NewProp_Rectangle = { "Rectangle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventGetMatrixResultRect_Parms, Rectangle), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rectangle_MetaData), NewProp_Rectangle_MetaData) }; // 816871960
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventGetMatrixResultRect_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventGetMatrixResultRect_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::NewProp_Matrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::NewProp_Rectangle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "GetMatrixResultRect", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::OdysseyTransformProxyLibrary_eventGetMatrixResultRect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::OdysseyTransformProxyLibrary_eventGetMatrixResultRect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execGetMatrixResultRect)
{
	P_GET_STRUCT_REF(FOdysseyMatrix,Z_Param_Out_Matrix);
	P_GET_STRUCT_REF(FOdysseyBrushRect,Z_Param_Out_Rectangle);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushRect*)Z_Param__Result=UOdysseyTransformProxyLibrary::GetMatrixResultRect(Z_Param_Out_Matrix,Z_Param_Out_Rectangle,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function GetMatrixResultRect

// Begin Class UOdysseyTransformProxyLibrary Function GetPerspectiveMatrixResultRect
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics
{
	struct OdysseyTransformProxyLibrary_eventGetPerspectiveMatrixResultRect_Parms
	{
		FOdysseyMatrix PerspectiveMatrix;
		FOdysseyBrushRect Rectangle;
		EResamplingMethod ResamplingMethod;
		FOdysseyBrushRect ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Matrix" },
		{ "Comment", "//Returns the resulting rectangle of a perspective matrix as if it were applied on the given Rectangle with the given ResamplingMethod\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Returns the resulting rectangle of a perspective matrix as if it were applied on the given Rectangle with the given ResamplingMethod" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerspectiveMatrix_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rectangle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerspectiveMatrix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rectangle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::NewProp_PerspectiveMatrix = { "PerspectiveMatrix", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventGetPerspectiveMatrixResultRect_Parms, PerspectiveMatrix), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerspectiveMatrix_MetaData), NewProp_PerspectiveMatrix_MetaData) }; // 1505219887
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::NewProp_Rectangle = { "Rectangle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventGetPerspectiveMatrixResultRect_Parms, Rectangle), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rectangle_MetaData), NewProp_Rectangle_MetaData) }; // 816871960
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventGetPerspectiveMatrixResultRect_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventGetPerspectiveMatrixResultRect_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::NewProp_PerspectiveMatrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::NewProp_Rectangle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "GetPerspectiveMatrixResultRect", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::OdysseyTransformProxyLibrary_eventGetPerspectiveMatrixResultRect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::OdysseyTransformProxyLibrary_eventGetPerspectiveMatrixResultRect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execGetPerspectiveMatrixResultRect)
{
	P_GET_STRUCT_REF(FOdysseyMatrix,Z_Param_Out_PerspectiveMatrix);
	P_GET_STRUCT_REF(FOdysseyBrushRect,Z_Param_Out_Rectangle);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushRect*)Z_Param__Result=UOdysseyTransformProxyLibrary::GetPerspectiveMatrixResultRect(Z_Param_Out_PerspectiveMatrix,Z_Param_Out_Rectangle,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function GetPerspectiveMatrixResultRect

// Begin Class UOdysseyTransformProxyLibrary Function MakeIdentityMatrix
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics
{
	struct OdysseyTransformProxyLibrary_eventMakeIdentityMatrix_Parms
	{
		FOdysseyMatrix ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Matrix" },
		{ "Comment", "//Sends a neutral value.\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Sends a neutral value." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeIdentityMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(0, nullptr) }; // 1505219887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "MakeIdentityMatrix", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::OdysseyTransformProxyLibrary_eventMakeIdentityMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::OdysseyTransformProxyLibrary_eventMakeIdentityMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execMakeIdentityMatrix)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyMatrix*)Z_Param__Result=UOdysseyTransformProxyLibrary::MakeIdentityMatrix();
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function MakeIdentityMatrix

// Begin Class UOdysseyTransformProxyLibrary Function MakePerspectiveMatrix
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics
{
	struct OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms
	{
		FVector2D SrcA;
		FVector2D SrcB;
		FVector2D SrcC;
		FVector2D SrcD;
		FVector2D DstA;
		FVector2D DstB;
		FVector2D DstC;
		FVector2D DstD;
		FOdysseyMatrix ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Matrix" },
		{ "Comment", "//Require the 4 source and destination points to be a non-concave quadrilateral\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Require the 4 source and destination points to be a non-concave quadrilateral" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SrcA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SrcB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SrcC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SrcD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DstA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DstB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DstC;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DstD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_SrcA = { "SrcA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms, SrcA), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_SrcB = { "SrcB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms, SrcB), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_SrcC = { "SrcC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms, SrcC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_SrcD = { "SrcD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms, SrcD), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_DstA = { "DstA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms, DstA), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_DstB = { "DstB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms, DstB), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_DstC = { "DstC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms, DstC), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_DstD = { "DstD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms, DstD), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(0, nullptr) }; // 1505219887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_SrcA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_SrcB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_SrcC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_SrcD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_DstA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_DstB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_DstC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_DstD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "MakePerspectiveMatrix", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::OdysseyTransformProxyLibrary_eventMakePerspectiveMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execMakePerspectiveMatrix)
{
	P_GET_STRUCT(FVector2D,Z_Param_SrcA);
	P_GET_STRUCT(FVector2D,Z_Param_SrcB);
	P_GET_STRUCT(FVector2D,Z_Param_SrcC);
	P_GET_STRUCT(FVector2D,Z_Param_SrcD);
	P_GET_STRUCT(FVector2D,Z_Param_DstA);
	P_GET_STRUCT(FVector2D,Z_Param_DstB);
	P_GET_STRUCT(FVector2D,Z_Param_DstC);
	P_GET_STRUCT(FVector2D,Z_Param_DstD);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyMatrix*)Z_Param__Result=UOdysseyTransformProxyLibrary::MakePerspectiveMatrix(Z_Param_SrcA,Z_Param_SrcB,Z_Param_SrcC,Z_Param_SrcD,Z_Param_DstA,Z_Param_DstB,Z_Param_DstC,Z_Param_DstD);
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function MakePerspectiveMatrix

// Begin Class UOdysseyTransformProxyLibrary Function MakeRotationMatrix
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics
{
	struct OdysseyTransformProxyLibrary_eventMakeRotationMatrix_Parms
	{
		float Angle;
		FOdysseyMatrix ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Matrix" },
		{ "Comment", "//Requires an angle (float) to generate a rotation.\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Requires an angle (float) to generate a rotation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeRotationMatrix_Parms, Angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeRotationMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(0, nullptr) }; // 1505219887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "MakeRotationMatrix", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::OdysseyTransformProxyLibrary_eventMakeRotationMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::OdysseyTransformProxyLibrary_eventMakeRotationMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execMakeRotationMatrix)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyMatrix*)Z_Param__Result=UOdysseyTransformProxyLibrary::MakeRotationMatrix(Z_Param_Angle);
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function MakeRotationMatrix

// Begin Class UOdysseyTransformProxyLibrary Function MakeScaleMatrix
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics
{
	struct OdysseyTransformProxyLibrary_eventMakeScaleMatrix_Parms
	{
		float ScaleX;
		float ScaleY;
		FOdysseyMatrix ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Matrix" },
		{ "Comment", "// Requires a normalized float (0.5 = 50% | 1 = 100%) to rescale a Matrix on X and Y axis.\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Requires a normalized float (0.5 = 50% | 1 = 100%) to rescale a Matrix on X and Y axis." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeScaleMatrix_Parms, ScaleX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeScaleMatrix_Parms, ScaleY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeScaleMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(0, nullptr) }; // 1505219887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::NewProp_ScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::NewProp_ScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "MakeScaleMatrix", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::OdysseyTransformProxyLibrary_eventMakeScaleMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::OdysseyTransformProxyLibrary_eventMakeScaleMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execMakeScaleMatrix)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyMatrix*)Z_Param__Result=UOdysseyTransformProxyLibrary::MakeScaleMatrix(Z_Param_ScaleX,Z_Param_ScaleY);
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function MakeScaleMatrix

// Begin Class UOdysseyTransformProxyLibrary Function MakeShearMatrix
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics
{
	struct OdysseyTransformProxyLibrary_eventMakeShearMatrix_Parms
	{
		float ShearX;
		float ShearY;
		FOdysseyMatrix ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Matrix" },
		{ "Comment", "//Requires a normalized float (0.5 = 50% | 1 = 100%) to shear a Matrix on X and Y axis.\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Requires a normalized float (0.5 = 50% | 1 = 100%) to shear a Matrix on X and Y axis." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShearX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShearY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::NewProp_ShearX = { "ShearX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeShearMatrix_Parms, ShearX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::NewProp_ShearY = { "ShearY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeShearMatrix_Parms, ShearY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeShearMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(0, nullptr) }; // 1505219887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::NewProp_ShearX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::NewProp_ShearY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "MakeShearMatrix", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::OdysseyTransformProxyLibrary_eventMakeShearMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::OdysseyTransformProxyLibrary_eventMakeShearMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execMakeShearMatrix)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ShearX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ShearY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyMatrix*)Z_Param__Result=UOdysseyTransformProxyLibrary::MakeShearMatrix(Z_Param_ShearX,Z_Param_ShearY);
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function MakeShearMatrix

// Begin Class UOdysseyTransformProxyLibrary Function MakeTranslationMatrix
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics
{
	struct OdysseyTransformProxyLibrary_eventMakeTranslationMatrix_Parms
	{
		float DeltaX;
		float DeltaY;
		FOdysseyMatrix ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeTranslationMatrix_Parms, DeltaX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::NewProp_DeltaY = { "DeltaY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeTranslationMatrix_Parms, DeltaY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventMakeTranslationMatrix_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(0, nullptr) }; // 1505219887
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::NewProp_DeltaX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::NewProp_DeltaY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "MakeTranslationMatrix", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::OdysseyTransformProxyLibrary_eventMakeTranslationMatrix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::OdysseyTransformProxyLibrary_eventMakeTranslationMatrix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execMakeTranslationMatrix)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyMatrix*)Z_Param__Result=UOdysseyTransformProxyLibrary::MakeTranslationMatrix(Z_Param_DeltaX,Z_Param_DeltaY);
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function MakeTranslationMatrix

// Begin Class UOdysseyTransformProxyLibrary Function Perspective
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics
{
	struct OdysseyTransformProxyLibrary_eventPerspective_Parms
	{
		FOdysseyBlockProxy Sample;
		FOdysseyMatrix PerspectiveMatrix;
		int32 OutputWidth;
		int32 OutputHeight;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Flips an Odyssey Block Reference on horizontal and vertical axis.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Flips an Odyssey Block Reference on horizontal and vertical axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerspectiveMatrix;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputHeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventPerspective_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_PerspectiveMatrix = { "PerspectiveMatrix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventPerspective_Parms, PerspectiveMatrix), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(0, nullptr) }; // 1505219887
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_OutputWidth = { "OutputWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventPerspective_Parms, OutputWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_OutputHeight = { "OutputHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventPerspective_Parms, OutputHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventPerspective_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventPerspective_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_PerspectiveMatrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_OutputWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_OutputHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "Perspective", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::OdysseyTransformProxyLibrary_eventPerspective_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::OdysseyTransformProxyLibrary_eventPerspective_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execPerspective)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_STRUCT(FOdysseyMatrix,Z_Param_PerspectiveMatrix);
	P_GET_PROPERTY(FIntProperty,Z_Param_OutputWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_OutputHeight);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::Perspective(Z_Param_Sample,Z_Param_PerspectiveMatrix,Z_Param_OutputWidth,Z_Param_OutputHeight,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function Perspective

// Begin Class UOdysseyTransformProxyLibrary Function Resize
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics
{
	struct OdysseyTransformProxyLibrary_eventResize_Parms
	{
		FOdysseyBlockProxy Sample;
		float SizeX;
		float SizeY;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Requires a Float in pixels to resize an Odyssey Block Reference on X and Y axis.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Requires a Float in pixels to resize an Odyssey Block Reference on X and Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventResize_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventResize_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventResize_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventResize_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventResize_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "Resize", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::OdysseyTransformProxyLibrary_eventResize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::OdysseyTransformProxyLibrary_eventResize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execResize)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SizeX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SizeY);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::Resize(Z_Param_Sample,Z_Param_SizeX,Z_Param_SizeY,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function Resize

// Begin Class UOdysseyTransformProxyLibrary Function ResizeUniform
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics
{
	struct OdysseyTransformProxyLibrary_eventResizeUniform_Parms
	{
		FOdysseyBlockProxy Sample;
		float Size;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Requires a Float in pixels to resize an Odyssey Block Reference uniformly.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Requires a Float in pixels to resize an Odyssey Block Reference uniformly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventResizeUniform_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventResizeUniform_Parms, Size), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventResizeUniform_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventResizeUniform_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "ResizeUniform", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::OdysseyTransformProxyLibrary_eventResizeUniform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::OdysseyTransformProxyLibrary_eventResizeUniform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execResizeUniform)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::ResizeUniform(Z_Param_Sample,Z_Param_Size,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function ResizeUniform

// Begin Class UOdysseyTransformProxyLibrary Function Rotate
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics
{
	struct OdysseyTransformProxyLibrary_eventRotate_Parms
	{
		FOdysseyBlockProxy Sample;
		float Angle;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Requires an angle (Float) to rotate an Odyssey Block Reference.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Requires an angle (Float) to rotate an Odyssey Block Reference." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventRotate_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventRotate_Parms, Angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventRotate_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventRotate_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "Rotate", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::OdysseyTransformProxyLibrary_eventRotate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::OdysseyTransformProxyLibrary_eventRotate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execRotate)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::Rotate(Z_Param_Sample,Z_Param_Angle,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function Rotate

// Begin Class UOdysseyTransformProxyLibrary Function ScaleUniform
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics
{
	struct OdysseyTransformProxyLibrary_eventScaleUniform_Parms
	{
		FOdysseyBlockProxy Sample;
		float Scale;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Requires a normalized Float (0.5 = 50% | 1 = 100%) to rescale an Odyssey Block Reference uniformly.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Requires a normalized Float (0.5 = 50% | 1 = 100%) to rescale an Odyssey Block Reference uniformly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventScaleUniform_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventScaleUniform_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventScaleUniform_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventScaleUniform_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "ScaleUniform", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::OdysseyTransformProxyLibrary_eventScaleUniform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::OdysseyTransformProxyLibrary_eventScaleUniform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execScaleUniform)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::ScaleUniform(Z_Param_Sample,Z_Param_Scale,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function ScaleUniform

// Begin Class UOdysseyTransformProxyLibrary Function ScaleXY
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics
{
	struct OdysseyTransformProxyLibrary_eventScaleXY_Parms
	{
		FOdysseyBlockProxy Sample;
		float ScaleX;
		float ScaleY;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Requires a normalized Float (0.5 = 50% | 1 = 100%) to rescale an Odyssey Block Reference on X and Y axis.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Requires a normalized Float (0.5 = 50% | 1 = 100%) to rescale an Odyssey Block Reference on X and Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventScaleXY_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventScaleXY_Parms, ScaleX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventScaleXY_Parms, ScaleY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventScaleXY_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventScaleXY_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_ScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_ScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "ScaleXY", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::OdysseyTransformProxyLibrary_eventScaleXY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::OdysseyTransformProxyLibrary_eventScaleXY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execScaleXY)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleY);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::ScaleXY(Z_Param_Sample,Z_Param_ScaleX,Z_Param_ScaleY,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function ScaleXY

// Begin Class UOdysseyTransformProxyLibrary Function Shear
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics
{
	struct OdysseyTransformProxyLibrary_eventShear_Parms
	{
		FOdysseyBlockProxy Sample;
		float ShearX;
		float ShearY;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Requires a normalized Float (0.5 = 50% | 1 = 100%) to shear an Odyssey Block Reference.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Requires a normalized Float (0.5 = 50% | 1 = 100%) to shear an Odyssey Block Reference." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShearX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShearY;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventShear_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_ShearX = { "ShearX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventShear_Parms, ShearX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_ShearY = { "ShearY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventShear_Parms, ShearY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventShear_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventShear_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_ShearX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_ShearY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "Shear", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::OdysseyTransformProxyLibrary_eventShear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::OdysseyTransformProxyLibrary_eventShear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execShear)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ShearX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ShearY);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::Shear(Z_Param_Sample,Z_Param_ShearX,Z_Param_ShearY,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function Shear

// Begin Class UOdysseyTransformProxyLibrary Function Transform
struct Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics
{
	struct OdysseyTransformProxyLibrary_eventTransform_Parms
	{
		FOdysseyBlockProxy Sample;
		FOdysseyMatrix Transform;
		int32 OutputWidth;
		int32 OutputHeight;
		EResamplingMethod ResamplingMethod;
		FOdysseyBlockProxy ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Transform" },
		{ "Comment", "//Requires an Odyssey Matrix input and an Odyssey Block Reference to transform.\n" },
		{ "CPP_Default_ResamplingMethod", "kNearestNeighbour" },
		{ "KeyWords", "Matrix" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ToolTip", "Requires an Odyssey Matrix input and an Odyssey Block Reference to transform." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sample_MetaData[] = {
		{ "DisplayName", "Block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sample;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputHeight;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResamplingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResamplingMethod;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_Sample = { "Sample", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventTransform_Parms, Sample), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sample_MetaData), NewProp_Sample_MetaData) }; // 1186883968
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventTransform_Parms, Transform), Z_Construct_UScriptStruct_FOdysseyMatrix, METADATA_PARAMS(0, nullptr) }; // 1505219887
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_OutputWidth = { "OutputWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventTransform_Parms, OutputWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_OutputHeight = { "OutputHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventTransform_Parms, OutputHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_ResamplingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_ResamplingMethod = { "ResamplingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventTransform_Parms, ResamplingMethod), Z_Construct_UEnum_OdysseyBrush_EResamplingMethod, METADATA_PARAMS(0, nullptr) }; // 959035312
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTransformProxyLibrary_eventTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBlockProxy, METADATA_PARAMS(0, nullptr) }; // 1186883968
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_Sample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_OutputWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_OutputHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_ResamplingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_ResamplingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTransformProxyLibrary, nullptr, "Transform", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::OdysseyTransformProxyLibrary_eventTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::OdysseyTransformProxyLibrary_eventTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTransformProxyLibrary::execTransform)
{
	P_GET_STRUCT(FOdysseyBlockProxy,Z_Param_Sample);
	P_GET_STRUCT(FOdysseyMatrix,Z_Param_Transform);
	P_GET_PROPERTY(FIntProperty,Z_Param_OutputWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_OutputHeight);
	P_GET_ENUM(EResamplingMethod,Z_Param_ResamplingMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBlockProxy*)Z_Param__Result=UOdysseyTransformProxyLibrary::Transform(Z_Param_Sample,Z_Param_Transform,Z_Param_OutputWidth,Z_Param_OutputHeight,EResamplingMethod(Z_Param_ResamplingMethod));
	P_NATIVE_END;
}
// End Class UOdysseyTransformProxyLibrary Function Transform

// Begin Class UOdysseyTransformProxyLibrary
void UOdysseyTransformProxyLibrary::StaticRegisterNativesUOdysseyTransformProxyLibrary()
{
	UClass* Class = UOdysseyTransformProxyLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComposeMatrix", &UOdysseyTransformProxyLibrary::execComposeMatrix },
		{ "FlipX", &UOdysseyTransformProxyLibrary::execFlipX },
		{ "FlipXY", &UOdysseyTransformProxyLibrary::execFlipXY },
		{ "FlipY", &UOdysseyTransformProxyLibrary::execFlipY },
		{ "GetMatrixResultRect", &UOdysseyTransformProxyLibrary::execGetMatrixResultRect },
		{ "GetPerspectiveMatrixResultRect", &UOdysseyTransformProxyLibrary::execGetPerspectiveMatrixResultRect },
		{ "MakeIdentityMatrix", &UOdysseyTransformProxyLibrary::execMakeIdentityMatrix },
		{ "MakePerspectiveMatrix", &UOdysseyTransformProxyLibrary::execMakePerspectiveMatrix },
		{ "MakeRotationMatrix", &UOdysseyTransformProxyLibrary::execMakeRotationMatrix },
		{ "MakeScaleMatrix", &UOdysseyTransformProxyLibrary::execMakeScaleMatrix },
		{ "MakeShearMatrix", &UOdysseyTransformProxyLibrary::execMakeShearMatrix },
		{ "MakeTranslationMatrix", &UOdysseyTransformProxyLibrary::execMakeTranslationMatrix },
		{ "Perspective", &UOdysseyTransformProxyLibrary::execPerspective },
		{ "Resize", &UOdysseyTransformProxyLibrary::execResize },
		{ "ResizeUniform", &UOdysseyTransformProxyLibrary::execResizeUniform },
		{ "Rotate", &UOdysseyTransformProxyLibrary::execRotate },
		{ "ScaleUniform", &UOdysseyTransformProxyLibrary::execScaleUniform },
		{ "ScaleXY", &UOdysseyTransformProxyLibrary::execScaleXY },
		{ "Shear", &UOdysseyTransformProxyLibrary::execShear },
		{ "Transform", &UOdysseyTransformProxyLibrary::execTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyTransformProxyLibrary);
UClass* Z_Construct_UClass_UOdysseyTransformProxyLibrary_NoRegister()
{
	return UOdysseyTransformProxyLibrary::StaticClass();
}
struct Z_Construct_UClass_UOdysseyTransformProxyLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyTransformProxyLibrary\n" },
		{ "IncludePath", "Proxies/OdysseyBrushTransform.h" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushTransform.h" },
		{ "ScriptName", "OdysseyTransformLibrary" },
		{ "ToolTip", "UOdysseyTransformProxyLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ComposeMatrix, "ComposeMatrix" }, // 43190037
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipX, "FlipX" }, // 75656723
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipXY, "FlipXY" }, // 2676952844
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_FlipY, "FlipY" }, // 3936928338
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetMatrixResultRect, "GetMatrixResultRect" }, // 2310632933
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_GetPerspectiveMatrixResultRect, "GetPerspectiveMatrixResultRect" }, // 3783348016
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeIdentityMatrix, "MakeIdentityMatrix" }, // 674047590
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakePerspectiveMatrix, "MakePerspectiveMatrix" }, // 4128388309
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeRotationMatrix, "MakeRotationMatrix" }, // 1831588303
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeScaleMatrix, "MakeScaleMatrix" }, // 4160949873
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeShearMatrix, "MakeShearMatrix" }, // 3535387962
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_MakeTranslationMatrix, "MakeTranslationMatrix" }, // 1833025648
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Perspective, "Perspective" }, // 3719518712
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Resize, "Resize" }, // 2048372787
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ResizeUniform, "ResizeUniform" }, // 4219186561
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Rotate, "Rotate" }, // 2404817488
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleUniform, "ScaleUniform" }, // 1851400372
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_ScaleXY, "ScaleXY" }, // 3772697774
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Shear, "Shear" }, // 3259377316
		{ &Z_Construct_UFunction_UOdysseyTransformProxyLibrary_Transform, "Transform" }, // 3197717493
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyTransformProxyLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyTransformProxyLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTransformProxyLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyTransformProxyLibrary_Statics::ClassParams = {
	&UOdysseyTransformProxyLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTransformProxyLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyTransformProxyLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyTransformProxyLibrary()
{
	if (!Z_Registration_Info_UClass_UOdysseyTransformProxyLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyTransformProxyLibrary.OuterSingleton, Z_Construct_UClass_UOdysseyTransformProxyLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyTransformProxyLibrary.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UClass* StaticClass<UOdysseyTransformProxyLibrary>()
{
	return UOdysseyTransformProxyLibrary::StaticClass();
}
UOdysseyTransformProxyLibrary::UOdysseyTransformProxyLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyTransformProxyLibrary);
UOdysseyTransformProxyLibrary::~UOdysseyTransformProxyLibrary() {}
// End Class UOdysseyTransformProxyLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EResamplingMethod_StaticEnum, TEXT("EResamplingMethod"), &Z_Registration_Info_UEnum_EResamplingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 959035312U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOdysseyMatrix::StaticStruct, Z_Construct_UScriptStruct_FOdysseyMatrix_Statics::NewStructOps, TEXT("OdysseyMatrix"), &Z_Registration_Info_UScriptStruct_OdysseyMatrix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOdysseyMatrix), 1505219887U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyTransformProxyLibrary, UOdysseyTransformProxyLibrary::StaticClass, TEXT("UOdysseyTransformProxyLibrary"), &Z_Registration_Info_UClass_UOdysseyTransformProxyLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyTransformProxyLibrary), 1307489214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_2488961196(TEXT("/Script/OdysseyBrush"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
