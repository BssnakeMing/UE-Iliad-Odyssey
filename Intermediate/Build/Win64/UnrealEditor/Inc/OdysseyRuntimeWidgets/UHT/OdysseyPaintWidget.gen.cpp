// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/OdysseyRuntimeWidgets/Public/OdysseyPaintWidget.h"
#include "Runtime/OdysseyRuntimeTools/Public/OdysseyRuntimePaintToolTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyPaintWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ODYSSEYRUNTIMEIMAGING_API UClass* Z_Construct_UClass_UOdysseyRuntimePaintCanvas_NoRegister();
ODYSSEYRUNTIMETOOLS_API UEnum* Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool();
ODYSSEYRUNTIMETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyPaintWidget();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyPaintWidget_NoRegister();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_OdysseyRuntimeWidgets();
// End Cross Module References

// Begin Class UOdysseyPaintWidget Function BeginStroke
struct Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics
{
	struct OdysseyPaintWidget_eventBeginStroke_Parms
	{
		FVector2D LocalPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::NewProp_LocalPosition = { "LocalPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventBeginStroke_Parms, LocalPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPosition_MetaData), NewProp_LocalPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::NewProp_LocalPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "BeginStroke", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::OdysseyPaintWidget_eventBeginStroke_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::OdysseyPaintWidget_eventBeginStroke_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execBeginStroke)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginStroke(Z_Param_Out_LocalPosition);
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function BeginStroke

// Begin Class UOdysseyPaintWidget Function Clear
struct Z_Construct_UFunction_UOdysseyPaintWidget_Clear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "Clear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_Clear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_Clear_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_Clear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_Clear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execClear)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Clear();
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function Clear

// Begin Class UOdysseyPaintWidget Function EndStroke
struct Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics
{
	struct OdysseyPaintWidget_eventEndStroke_Parms
	{
		FVector2D LocalPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::NewProp_LocalPosition = { "LocalPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventEndStroke_Parms, LocalPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPosition_MetaData), NewProp_LocalPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::NewProp_LocalPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "EndStroke", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::OdysseyPaintWidget_eventEndStroke_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::OdysseyPaintWidget_eventEndStroke_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execEndStroke)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndStroke(Z_Param_Out_LocalPosition);
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function EndStroke

// Begin Class UOdysseyPaintWidget Function GetPaintTexture
struct Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics
{
	struct OdysseyPaintWidget_eventGetPaintTexture_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventGetPaintTexture_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "GetPaintTexture", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::OdysseyPaintWidget_eventGetPaintTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::OdysseyPaintWidget_eventGetPaintTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execGetPaintTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetPaintTexture();
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function GetPaintTexture

// Begin Class UOdysseyPaintWidget Function GetViewModel
struct Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics
{
	struct OdysseyPaintWidget_eventGetViewModel_Parms
	{
		UOdysseyRuntimePaintViewModel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventGetViewModel_Parms, ReturnValue), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "GetViewModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::OdysseyPaintWidget_eventGetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::OdysseyPaintWidget_eventGetViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execGetViewModel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyRuntimePaintViewModel**)Z_Param__Result=P_THIS->GetViewModel();
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function GetViewModel

// Begin Class UOdysseyPaintWidget Function InitializeCanvas
struct Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics
{
	struct OdysseyPaintWidget_eventInitializeCanvas_Parms
	{
		int32 InWidth;
		int32 InHeight;
		FLinearColor InClearColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::NewProp_InWidth = { "InWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventInitializeCanvas_Parms, InWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::NewProp_InHeight = { "InHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventInitializeCanvas_Parms, InHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::NewProp_InClearColor = { "InClearColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventInitializeCanvas_Parms, InClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InClearColor_MetaData), NewProp_InClearColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::NewProp_InWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::NewProp_InHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::NewProp_InClearColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "InitializeCanvas", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::OdysseyPaintWidget_eventInitializeCanvas_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::OdysseyPaintWidget_eventInitializeCanvas_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execInitializeCanvas)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_InHeight);
	P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_InClearColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCanvas(Z_Param_InWidth,Z_Param_InHeight,Z_Param_Out_InClearColor);
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function InitializeCanvas

// Begin Class UOdysseyPaintWidget Function Redo
struct Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics
{
	struct OdysseyPaintWidget_eventRedo_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyPaintWidget_eventRedo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyPaintWidget_eventRedo_Parms), &Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "Redo", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::OdysseyPaintWidget_eventRedo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::OdysseyPaintWidget_eventRedo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_Redo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_Redo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execRedo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Redo();
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function Redo

// Begin Class UOdysseyPaintWidget Function SetPaintTexture
struct Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics
{
	struct OdysseyPaintWidget_eventSetPaintTexture_Parms
	{
		UTextureRenderTarget2D* InPaintTexture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPaintTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::NewProp_InPaintTexture = { "InPaintTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventSetPaintTexture_Parms, InPaintTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::NewProp_InPaintTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "SetPaintTexture", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::OdysseyPaintWidget_eventSetPaintTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::OdysseyPaintWidget_eventSetPaintTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execSetPaintTexture)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InPaintTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPaintTexture(Z_Param_InPaintTexture);
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function SetPaintTexture

// Begin Class UOdysseyPaintWidget Function SetTool
struct Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics
{
	struct OdysseyPaintWidget_eventSetTool_Parms
	{
		EOdysseyRuntimePaintTool InTool;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InTool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::NewProp_InTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::NewProp_InTool = { "InTool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventSetTool_Parms, InTool), Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool, METADATA_PARAMS(0, nullptr) }; // 1298979721
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::NewProp_InTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::NewProp_InTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "SetTool", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::OdysseyPaintWidget_eventSetTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::OdysseyPaintWidget_eventSetTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_SetTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_SetTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execSetTool)
{
	P_GET_ENUM(EOdysseyRuntimePaintTool,Z_Param_InTool);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTool(EOdysseyRuntimePaintTool(Z_Param_InTool));
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function SetTool

// Begin Class UOdysseyPaintWidget Function SetToolSettings
struct Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics
{
	struct OdysseyPaintWidget_eventSetToolSettings_Parms
	{
		FOdysseyRuntimeToolSettings InSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventSetToolSettings_Parms, InSettings), Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSettings_MetaData), NewProp_InSettings_MetaData) }; // 531969073
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::NewProp_InSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "SetToolSettings", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::OdysseyPaintWidget_eventSetToolSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::OdysseyPaintWidget_eventSetToolSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execSetToolSettings)
{
	P_GET_STRUCT_REF(FOdysseyRuntimeToolSettings,Z_Param_Out_InSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetToolSettings(Z_Param_Out_InSettings);
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function SetToolSettings

// Begin Class UOdysseyPaintWidget Function SetViewModel
struct Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics
{
	struct OdysseyPaintWidget_eventSetViewModel_Parms
	{
		UOdysseyRuntimePaintViewModel* InViewModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InViewModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::NewProp_InViewModel = { "InViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventSetViewModel_Parms, InViewModel), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::NewProp_InViewModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "SetViewModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::OdysseyPaintWidget_eventSetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::OdysseyPaintWidget_eventSetViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execSetViewModel)
{
	P_GET_OBJECT(UOdysseyRuntimePaintViewModel,Z_Param_InViewModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewModel(Z_Param_InViewModel);
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function SetViewModel

// Begin Class UOdysseyPaintWidget Function Undo
struct Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics
{
	struct OdysseyPaintWidget_eventUndo_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyPaintWidget_eventUndo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyPaintWidget_eventUndo_Parms), &Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "Undo", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::OdysseyPaintWidget_eventUndo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::OdysseyPaintWidget_eventUndo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_Undo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_Undo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execUndo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Undo();
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function Undo

// Begin Class UOdysseyPaintWidget Function UpdateStroke
struct Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics
{
	struct OdysseyPaintWidget_eventUpdateStroke_Parms
	{
		FVector2D LocalPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::NewProp_LocalPosition = { "LocalPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPaintWidget_eventUpdateStroke_Parms, LocalPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPosition_MetaData), NewProp_LocalPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::NewProp_LocalPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPaintWidget, nullptr, "UpdateStroke", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::OdysseyPaintWidget_eventUpdateStroke_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::OdysseyPaintWidget_eventUpdateStroke_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPaintWidget::execUpdateStroke)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateStroke(Z_Param_Out_LocalPosition);
	P_NATIVE_END;
}
// End Class UOdysseyPaintWidget Function UpdateStroke

// Begin Class UOdysseyPaintWidget
void UOdysseyPaintWidget::StaticRegisterNativesUOdysseyPaintWidget()
{
	UClass* Class = UOdysseyPaintWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginStroke", &UOdysseyPaintWidget::execBeginStroke },
		{ "Clear", &UOdysseyPaintWidget::execClear },
		{ "EndStroke", &UOdysseyPaintWidget::execEndStroke },
		{ "GetPaintTexture", &UOdysseyPaintWidget::execGetPaintTexture },
		{ "GetViewModel", &UOdysseyPaintWidget::execGetViewModel },
		{ "InitializeCanvas", &UOdysseyPaintWidget::execInitializeCanvas },
		{ "Redo", &UOdysseyPaintWidget::execRedo },
		{ "SetPaintTexture", &UOdysseyPaintWidget::execSetPaintTexture },
		{ "SetTool", &UOdysseyPaintWidget::execSetTool },
		{ "SetToolSettings", &UOdysseyPaintWidget::execSetToolSettings },
		{ "SetViewModel", &UOdysseyPaintWidget::execSetViewModel },
		{ "Undo", &UOdysseyPaintWidget::execUndo },
		{ "UpdateStroke", &UOdysseyPaintWidget::execUpdateStroke },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyPaintWidget);
UClass* Z_Construct_UClass_UOdysseyPaintWidget_NoRegister()
{
	return UOdysseyPaintWidget::StaticClass();
}
struct Z_Construct_UClass_UOdysseyPaintWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OdysseyPaintWidget.h" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasWidth_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasHeight_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTool_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintCanvas_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyPaintWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CanvasWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CanvasHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveTool_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveTool;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToolSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintCanvas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_BeginStroke, "BeginStroke" }, // 1983625677
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_Clear, "Clear" }, // 4161390073
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_EndStroke, "EndStroke" }, // 3863340397
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_GetPaintTexture, "GetPaintTexture" }, // 1424727710
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_GetViewModel, "GetViewModel" }, // 3631555640
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_InitializeCanvas, "InitializeCanvas" }, // 1403292966
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_Redo, "Redo" }, // 2765295758
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_SetPaintTexture, "SetPaintTexture" }, // 418756441
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_SetTool, "SetTool" }, // 3934235241
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_SetToolSettings, "SetToolSettings" }, // 1400919488
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_SetViewModel, "SetViewModel" }, // 3663004790
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_Undo, "Undo" }, // 3293782278
		{ &Z_Construct_UFunction_UOdysseyPaintWidget_UpdateStroke, "UpdateStroke" }, // 211631349
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyPaintWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_CanvasWidth = { "CanvasWidth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPaintWidget, CanvasWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasWidth_MetaData), NewProp_CanvasWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_CanvasHeight = { "CanvasHeight", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPaintWidget, CanvasHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasHeight_MetaData), NewProp_CanvasHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPaintWidget, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColor_MetaData), NewProp_ClearColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_ActiveTool_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_ActiveTool = { "ActiveTool", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPaintWidget, ActiveTool), Z_Construct_UEnum_OdysseyRuntimeTools_EOdysseyRuntimePaintTool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveTool_MetaData), NewProp_ActiveTool_MetaData) }; // 1298979721
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_ToolSettings = { "ToolSettings", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPaintWidget, ToolSettings), Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolSettings_MetaData), NewProp_ToolSettings_MetaData) }; // 531969073
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_PaintTexture = { "PaintTexture", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPaintWidget, PaintTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintTexture_MetaData), NewProp_PaintTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPaintWidget, ViewModel), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModel_MetaData), NewProp_ViewModel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_PaintCanvas = { "PaintCanvas", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPaintWidget, PaintCanvas), Z_Construct_UClass_UOdysseyRuntimePaintCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintCanvas_MetaData), NewProp_PaintCanvas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyPaintWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_CanvasWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_CanvasHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_ActiveTool_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_ActiveTool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_ToolSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_PaintTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_ViewModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPaintWidget_Statics::NewProp_PaintCanvas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPaintWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyPaintWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyRuntimeWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPaintWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyPaintWidget_Statics::ClassParams = {
	&UOdysseyPaintWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyPaintWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPaintWidget_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPaintWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyPaintWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyPaintWidget()
{
	if (!Z_Registration_Info_UClass_UOdysseyPaintWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyPaintWidget.OuterSingleton, Z_Construct_UClass_UOdysseyPaintWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyPaintWidget.OuterSingleton;
}
template<> ODYSSEYRUNTIMEWIDGETS_API UClass* StaticClass<UOdysseyPaintWidget>()
{
	return UOdysseyPaintWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyPaintWidget);
UOdysseyPaintWidget::~UOdysseyPaintWidget() {}
// End Class UOdysseyPaintWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyPaintWidget, UOdysseyPaintWidget::StaticClass, TEXT("UOdysseyPaintWidget"), &Z_Registration_Info_UClass_UOdysseyPaintWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyPaintWidget), 260431640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_3920540188(TEXT("/Script/OdysseyRuntimeWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
