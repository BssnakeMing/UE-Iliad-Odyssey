// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyLayerStack/Public/OdysseyLayer.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyLayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayer();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayer_NoRegister();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayerStack_NoRegister();
ODYSSEYLAYERSTACK_API UEnum* Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_OdysseyLayerStack();
// End Cross Module References

// Begin Enum EGetLayerChildrenMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGetLayerChildrenMethod;
static UEnum* EGetLayerChildrenMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGetLayerChildrenMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGetLayerChildrenMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod, (UObject*)Z_Construct_UPackage__Script_OdysseyLayerStack(), TEXT("EGetLayerChildrenMethod"));
	}
	return Z_Registration_Info_UEnum_EGetLayerChildrenMethod.OuterSingleton;
}
template<> ODYSSEYLAYERSTACK_API UEnum* StaticEnum<EGetLayerChildrenMethod>()
{
	return EGetLayerChildrenMethod_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BreadthFirst.Name", "EGetLayerChildrenMethod::BreadthFirst" },
		{ "DepthFirst.Name", "EGetLayerChildrenMethod::DepthFirst" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGetLayerChildrenMethod::DepthFirst", (int64)EGetLayerChildrenMethod::DepthFirst },
		{ "EGetLayerChildrenMethod::BreadthFirst", (int64)EGetLayerChildrenMethod::BreadthFirst },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyLayerStack,
	nullptr,
	"EGetLayerChildrenMethod",
	"EGetLayerChildrenMethod",
	Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod()
{
	if (!Z_Registration_Info_UEnum_EGetLayerChildrenMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGetLayerChildrenMethod.InnerSingleton, Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGetLayerChildrenMethod.InnerSingleton;
}
// End Enum EGetLayerChildrenMethod

// Begin Class UOdysseyLayer Function GetChildren
struct Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics
{
	struct OdysseyLayer_eventGetChildren_Parms
	{
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns the Layer children recursively\n     *\n     * @param Layer\n     * @return int\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Returns the Layer children recursively\n\n@param Layer\n@return int" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventGetChildren_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "GetChildren", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::OdysseyLayer_eventGetChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::OdysseyLayer_eventGetChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayer_GetChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_GetChildren_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execGetChildren)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=P_THIS->GetChildren();
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function GetChildren

// Begin Class UOdysseyLayer Function GetChildrenRecursively
struct Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics
{
	struct OdysseyLayer_eventGetChildrenRecursively_Parms
	{
		EGetLayerChildrenMethod Method;
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns the Layer children recursively\n     *\n     * @param Layer\n     * @return int\n     */" },
		{ "CPP_Default_Method", "DepthFirst" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Returns the Layer children recursively\n\n@param Layer\n@return int" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventGetChildrenRecursively_Parms, Method), Z_Construct_UEnum_OdysseyLayerStack_EGetLayerChildrenMethod, METADATA_PARAMS(0, nullptr) }; // 1701343048
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventGetChildrenRecursively_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::NewProp_Method_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::NewProp_Method,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "GetChildrenRecursively", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::OdysseyLayer_eventGetChildrenRecursively_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::OdysseyLayer_eventGetChildrenRecursively_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execGetChildrenRecursively)
{
	P_GET_ENUM(EGetLayerChildrenMethod,Z_Param_Method);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=P_THIS->GetChildrenRecursively(EGetLayerChildrenMethod(Z_Param_Method));
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function GetChildrenRecursively

// Begin Class UOdysseyLayer Function GetIndexInParent
struct Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics
{
	struct OdysseyLayer_eventGetIndexInParent_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns the Layer index in its parent\n     *\n     * @param Layer\n     * @return int\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Returns the Layer index in its parent\n\n@param Layer\n@return int" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventGetIndexInParent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "GetIndexInParent", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::OdysseyLayer_eventGetIndexInParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::OdysseyLayer_eventGetIndexInParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execGetIndexInParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIndexInParent();
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function GetIndexInParent

// Begin Class UOdysseyLayer Function GetLayerStack
struct Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics
{
	struct OdysseyLayer_eventGetLayerStack_Parms
	{
		UOdysseyLayerStack* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n\x09 * @brief Returns the topmost parent of this node\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Returns the topmost parent of this node" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventGetLayerStack_Parms, ReturnValue), Z_Construct_UClass_UOdysseyLayerStack_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "GetLayerStack", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::OdysseyLayer_eventGetLayerStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::OdysseyLayer_eventGetLayerStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayer_GetLayerStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_GetLayerStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execGetLayerStack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyLayerStack**)Z_Param__Result=P_THIS->GetLayerStack();
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function GetLayerStack

// Begin Class UOdysseyLayer Function GetMergeDefaultLayerTypes
struct Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics
{
	struct OdysseyLayer_eventGetMergeDefaultLayerTypes_Parms
	{
		TSet<UClass*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns the layer types generated by this layer if a merge is called on it right now\n     * Can change depending on the layer content or configuration (ex: layer folder children layer types)\n     * \n     * @return TSet<UClass*> \n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Returns the layer types generated by this layer if a merge is called on it right now\nCan change depending on the layer content or configuration (ex: layer folder children layer types)\n\n@return TSet<UClass*>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventGetMergeDefaultLayerTypes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "GetMergeDefaultLayerTypes", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::OdysseyLayer_eventGetMergeDefaultLayerTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::OdysseyLayer_eventGetMergeDefaultLayerTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execGetMergeDefaultLayerTypes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<UClass*>*)Z_Param__Result=P_THIS->GetMergeDefaultLayerTypes();
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function GetMergeDefaultLayerTypes

// Begin Class UOdysseyLayer Function GetMergeLayerTypesFromTypes
struct Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics
{
	struct OdysseyLayer_eventGetMergeLayerTypesFromTypes_Parms
	{
		TSet<UClass*> iLayerTypes;
		TSet<UClass*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns the layer types generated by this layer if it is merged as part of one of the given layer types\n     * Can change depending on the layer content or configuration (ex: layer folder children layer types)\n     * \n     * @return TSet<UClass*> \n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Returns the layer types generated by this layer if it is merged as part of one of the given layer types\nCan change depending on the layer content or configuration (ex: layer folder children layer types)\n\n@return TSet<UClass*>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_iLayerTypes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_iLayerTypes;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::NewProp_iLayerTypes_ElementProp = { "iLayerTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::NewProp_iLayerTypes = { "iLayerTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventGetMergeLayerTypesFromTypes_Parms, iLayerTypes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventGetMergeLayerTypesFromTypes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::NewProp_iLayerTypes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::NewProp_iLayerTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "GetMergeLayerTypesFromTypes", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::OdysseyLayer_eventGetMergeLayerTypesFromTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::OdysseyLayer_eventGetMergeLayerTypesFromTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execGetMergeLayerTypesFromTypes)
{
	P_GET_TSET(UClass*,Z_Param_iLayerTypes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<UClass*>*)Z_Param__Result=P_THIS->GetMergeLayerTypesFromTypes(Z_Param_iLayerTypes);
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function GetMergeLayerTypesFromTypes

// Begin Class UOdysseyLayer Function GetParent
struct Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics
{
	struct OdysseyLayer_eventGetParent_Parms
	{
		UOdysseyLayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns the Layer parent\n     *\n     * @param Layer\n     * @return int\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Returns the Layer parent\n\n@param Layer\n@return int" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "GetParent", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::OdysseyLayer_eventGetParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::OdysseyLayer_eventGetParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayer_GetParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_GetParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execGetParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyLayer**)Z_Param__Result=P_THIS->GetParent();
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function GetParent

// Begin Class UOdysseyLayer Function GetParents
struct Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics
{
	struct OdysseyLayer_eventGetParents_Parms
	{
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns the Layer parents from direct parent to root parent\n     *\n     * @param Layer\n     * @return int\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Returns the Layer parents from direct parent to root parent\n\n@param Layer\n@return int" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventGetParents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "GetParents", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::OdysseyLayer_eventGetParents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::OdysseyLayer_eventGetParents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayer_GetParents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_GetParents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execGetParents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=P_THIS->GetParents();
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function GetParents

// Begin Class UOdysseyLayer Function IsChildOf
struct Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics
{
	struct OdysseyLayer_eventIsChildOf_Parms
	{
		UOdysseyLayer* Layer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns wether the given layer is a child of the given ParentLayer\n     *\n     * @param Layer\n     * @param ParentLayer\n     * @return bool\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Returns wether the given layer is a child of the given ParentLayer\n\n@param Layer\n@param ParentLayer\n@return bool" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventIsChildOf_Parms, Layer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyLayer_eventIsChildOf_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayer_eventIsChildOf_Parms), &Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "IsChildOf", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::OdysseyLayer_eventIsChildOf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::OdysseyLayer_eventIsChildOf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayer_IsChildOf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_IsChildOf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execIsChildOf)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsChildOf(Z_Param_Layer);
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function IsChildOf

// Begin Class UOdysseyLayer Function Merge
struct Z_Construct_UFunction_UOdysseyLayer_Merge_Statics
{
	struct OdysseyLayer_eventMerge_Parms
	{
		TArray<UOdysseyLayer*> Layers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Merges the given layers into this layer\n     * Only works with Layer class being a child of classes returned by GetMergeLayerTypes()\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Merges the given layers into this layer\nOnly works with Layer class being a child of classes returned by GetMergeLayerTypes()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayer_eventMerge_Parms, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::NewProp_Layers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "Merge", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::OdysseyLayer_eventMerge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::OdysseyLayer_eventMerge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayer_Merge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_Merge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execMerge)
{
	P_GET_TARRAY_REF(UOdysseyLayer*,Z_Param_Out_Layers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Merge(Z_Param_Out_Layers);
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function Merge

// Begin Class UOdysseyLayer Function OnCreated
static FName NAME_UOdysseyLayer_OnCreated = FName(TEXT("OnCreated"));
void UOdysseyLayer::OnCreated()
{
	ProcessEvent(FindFunctionChecked(NAME_UOdysseyLayer_OnCreated),NULL);
}
struct Z_Construct_UFunction_UOdysseyLayer_OnCreated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n\x09 * @brief Called when the node has been created by the given LayerStack\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "@brief Called when the node has been created by the given LayerStack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayer_OnCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayer, nullptr, "OnCreated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayer_OnCreated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayer_OnCreated_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyLayer_OnCreated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayer_OnCreated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayer::execOnCreated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCreated_Implementation();
	P_NATIVE_END;
}
// End Class UOdysseyLayer Function OnCreated

// Begin Class UOdysseyLayer
void UOdysseyLayer::StaticRegisterNativesUOdysseyLayer()
{
	UClass* Class = UOdysseyLayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChildren", &UOdysseyLayer::execGetChildren },
		{ "GetChildrenRecursively", &UOdysseyLayer::execGetChildrenRecursively },
		{ "GetIndexInParent", &UOdysseyLayer::execGetIndexInParent },
		{ "GetLayerStack", &UOdysseyLayer::execGetLayerStack },
		{ "GetMergeDefaultLayerTypes", &UOdysseyLayer::execGetMergeDefaultLayerTypes },
		{ "GetMergeLayerTypesFromTypes", &UOdysseyLayer::execGetMergeLayerTypesFromTypes },
		{ "GetParent", &UOdysseyLayer::execGetParent },
		{ "GetParents", &UOdysseyLayer::execGetParents },
		{ "IsChildOf", &UOdysseyLayer::execIsChildOf },
		{ "Merge", &UOdysseyLayer::execMerge },
		{ "OnCreated", &UOdysseyLayer::execOnCreated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyLayer);
UClass* Z_Construct_UClass_UOdysseyLayer_NoRegister()
{
	return UOdysseyLayer::StaticClass();
}
struct Z_Construct_UClass_UOdysseyLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OdysseyLayer.h" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerTypeName_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "//Default properties\n" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "Default properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultName_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconExpanded_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanHaveChildren_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "//Defaults Properties\n" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "Defaults Properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "LayerStack|Layer" },
		{ "Comment", "//Instance properties\n" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
		{ "ToolTip", "Instance properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsActivated_MetaData[] = {
		{ "Category", "LayerStack|Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[] = {
		{ "Category", "LayerStack|Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsExpanded_MetaData[] = {
		{ "Category", "LayerStack|Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_LayerTypeName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconExpanded;
	static void NewProp_CanHaveChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CanHaveChildren;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static void NewProp_IsActivated_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActivated;
	static void NewProp_IsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
	static void NewProp_IsExpanded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsExpanded;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyLayer_GetChildren, "GetChildren" }, // 1576060563
		{ &Z_Construct_UFunction_UOdysseyLayer_GetChildrenRecursively, "GetChildrenRecursively" }, // 2244577951
		{ &Z_Construct_UFunction_UOdysseyLayer_GetIndexInParent, "GetIndexInParent" }, // 1200995556
		{ &Z_Construct_UFunction_UOdysseyLayer_GetLayerStack, "GetLayerStack" }, // 1464392437
		{ &Z_Construct_UFunction_UOdysseyLayer_GetMergeDefaultLayerTypes, "GetMergeDefaultLayerTypes" }, // 3088130584
		{ &Z_Construct_UFunction_UOdysseyLayer_GetMergeLayerTypesFromTypes, "GetMergeLayerTypesFromTypes" }, // 3091727011
		{ &Z_Construct_UFunction_UOdysseyLayer_GetParent, "GetParent" }, // 3385448242
		{ &Z_Construct_UFunction_UOdysseyLayer_GetParents, "GetParents" }, // 2688491001
		{ &Z_Construct_UFunction_UOdysseyLayer_IsChildOf, "IsChildOf" }, // 452426902
		{ &Z_Construct_UFunction_UOdysseyLayer_Merge, "Merge" }, // 1902352169
		{ &Z_Construct_UFunction_UOdysseyLayer_OnCreated, "OnCreated" }, // 2782922829
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_LayerTypeName = { "LayerTypeName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayer, LayerTypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerTypeName_MetaData), NewProp_LayerTypeName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_DefaultName = { "DefaultName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayer, DefaultName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultName_MetaData), NewProp_DefaultName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayer, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayer, Icon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) }; // 1704263518
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IconExpanded = { "IconExpanded", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayer, IconExpanded), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconExpanded_MetaData), NewProp_IconExpanded_MetaData) }; // 1704263518
void Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_CanHaveChildren_SetBit(void* Obj)
{
	((UOdysseyLayer*)Obj)->CanHaveChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_CanHaveChildren = { "CanHaveChildren", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyLayer), &Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_CanHaveChildren_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanHaveChildren_MetaData), NewProp_CanHaveChildren_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayer, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsActivated_SetBit(void* Obj)
{
	((UOdysseyLayer*)Obj)->IsActivated = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsActivated = { "IsActivated", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyLayer), &Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsActivated_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsActivated_MetaData), NewProp_IsActivated_MetaData) };
void Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsLocked_SetBit(void* Obj)
{
	((UOdysseyLayer*)Obj)->IsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsLocked = { "IsLocked", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyLayer), &Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsLocked_MetaData), NewProp_IsLocked_MetaData) };
void Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsExpanded_SetBit(void* Obj)
{
	((UOdysseyLayer*)Obj)->IsExpanded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsExpanded = { "IsExpanded", nullptr, (EPropertyFlags)0x0010000400004004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyLayer), &Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsExpanded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsExpanded_MetaData), NewProp_IsExpanded_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayer, Parent), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayer, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_LayerTypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_DefaultName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IconExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_CanHaveChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsActivated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_IsExpanded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayer_Statics::NewProp_Children,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyLayerStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyLayer_Statics::ClassParams = {
	&UOdysseyLayer::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyLayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayer_Statics::PropPointers),
	0,
	0x001004A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyLayer()
{
	if (!Z_Registration_Info_UClass_UOdysseyLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyLayer.OuterSingleton, Z_Construct_UClass_UOdysseyLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyLayer.OuterSingleton;
}
template<> ODYSSEYLAYERSTACK_API UClass* StaticClass<UOdysseyLayer>()
{
	return UOdysseyLayer::StaticClass();
}
UOdysseyLayer::UOdysseyLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyLayer);
UOdysseyLayer::~UOdysseyLayer() {}
// End Class UOdysseyLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGetLayerChildrenMethod_StaticEnum, TEXT("EGetLayerChildrenMethod"), &Z_Registration_Info_UEnum_EGetLayerChildrenMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1701343048U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyLayer, UOdysseyLayer::StaticClass, TEXT("UOdysseyLayer"), &Z_Registration_Info_UClass_UOdysseyLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyLayer), 3254927865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_174674413(TEXT("/Script/OdysseyLayerStack"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
