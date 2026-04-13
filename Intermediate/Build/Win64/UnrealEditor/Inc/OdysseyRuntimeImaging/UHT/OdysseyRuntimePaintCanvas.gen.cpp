// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/OdysseyRuntimeImaging/Public/OdysseyRuntimePaintCanvas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyRuntimePaintCanvas() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ODYSSEYRUNTIMEIMAGING_API UClass* Z_Construct_UClass_UOdysseyRuntimePaintCanvas();
ODYSSEYRUNTIMEIMAGING_API UClass* Z_Construct_UClass_UOdysseyRuntimePaintCanvas_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyRuntimeImaging();
// End Cross Module References

// Begin Class UOdysseyRuntimePaintCanvas Function ClearCanvas
struct Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics
{
	struct OdysseyRuntimePaintCanvas_eventClearCanvas_Parms
	{
		FLinearColor InClearColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InClearColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InClearColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::NewProp_InClearColor = { "InClearColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintCanvas_eventClearCanvas_Parms, InClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InClearColor_MetaData), NewProp_InClearColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::NewProp_InClearColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintCanvas, nullptr, "ClearCanvas", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::OdysseyRuntimePaintCanvas_eventClearCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::OdysseyRuntimePaintCanvas_eventClearCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintCanvas::execClearCanvas)
{
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InClearColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearCanvas(Z_Param_Out_InClearColor);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintCanvas Function ClearCanvas

// Begin Class UOdysseyRuntimePaintCanvas Function GetCanvasHeight
struct Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics
{
	struct OdysseyRuntimePaintCanvas_eventGetCanvasHeight_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintCanvas_eventGetCanvasHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintCanvas, nullptr, "GetCanvasHeight", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::OdysseyRuntimePaintCanvas_eventGetCanvasHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::OdysseyRuntimePaintCanvas_eventGetCanvasHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintCanvas::execGetCanvasHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCanvasHeight();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintCanvas Function GetCanvasHeight

// Begin Class UOdysseyRuntimePaintCanvas Function GetCanvasWidth
struct Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics
{
	struct OdysseyRuntimePaintCanvas_eventGetCanvasWidth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintCanvas_eventGetCanvasWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintCanvas, nullptr, "GetCanvasWidth", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::OdysseyRuntimePaintCanvas_eventGetCanvasWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::OdysseyRuntimePaintCanvas_eventGetCanvasWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintCanvas::execGetCanvasWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCanvasWidth();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintCanvas Function GetCanvasWidth

// Begin Class UOdysseyRuntimePaintCanvas Function GetTexture
struct Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics
{
	struct OdysseyRuntimePaintCanvas_eventGetTexture_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintCanvas_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintCanvas, nullptr, "GetTexture", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::OdysseyRuntimePaintCanvas_eventGetTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::OdysseyRuntimePaintCanvas_eventGetTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintCanvas::execGetTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetTexture();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintCanvas Function GetTexture

// Begin Class UOdysseyRuntimePaintCanvas Function InitializeCanvas
struct Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics
{
	struct OdysseyRuntimePaintCanvas_eventInitializeCanvas_Parms
	{
		int32 InWidth;
		int32 InHeight;
		FLinearColor InClearColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InClearColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InClearColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintCanvas_eventInitializeCanvas_Parms, InWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::NewProp_InHeight = { "InHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintCanvas_eventInitializeCanvas_Parms, InHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::NewProp_InClearColor = { "InClearColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintCanvas_eventInitializeCanvas_Parms, InClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InClearColor_MetaData), NewProp_InClearColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::NewProp_InWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::NewProp_InHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::NewProp_InClearColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintCanvas, nullptr, "InitializeCanvas", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::OdysseyRuntimePaintCanvas_eventInitializeCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::OdysseyRuntimePaintCanvas_eventInitializeCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintCanvas::execInitializeCanvas)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_InHeight);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InClearColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCanvas(Z_Param_InWidth,Z_Param_InHeight,Z_Param_Out_InClearColor);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintCanvas Function InitializeCanvas

// Begin Class UOdysseyRuntimePaintCanvas Function SetTexture
struct Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics
{
	struct OdysseyRuntimePaintCanvas_eventSetTexture_Parms
	{
		UTextureRenderTarget2D* InTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimePaintCanvas_eventSetTexture_Parms, InTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::NewProp_InTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimePaintCanvas, nullptr, "SetTexture", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::OdysseyRuntimePaintCanvas_eventSetTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::OdysseyRuntimePaintCanvas_eventSetTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimePaintCanvas::execSetTexture)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTexture(Z_Param_InTexture);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimePaintCanvas Function SetTexture

// Begin Class UOdysseyRuntimePaintCanvas
void UOdysseyRuntimePaintCanvas::StaticRegisterNativesUOdysseyRuntimePaintCanvas()
{
	UClass* Class = UOdysseyRuntimePaintCanvas::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearCanvas", &UOdysseyRuntimePaintCanvas::execClearCanvas },
		{ "GetCanvasHeight", &UOdysseyRuntimePaintCanvas::execGetCanvasHeight },
		{ "GetCanvasWidth", &UOdysseyRuntimePaintCanvas::execGetCanvasWidth },
		{ "GetTexture", &UOdysseyRuntimePaintCanvas::execGetTexture },
		{ "InitializeCanvas", &UOdysseyRuntimePaintCanvas::execInitializeCanvas },
		{ "SetTexture", &UOdysseyRuntimePaintCanvas::execSetTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyRuntimePaintCanvas);
UClass* Z_Construct_UClass_UOdysseyRuntimePaintCanvas_NoRegister()
{
	return UOdysseyRuntimePaintCanvas::StaticClass();
}
struct Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OdysseyRuntimePaintCanvas.h" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelData_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimePaintCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PixelData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PixelData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_ClearCanvas, "ClearCanvas" }, // 2739275896
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasHeight, "GetCanvasHeight" }, // 3091426810
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetCanvasWidth, "GetCanvasWidth" }, // 3748794033
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_GetTexture, "GetTexture" }, // 4226463753
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_InitializeCanvas, "InitializeCanvas" }, // 2704938760
		{ &Z_Construct_UFunction_UOdysseyRuntimePaintCanvas_SetTexture, "SetTexture" }, // 2338615863
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyRuntimePaintCanvas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintCanvas, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_MetaData), NewProp_Texture_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintCanvas, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintCanvas, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintCanvas, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColor_MetaData), NewProp_ClearColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_PixelData_Inner = { "PixelData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_PixelData = { "PixelData", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimePaintCanvas, PixelData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelData_MetaData), NewProp_PixelData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_PixelData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::NewProp_PixelData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyRuntimeImaging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::ClassParams = {
	&UOdysseyRuntimePaintCanvas::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyRuntimePaintCanvas()
{
	if (!Z_Registration_Info_UClass_UOdysseyRuntimePaintCanvas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyRuntimePaintCanvas.OuterSingleton, Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyRuntimePaintCanvas.OuterSingleton;
}
template<> ODYSSEYRUNTIMEIMAGING_API UClass* StaticClass<UOdysseyRuntimePaintCanvas>()
{
	return UOdysseyRuntimePaintCanvas::StaticClass();
}
UOdysseyRuntimePaintCanvas::UOdysseyRuntimePaintCanvas(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyRuntimePaintCanvas);
UOdysseyRuntimePaintCanvas::~UOdysseyRuntimePaintCanvas() {}
// End Class UOdysseyRuntimePaintCanvas

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyRuntimePaintCanvas, UOdysseyRuntimePaintCanvas::StaticClass, TEXT("UOdysseyRuntimePaintCanvas"), &Z_Registration_Info_UClass_UOdysseyRuntimePaintCanvas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyRuntimePaintCanvas), 4228606408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_2891844216(TEXT("/Script/OdysseyRuntimeImaging"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
