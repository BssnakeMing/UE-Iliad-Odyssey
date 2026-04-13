// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyLayerStack/Public/OdysseyLayerStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyLayerStack() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayer_NoRegister();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayerStack();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayerStack_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyLayerStack();
// End Cross Module References

// Begin Class UOdysseyLayerStack Function AddLayer
struct Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics
{
	struct OdysseyLayerStack_eventAddLayer_Parms
	{
		TSubclassOf<UOdysseyLayer> LayerType;
		UOdysseyLayer* ParentLayer;
		int32 IndexInParent;
		UOdysseyLayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Adds a Layer of LayerType to the LayerStack as child of ParentLayer at IndexInParent\n     * \n     * @param LayerType has to be a layer type compatible with this layerstack\n     * @param ParentLayer has to be a layer from this layerstack or nullptr\n     * @param IndexInParent \n     * @return UOdysseyLayer* \n     */" },
		{ "CPP_Default_IndexInParent", "0" },
		{ "CPP_Default_ParentLayer", "None" },
		{ "DeterminesOutputType", "LayerType" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Adds a Layer of LayerType to the LayerStack as child of ParentLayer at IndexInParent\n\n@param LayerType has to be a layer type compatible with this layerstack\n@param ParentLayer has to be a layer from this layerstack or nullptr\n@param IndexInParent\n@return UOdysseyLayer*" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LayerType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInParent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::NewProp_LayerType = { "LayerType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventAddLayer_Parms, LayerType), Z_Construct_UClass_UClass, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::NewProp_ParentLayer = { "ParentLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventAddLayer_Parms, ParentLayer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::NewProp_IndexInParent = { "IndexInParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventAddLayer_Parms, IndexInParent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventAddLayer_Parms, ReturnValue), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::NewProp_LayerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::NewProp_ParentLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::NewProp_IndexInParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "AddLayer", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::OdysseyLayerStack_eventAddLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::OdysseyLayerStack_eventAddLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_AddLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_AddLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execAddLayer)
{
	P_GET_OBJECT(UClass,Z_Param_LayerType);
	P_GET_OBJECT(UOdysseyLayer,Z_Param_ParentLayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyLayer**)Z_Param__Result=P_THIS->AddLayer(Z_Param_LayerType,Z_Param_ParentLayer,Z_Param_IndexInParent);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function AddLayer

// Begin Class UOdysseyLayerStack Function CanFlattenLayer
struct Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics
{
	struct OdysseyLayerStack_eventCanFlattenLayer_Parms
	{
		UOdysseyLayer* iLayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Return wether the given layer can be flattened\n     * \n     * @param iLayer \n     * @return true \n     * @return false \n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Return wether the given layer can be flattened\n\n@param iLayer\n@return true\n@return false" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iLayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::NewProp_iLayer = { "iLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCanFlattenLayer_Parms, iLayer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyLayerStack_eventCanFlattenLayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayerStack_eventCanFlattenLayer_Parms), &Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::NewProp_iLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "CanFlattenLayer", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::OdysseyLayerStack_eventCanFlattenLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::OdysseyLayerStack_eventCanFlattenLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execCanFlattenLayer)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_iLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanFlattenLayer(Z_Param_iLayer);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function CanFlattenLayer

// Begin Class UOdysseyLayerStack Function CanFlattenLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics
{
	struct OdysseyLayerStack_eventCanFlattenLayers_Parms
	{
		TArray<UOdysseyLayer*> iLayers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Return wether the given layers can be flattened\n     * \n     * @param iLayers \n     * @return true \n     * @return false \n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Return wether the given layers can be flattened\n\n@param iLayers\n@return true\n@return false" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_iLayers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::NewProp_iLayers_Inner = { "iLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::NewProp_iLayers = { "iLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCanFlattenLayers_Parms, iLayers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyLayerStack_eventCanFlattenLayers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayerStack_eventCanFlattenLayers_Parms), &Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::NewProp_iLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::NewProp_iLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "CanFlattenLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::OdysseyLayerStack_eventCanFlattenLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::OdysseyLayerStack_eventCanFlattenLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execCanFlattenLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_iLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanFlattenLayers(Z_Param_iLayers);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function CanFlattenLayers

// Begin Class UOdysseyLayerStack Function CanMergeLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics
{
	struct OdysseyLayerStack_eventCanMergeLayers_Parms
	{
		TArray<UOdysseyLayer*> iLayers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Return wether the given layers can be merged together\n     * \n     * @param iLayers \n     * @return true \n     * @return false \n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Return wether the given layers can be merged together\n\n@param iLayers\n@return true\n@return false" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_iLayers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::NewProp_iLayers_Inner = { "iLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::NewProp_iLayers = { "iLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCanMergeLayers_Parms, iLayers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyLayerStack_eventCanMergeLayers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayerStack_eventCanMergeLayers_Parms), &Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::NewProp_iLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::NewProp_iLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "CanMergeLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::OdysseyLayerStack_eventCanMergeLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::OdysseyLayerStack_eventCanMergeLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execCanMergeLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_iLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMergeLayers(Z_Param_iLayers);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function CanMergeLayers

// Begin Class UOdysseyLayerStack Function CanMoveLayer
struct Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics
{
	struct OdysseyLayerStack_eventCanMoveLayer_Parms
	{
		UOdysseyLayer* Layer;
		UOdysseyLayer* ParentLayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns wether the given layer can be moved in the given ParentLayer\n     * \n     * @param Layer has to be a layer from this layerstack\n     * @param ParentLayer has to be a layer from this layerstack or nullptr\n     * @param IndexInParent \n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Returns wether the given layer can be moved in the given ParentLayer\n\n@param Layer has to be a layer from this layerstack\n@param ParentLayer has to be a layer from this layerstack or nullptr\n@param IndexInParent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentLayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCanMoveLayer_Parms, Layer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::NewProp_ParentLayer = { "ParentLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCanMoveLayer_Parms, ParentLayer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyLayerStack_eventCanMoveLayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayerStack_eventCanMoveLayer_Parms), &Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::NewProp_ParentLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "CanMoveLayer", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::OdysseyLayerStack_eventCanMoveLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::OdysseyLayerStack_eventCanMoveLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execCanMoveLayer)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_Layer);
	P_GET_OBJECT(UOdysseyLayer,Z_Param_ParentLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMoveLayer(Z_Param_Layer,Z_Param_ParentLayer);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function CanMoveLayer

// Begin Class UOdysseyLayerStack Function CanMoveLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics
{
	struct OdysseyLayerStack_eventCanMoveLayers_Parms
	{
		TArray<UOdysseyLayer*> Layers;
		UOdysseyLayer* ParentLayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n\x09 * @brief Returns wether the given layers can be moved in the given ParentLayer\n\x09 *\n\x09 * @param Layers \n\x09 * @param ParentLayer has to be a layer from this layerstack or nullptr\n\x09 * @param IndexInParent\n\x09 */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Returns wether the given layers can be moved in the given ParentLayer\n\n@param Layers\n@param ParentLayer has to be a layer from this layerstack or nullptr\n@param IndexInParent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentLayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCanMoveLayers_Parms, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::NewProp_ParentLayer = { "ParentLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCanMoveLayers_Parms, ParentLayer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyLayerStack_eventCanMoveLayers_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayerStack_eventCanMoveLayers_Parms), &Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::NewProp_ParentLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "CanMoveLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::OdysseyLayerStack_eventCanMoveLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::OdysseyLayerStack_eventCanMoveLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execCanMoveLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_Layers);
	P_GET_OBJECT(UOdysseyLayer,Z_Param_ParentLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanMoveLayers(Z_Param_Layers,Z_Param_ParentLayer);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function CanMoveLayers

// Begin Class UOdysseyLayerStack Function ContainsLayer
struct Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics
{
	struct OdysseyLayerStack_eventContainsLayer_Parms
	{
		const UOdysseyLayer* Layer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns wether the given layer is contained in the layerstack\n     * \n     * @param Layer \n     * @return bool\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Returns wether the given layer is contained in the layerstack\n\n@param Layer\n@return bool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventContainsLayer_Parms, Layer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layer_MetaData), NewProp_Layer_MetaData) };
void Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyLayerStack_eventContainsLayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayerStack_eventContainsLayer_Parms), &Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "ContainsLayer", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::OdysseyLayerStack_eventContainsLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::OdysseyLayerStack_eventContainsLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execContainsLayer)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsLayer(Z_Param_Layer);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function ContainsLayer

// Begin Class UOdysseyLayerStack Function CopyLayer
struct Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics
{
	struct OdysseyLayerStack_eventCopyLayer_Parms
	{
		UOdysseyLayer* Layer;
		UOdysseyLayer* ParentLayer;
		int32 IndexInParent;
		UOdysseyLayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Copies Layer and adds the resulting layer as child of ParentLayer at IndexInParent\n     * \n     * @param Layer can be a layer from another layerstack\n     * @param ParentLayer has to be a layer from this layerstack or nullptr\n     * @param IndexInParent \n     * @return UOdysseyLayer* \n     */" },
		{ "CPP_Default_IndexInParent", "0" },
		{ "CPP_Default_ParentLayer", "None" },
		{ "DeterminesOutputType", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Copies Layer and adds the resulting layer as child of ParentLayer at IndexInParent\n\n@param Layer can be a layer from another layerstack\n@param ParentLayer has to be a layer from this layerstack or nullptr\n@param IndexInParent\n@return UOdysseyLayer*" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInParent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCopyLayer_Parms, Layer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::NewProp_ParentLayer = { "ParentLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCopyLayer_Parms, ParentLayer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::NewProp_IndexInParent = { "IndexInParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCopyLayer_Parms, IndexInParent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCopyLayer_Parms, ReturnValue), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::NewProp_ParentLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::NewProp_IndexInParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "CopyLayer", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::OdysseyLayerStack_eventCopyLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::OdysseyLayerStack_eventCopyLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execCopyLayer)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_Layer);
	P_GET_OBJECT(UOdysseyLayer,Z_Param_ParentLayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyLayer**)Z_Param__Result=P_THIS->CopyLayer(Z_Param_Layer,Z_Param_ParentLayer,Z_Param_IndexInParent);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function CopyLayer

// Begin Class UOdysseyLayerStack Function CopyLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics
{
	struct OdysseyLayerStack_eventCopyLayers_Parms
	{
		TArray<UOdysseyLayer*> Layers;
		UOdysseyLayer* ParentLayer;
		int32 IndexInParent;
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Copies Layer and adds the resulting layer as child of ParentLayer at IndexInParent\n     * \n     * @param Layer can be a layer from another layerstack\n     * @param ParentLayer has to be a layer from this layerstack or nullptr\n     * @param IndexInParent \n     * @return UOdysseyLayer* \n     */" },
		{ "CPP_Default_IndexInParent", "0" },
		{ "CPP_Default_ParentLayer", "None" },
		{ "DeterminesOutputType", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Copies Layer and adds the resulting layer as child of ParentLayer at IndexInParent\n\n@param Layer can be a layer from another layerstack\n@param ParentLayer has to be a layer from this layerstack or nullptr\n@param IndexInParent\n@return UOdysseyLayer*" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInParent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCopyLayers_Parms, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_ParentLayer = { "ParentLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCopyLayers_Parms, ParentLayer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_IndexInParent = { "IndexInParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCopyLayers_Parms, IndexInParent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventCopyLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_ParentLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_IndexInParent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "CopyLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::OdysseyLayerStack_eventCopyLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::OdysseyLayerStack_eventCopyLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execCopyLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_Layers);
	P_GET_OBJECT(UOdysseyLayer,Z_Param_ParentLayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=P_THIS->CopyLayers(Z_Param_Layers,Z_Param_ParentLayer,Z_Param_IndexInParent);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function CopyLayers

// Begin Class UOdysseyLayerStack Function DuplicateLayer
struct Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics
{
	struct OdysseyLayerStack_eventDuplicateLayer_Parms
	{
		UOdysseyLayer* Layer;
		UOdysseyLayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Duplicates Layer and position the resulting layer directly above Layer\n     * \n     * @param Layer has to be a layer from this layerstack\n     * @return UOdysseyLayer* \n     */" },
		{ "DeterminesOutputType", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Duplicates Layer and position the resulting layer directly above Layer\n\n@param Layer has to be a layer from this layerstack\n@return UOdysseyLayer*" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventDuplicateLayer_Parms, Layer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventDuplicateLayer_Parms, ReturnValue), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "DuplicateLayer", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::OdysseyLayerStack_eventDuplicateLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::OdysseyLayerStack_eventDuplicateLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execDuplicateLayer)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyLayer**)Z_Param__Result=P_THIS->DuplicateLayer(Z_Param_Layer);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function DuplicateLayer

// Begin Class UOdysseyLayerStack Function DuplicateLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics
{
	struct OdysseyLayerStack_eventDuplicateLayers_Parms
	{
		TArray<UOdysseyLayer*> Layers;
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Duplicates Layers and position the resulting layers directly above each Layers\n     * \n     * @param Layers\n     * @return UOdysseyLayer* \n     */" },
		{ "DeterminesOutputType", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Duplicates Layers and position the resulting layers directly above each Layers\n\n@param Layers\n@return UOdysseyLayer*" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventDuplicateLayers_Parms, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventDuplicateLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "DuplicateLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::OdysseyLayerStack_eventDuplicateLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::OdysseyLayerStack_eventDuplicateLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execDuplicateLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_Layers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=P_THIS->DuplicateLayers(Z_Param_Layers);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function DuplicateLayers

// Begin Class UOdysseyLayerStack Function FindLayersMergeTypes
struct Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics
{
	struct OdysseyLayerStack_eventFindLayersMergeTypes_Parms
	{
		TArray<UOdysseyLayer*> iLayers;
		TSet<UClass*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns a set of layer classes that should be created when merging\n     * \n     * @param iLayers \n     * @return TSet<UClass*> \n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Returns a set of layer classes that should be created when merging\n\n@param iLayers\n@return TSet<UClass*>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_iLayers;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::NewProp_iLayers_Inner = { "iLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::NewProp_iLayers = { "iLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventFindLayersMergeTypes_Parms, iLayers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventFindLayersMergeTypes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::NewProp_iLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::NewProp_iLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "FindLayersMergeTypes", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::OdysseyLayerStack_eventFindLayersMergeTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::OdysseyLayerStack_eventFindLayersMergeTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execFindLayersMergeTypes)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_iLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<UClass*>*)Z_Param__Result=P_THIS->FindLayersMergeTypes(Z_Param_iLayers);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function FindLayersMergeTypes

// Begin Class UOdysseyLayerStack Function FindSupportedCustomLayerClasses
struct Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics
{
	struct OdysseyLayerStack_eventFindSupportedCustomLayerClasses_Parms
	{
		TArray<UClass*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "//Layer Class Support\n" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "Layer Class Support" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventFindSupportedCustomLayerClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "FindSupportedCustomLayerClasses", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::OdysseyLayerStack_eventFindSupportedCustomLayerClasses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::OdysseyLayerStack_eventFindSupportedCustomLayerClasses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execFindSupportedCustomLayerClasses)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UClass*>*)Z_Param__Result=P_THIS->FindSupportedCustomLayerClasses();
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function FindSupportedCustomLayerClasses

// Begin Class UOdysseyLayerStack Function FlattenLayer
struct Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics
{
	struct OdysseyLayerStack_eventFlattenLayer_Parms
	{
		UOdysseyLayer* iLayer;
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Flattens the given layer\n     * \n     * @param iLayer \n     * @return TArray<UOdysseyLayer*> \n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Flattens the given layer\n\n@param iLayer\n@return TArray<UOdysseyLayer*>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iLayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::NewProp_iLayer = { "iLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventFlattenLayer_Parms, iLayer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventFlattenLayer_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::NewProp_iLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "FlattenLayer", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::OdysseyLayerStack_eventFlattenLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::OdysseyLayerStack_eventFlattenLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execFlattenLayer)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_iLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=P_THIS->FlattenLayer(Z_Param_iLayer);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function FlattenLayer

// Begin Class UOdysseyLayerStack Function FlattenLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics
{
	struct OdysseyLayerStack_eventFlattenLayers_Parms
	{
		TArray<UOdysseyLayer*> iLayers;
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Flattens the given layers\n     * \n     * @param iLayers \n     * @return TArray<UOdysseyLayer*> \n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Flattens the given layers\n\n@param iLayers\n@return TArray<UOdysseyLayer*>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_iLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::NewProp_iLayers_Inner = { "iLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::NewProp_iLayers = { "iLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventFlattenLayers_Parms, iLayers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventFlattenLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::NewProp_iLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::NewProp_iLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "FlattenLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::OdysseyLayerStack_eventFlattenLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::OdysseyLayerStack_eventFlattenLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execFlattenLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_iLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=P_THIS->FlattenLayers(Z_Param_iLayers);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function FlattenLayers

// Begin Class UOdysseyLayerStack Function GetLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics
{
	struct OdysseyLayerStack_eventGetLayers_Parms
	{
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns all Layers\n     * \n     * @return TArray<UOdysseyLayer*>\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Returns all Layers\n\n@return TArray<UOdysseyLayer*>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventGetLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "GetLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::OdysseyLayerStack_eventGetLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::OdysseyLayerStack_eventGetLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_GetLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_GetLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execGetLayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=P_THIS->GetLayers();
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function GetLayers

// Begin Class UOdysseyLayerStack Function GetRootLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics
{
	struct OdysseyLayerStack_eventGetRootLayers_Parms
	{
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Returns the root layers only\n     * \n     * @return TArray<UOdysseyLayer*>\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Returns the root layers only\n\n@return TArray<UOdysseyLayer*>" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventGetRootLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "GetRootLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::OdysseyLayerStack_eventGetRootLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::OdysseyLayerStack_eventGetRootLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execGetRootLayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=P_THIS->GetRootLayers();
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function GetRootLayers

// Begin Class UOdysseyLayerStack Function MergeLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics
{
	struct OdysseyLayerStack_eventMergeLayers_Parms
	{
		TArray<UOdysseyLayer*> iLayers;
		UOdysseyLayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Merges the given layers together\n     * \n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Merges the given layers together" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_iLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::NewProp_iLayers_Inner = { "iLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::NewProp_iLayers = { "iLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventMergeLayers_Parms, iLayers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventMergeLayers_Parms, ReturnValue), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::NewProp_iLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::NewProp_iLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "MergeLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::OdysseyLayerStack_eventMergeLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::OdysseyLayerStack_eventMergeLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execMergeLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_iLayers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyLayer**)Z_Param__Result=P_THIS->MergeLayers(Z_Param_iLayers);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function MergeLayers

// Begin Class UOdysseyLayerStack Function MoveLayer
struct Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics
{
	struct OdysseyLayerStack_eventMoveLayer_Parms
	{
		UOdysseyLayer* Layer;
		UOdysseyLayer* ParentLayer;
		int32 IndexInParent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Moves Layer to become child of ParentLayer at IndexInParent\n     * \n     * @param Layer has to be a layer from this layerstack\n     * @param ParentLayer has to be a layer from this layerstack or nullptr\n     * @param IndexInParent \n     */" },
		{ "CPP_Default_IndexInParent", "0" },
		{ "CPP_Default_ParentLayer", "None" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Moves Layer to become child of ParentLayer at IndexInParent\n\n@param Layer has to be a layer from this layerstack\n@param ParentLayer has to be a layer from this layerstack or nullptr\n@param IndexInParent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventMoveLayer_Parms, Layer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::NewProp_ParentLayer = { "ParentLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventMoveLayer_Parms, ParentLayer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::NewProp_IndexInParent = { "IndexInParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventMoveLayer_Parms, IndexInParent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::NewProp_ParentLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::NewProp_IndexInParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "MoveLayer", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::OdysseyLayerStack_eventMoveLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::OdysseyLayerStack_eventMoveLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execMoveLayer)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_Layer);
	P_GET_OBJECT(UOdysseyLayer,Z_Param_ParentLayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveLayer(Z_Param_Layer,Z_Param_ParentLayer,Z_Param_IndexInParent);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function MoveLayer

// Begin Class UOdysseyLayerStack Function MoveLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics
{
	struct OdysseyLayerStack_eventMoveLayers_Parms
	{
		TArray<UOdysseyLayer*> Layers;
		UOdysseyLayer* ParentLayer;
		int32 IndexInParent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n\x09 * @brief Moves Layers to become children of ParentLayer at IndexInParent\n\x09 *\n\x09 * @param Layers \n\x09 * @param ParentLayer has to be a layer from this layerstack or nullptr\n\x09 * @param IndexInParent\n\x09 */" },
		{ "CPP_Default_IndexInParent", "0" },
		{ "CPP_Default_ParentLayer", "None" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Moves Layers to become children of ParentLayer at IndexInParent\n\n@param Layers\n@param ParentLayer has to be a layer from this layerstack or nullptr\n@param IndexInParent" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentLayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInParent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventMoveLayers_Parms, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::NewProp_ParentLayer = { "ParentLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventMoveLayers_Parms, ParentLayer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::NewProp_IndexInParent = { "IndexInParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventMoveLayers_Parms, IndexInParent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::NewProp_ParentLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::NewProp_IndexInParent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "MoveLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::OdysseyLayerStack_eventMoveLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::OdysseyLayerStack_eventMoveLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execMoveLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_Layers);
	P_GET_OBJECT(UOdysseyLayer,Z_Param_ParentLayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_IndexInParent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveLayers(Z_Param_Layers,Z_Param_ParentLayer,Z_Param_IndexInParent);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function MoveLayers

// Begin Class UOdysseyLayerStack Function RemoveLayer
struct Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics
{
	struct OdysseyLayerStack_eventRemoveLayer_Parms
	{
		UOdysseyLayer* Layer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Removes Layer from the LayerStack\n     * \n     * @param Layer has to be a layer from this layerstack\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Removes Layer from the LayerStack\n\n@param Layer has to be a layer from this layerstack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventRemoveLayer_Parms, Layer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::NewProp_Layer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "RemoveLayer", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::OdysseyLayerStack_eventRemoveLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::OdysseyLayerStack_eventRemoveLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execRemoveLayer)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveLayer(Z_Param_Layer);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function RemoveLayer

// Begin Class UOdysseyLayerStack Function RemoveLayers
struct Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics
{
	struct OdysseyLayerStack_eventRemoveLayers_Parms
	{
		TArray<UOdysseyLayer*> Layers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "Comment", "/**\n     * @brief Removes Layers from the LayerStack\n     * \n     * @param Layers has to be layers from this layerstack\n     */" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "@brief Removes Layers from the LayerStack\n\n@param Layers has to be layers from this layerstack" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventRemoveLayers_Parms, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::NewProp_Layers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "RemoveLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::OdysseyLayerStack_eventRemoveLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::OdysseyLayerStack_eventRemoveLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execRemoveLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_Layers);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveLayers(Z_Param_Layers);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function RemoveLayers

// Begin Class UOdysseyLayerStack Function SupportsLayerClass
struct Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics
{
	struct OdysseyLayerStack_eventSupportsLayerClass_Parms
	{
		UClass* Class;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStack_eventSupportsLayerClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyLayerStack_eventSupportsLayerClass_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayerStack_eventSupportsLayerClass_Parms), &Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStack, nullptr, "SupportsLayerClass", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::OdysseyLayerStack_eventSupportsLayerClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::OdysseyLayerStack_eventSupportsLayerClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStack::execSupportsLayerClass)
{
	P_GET_OBJECT(UClass,Z_Param_Class);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsLayerClass(Z_Param_Class);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStack Function SupportsLayerClass

// Begin Class UOdysseyLayerStack
void UOdysseyLayerStack::StaticRegisterNativesUOdysseyLayerStack()
{
	UClass* Class = UOdysseyLayerStack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddLayer", &UOdysseyLayerStack::execAddLayer },
		{ "CanFlattenLayer", &UOdysseyLayerStack::execCanFlattenLayer },
		{ "CanFlattenLayers", &UOdysseyLayerStack::execCanFlattenLayers },
		{ "CanMergeLayers", &UOdysseyLayerStack::execCanMergeLayers },
		{ "CanMoveLayer", &UOdysseyLayerStack::execCanMoveLayer },
		{ "CanMoveLayers", &UOdysseyLayerStack::execCanMoveLayers },
		{ "ContainsLayer", &UOdysseyLayerStack::execContainsLayer },
		{ "CopyLayer", &UOdysseyLayerStack::execCopyLayer },
		{ "CopyLayers", &UOdysseyLayerStack::execCopyLayers },
		{ "DuplicateLayer", &UOdysseyLayerStack::execDuplicateLayer },
		{ "DuplicateLayers", &UOdysseyLayerStack::execDuplicateLayers },
		{ "FindLayersMergeTypes", &UOdysseyLayerStack::execFindLayersMergeTypes },
		{ "FindSupportedCustomLayerClasses", &UOdysseyLayerStack::execFindSupportedCustomLayerClasses },
		{ "FlattenLayer", &UOdysseyLayerStack::execFlattenLayer },
		{ "FlattenLayers", &UOdysseyLayerStack::execFlattenLayers },
		{ "GetLayers", &UOdysseyLayerStack::execGetLayers },
		{ "GetRootLayers", &UOdysseyLayerStack::execGetRootLayers },
		{ "MergeLayers", &UOdysseyLayerStack::execMergeLayers },
		{ "MoveLayer", &UOdysseyLayerStack::execMoveLayer },
		{ "MoveLayers", &UOdysseyLayerStack::execMoveLayers },
		{ "RemoveLayer", &UOdysseyLayerStack::execRemoveLayer },
		{ "RemoveLayers", &UOdysseyLayerStack::execRemoveLayers },
		{ "SupportsLayerClass", &UOdysseyLayerStack::execSupportsLayerClass },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyLayerStack);
UClass* Z_Construct_UClass_UOdysseyLayerStack_NoRegister()
{
	return UOdysseyLayerStack::StaticClass();
}
struct Z_Construct_UClass_UOdysseyLayerStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OdysseyLayerStack.h" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleLayers_MetaData[] = {
		{ "Comment", "//Default properties\n" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "Default properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLayer_MetaData[] = {
		{ "AllowedClasses", "OdysseyLayer" },
		{ "Comment", "//CurrentLayer is specific to the user, not to the layerstack itself\n//So we save it in user's config, instead of the layerstack\n" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
		{ "ToolTip", "CurrentLayer is specific to the user, not to the layerstack itself\nSo we save it in user's config, instead of the layerstack" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerRoot_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerRootClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyLayerStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CompatibleLayers_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CompatibleLayers;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CurrentLayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerRoot;
	static const UECodeGen_Private::FClassPropertyParams NewProp_LayerRootClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyLayerStack_AddLayer, "AddLayer" }, // 3688192055
		{ &Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayer, "CanFlattenLayer" }, // 1697407868
		{ &Z_Construct_UFunction_UOdysseyLayerStack_CanFlattenLayers, "CanFlattenLayers" }, // 274108160
		{ &Z_Construct_UFunction_UOdysseyLayerStack_CanMergeLayers, "CanMergeLayers" }, // 3493202815
		{ &Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayer, "CanMoveLayer" }, // 2146985791
		{ &Z_Construct_UFunction_UOdysseyLayerStack_CanMoveLayers, "CanMoveLayers" }, // 783059846
		{ &Z_Construct_UFunction_UOdysseyLayerStack_ContainsLayer, "ContainsLayer" }, // 4055297308
		{ &Z_Construct_UFunction_UOdysseyLayerStack_CopyLayer, "CopyLayer" }, // 3909715995
		{ &Z_Construct_UFunction_UOdysseyLayerStack_CopyLayers, "CopyLayers" }, // 520904409
		{ &Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayer, "DuplicateLayer" }, // 2009907791
		{ &Z_Construct_UFunction_UOdysseyLayerStack_DuplicateLayers, "DuplicateLayers" }, // 2108969741
		{ &Z_Construct_UFunction_UOdysseyLayerStack_FindLayersMergeTypes, "FindLayersMergeTypes" }, // 2458488303
		{ &Z_Construct_UFunction_UOdysseyLayerStack_FindSupportedCustomLayerClasses, "FindSupportedCustomLayerClasses" }, // 824102117
		{ &Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayer, "FlattenLayer" }, // 1119799389
		{ &Z_Construct_UFunction_UOdysseyLayerStack_FlattenLayers, "FlattenLayers" }, // 4144472471
		{ &Z_Construct_UFunction_UOdysseyLayerStack_GetLayers, "GetLayers" }, // 2524608492
		{ &Z_Construct_UFunction_UOdysseyLayerStack_GetRootLayers, "GetRootLayers" }, // 1641184505
		{ &Z_Construct_UFunction_UOdysseyLayerStack_MergeLayers, "MergeLayers" }, // 4077805205
		{ &Z_Construct_UFunction_UOdysseyLayerStack_MoveLayer, "MoveLayer" }, // 1153941783
		{ &Z_Construct_UFunction_UOdysseyLayerStack_MoveLayers, "MoveLayers" }, // 2196010559
		{ &Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayer, "RemoveLayer" }, // 2171404940
		{ &Z_Construct_UFunction_UOdysseyLayerStack_RemoveLayers, "RemoveLayers" }, // 1543862070
		{ &Z_Construct_UFunction_UOdysseyLayerStack_SupportsLayerClass, "SupportsLayerClass" }, // 4236694099
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyLayerStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOdysseyLayerStack_Statics::NewProp_CompatibleLayers_ElementProp = { "CompatibleLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOdysseyLayerStack_Statics::NewProp_CompatibleLayers = { "CompatibleLayers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayerStack, CompatibleLayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibleLayers_MetaData), NewProp_CompatibleLayers_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UOdysseyLayerStack_Statics::NewProp_CurrentLayer = { "CurrentLayer", nullptr, (EPropertyFlags)0x0014000000204000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayerStack, CurrentLayer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentLayer_MetaData), NewProp_CurrentLayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyLayerStack_Statics::NewProp_LayerRoot = { "LayerRoot", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayerStack, LayerRoot), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerRoot_MetaData), NewProp_LayerRoot_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOdysseyLayerStack_Statics::NewProp_LayerRootClass = { "LayerRootClass", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyLayerStack, LayerRootClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerRootClass_MetaData), NewProp_LayerRootClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyLayerStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayerStack_Statics::NewProp_CompatibleLayers_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayerStack_Statics::NewProp_CompatibleLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayerStack_Statics::NewProp_CurrentLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayerStack_Statics::NewProp_LayerRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyLayerStack_Statics::NewProp_LayerRootClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayerStack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyLayerStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyLayerStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayerStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyLayerStack_Statics::ClassParams = {
	&UOdysseyLayerStack::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyLayerStack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayerStack_Statics::PropPointers),
	0,
	0x001004A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayerStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyLayerStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyLayerStack()
{
	if (!Z_Registration_Info_UClass_UOdysseyLayerStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyLayerStack.OuterSingleton, Z_Construct_UClass_UOdysseyLayerStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyLayerStack.OuterSingleton;
}
template<> ODYSSEYLAYERSTACK_API UClass* StaticClass<UOdysseyLayerStack>()
{
	return UOdysseyLayerStack::StaticClass();
}
UOdysseyLayerStack::UOdysseyLayerStack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyLayerStack);
UOdysseyLayerStack::~UOdysseyLayerStack() {}
// End Class UOdysseyLayerStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyLayerStack, UOdysseyLayerStack::StaticClass, TEXT("UOdysseyLayerStack"), &Z_Registration_Info_UClass_UOdysseyLayerStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyLayerStack), 2920297209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_131888769(TEXT("/Script/OdysseyLayerStack"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
