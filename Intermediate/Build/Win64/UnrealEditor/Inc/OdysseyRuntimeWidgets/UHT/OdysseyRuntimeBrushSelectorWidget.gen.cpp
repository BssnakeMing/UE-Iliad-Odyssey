// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/OdysseyRuntimeWidgets/Public/OdysseyRuntimeBrushSelectorWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyRuntimeBrushSelectorWidget() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_NoRegister();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_OdysseyRuntimeWidgets();
// End Cross Module References

// Begin Class UOdysseyRuntimeBrushSelectorWidget Function GetViewModel
struct Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics
{
	struct OdysseyRuntimeBrushSelectorWidget_eventGetViewModel_Parms
	{
		UOdysseyRuntimePaintViewModel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeBrushSelectorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimeBrushSelectorWidget_eventGetViewModel_Parms, ReturnValue), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget, nullptr, "GetViewModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::OdysseyRuntimeBrushSelectorWidget_eventGetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::OdysseyRuntimeBrushSelectorWidget_eventGetViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeBrushSelectorWidget::execGetViewModel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyRuntimePaintViewModel**)Z_Param__Result=P_THIS->GetViewModel();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeBrushSelectorWidget Function GetViewModel

// Begin Class UOdysseyRuntimeBrushSelectorWidget Function SelectNextBrush
struct Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics
{
	struct OdysseyRuntimeBrushSelectorWidget_eventSelectNextBrush_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeBrushSelectorWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyRuntimeBrushSelectorWidget_eventSelectNextBrush_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyRuntimeBrushSelectorWidget_eventSelectNextBrush_Parms), &Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget, nullptr, "SelectNextBrush", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::OdysseyRuntimeBrushSelectorWidget_eventSelectNextBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::OdysseyRuntimeBrushSelectorWidget_eventSelectNextBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeBrushSelectorWidget::execSelectNextBrush)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectNextBrush();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeBrushSelectorWidget Function SelectNextBrush

// Begin Class UOdysseyRuntimeBrushSelectorWidget Function SelectPreviousBrush
struct Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics
{
	struct OdysseyRuntimeBrushSelectorWidget_eventSelectPreviousBrush_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeBrushSelectorWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyRuntimeBrushSelectorWidget_eventSelectPreviousBrush_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyRuntimeBrushSelectorWidget_eventSelectPreviousBrush_Parms), &Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget, nullptr, "SelectPreviousBrush", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::OdysseyRuntimeBrushSelectorWidget_eventSelectPreviousBrush_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::OdysseyRuntimeBrushSelectorWidget_eventSelectPreviousBrush_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeBrushSelectorWidget::execSelectPreviousBrush)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectPreviousBrush();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeBrushSelectorWidget Function SelectPreviousBrush

// Begin Class UOdysseyRuntimeBrushSelectorWidget Function SetViewModel
struct Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics
{
	struct OdysseyRuntimeBrushSelectorWidget_eventSetViewModel_Parms
	{
		UOdysseyRuntimePaintViewModel* InViewModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeBrushSelectorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InViewModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::NewProp_InViewModel = { "InViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimeBrushSelectorWidget_eventSetViewModel_Parms, InViewModel), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::NewProp_InViewModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget, nullptr, "SetViewModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::OdysseyRuntimeBrushSelectorWidget_eventSetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::OdysseyRuntimeBrushSelectorWidget_eventSetViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeBrushSelectorWidget::execSetViewModel)
{
	P_GET_OBJECT(UOdysseyRuntimePaintViewModel,Z_Param_InViewModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewModel(Z_Param_InViewModel);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeBrushSelectorWidget Function SetViewModel

// Begin Class UOdysseyRuntimeBrushSelectorWidget
void UOdysseyRuntimeBrushSelectorWidget::StaticRegisterNativesUOdysseyRuntimeBrushSelectorWidget()
{
	UClass* Class = UOdysseyRuntimeBrushSelectorWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetViewModel", &UOdysseyRuntimeBrushSelectorWidget::execGetViewModel },
		{ "SelectNextBrush", &UOdysseyRuntimeBrushSelectorWidget::execSelectNextBrush },
		{ "SelectPreviousBrush", &UOdysseyRuntimeBrushSelectorWidget::execSelectPreviousBrush },
		{ "SetViewModel", &UOdysseyRuntimeBrushSelectorWidget::execSetViewModel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyRuntimeBrushSelectorWidget);
UClass* Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_NoRegister()
{
	return UOdysseyRuntimeBrushSelectorWidget::StaticClass();
}
struct Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OdysseyRuntimeBrushSelectorWidget.h" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeBrushSelectorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeBrushSelectorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushPresetClasses_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Odyssey|Paint|Brushes" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeBrushSelectorWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeBrushPresetInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimeBrushSelectorWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewModel;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BrushPresetClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushPresetClasses;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeBrushPresetInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeBrushPresetInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_GetViewModel, "GetViewModel" }, // 2796926256
		{ &Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectNextBrush, "SelectNextBrush" }, // 3788103910
		{ &Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SelectPreviousBrush, "SelectPreviousBrush" }, // 1772050558
		{ &Z_Construct_UFunction_UOdysseyRuntimeBrushSelectorWidget_SetViewModel, "SetViewModel" }, // 2919525394
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyRuntimeBrushSelectorWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimeBrushSelectorWidget, ViewModel), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModel_MetaData), NewProp_ViewModel_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::NewProp_BrushPresetClasses_Inner = { "BrushPresetClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::NewProp_BrushPresetClasses = { "BrushPresetClasses", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimeBrushSelectorWidget, BrushPresetClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushPresetClasses_MetaData), NewProp_BrushPresetClasses_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::NewProp_RuntimeBrushPresetInstances_Inner = { "RuntimeBrushPresetInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::NewProp_RuntimeBrushPresetInstances = { "RuntimeBrushPresetInstances", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimeBrushSelectorWidget, RuntimeBrushPresetInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeBrushPresetInstances_MetaData), NewProp_RuntimeBrushPresetInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::NewProp_ViewModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::NewProp_BrushPresetClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::NewProp_BrushPresetClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::NewProp_RuntimeBrushPresetInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::NewProp_RuntimeBrushPresetInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyRuntimeWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::ClassParams = {
	&UOdysseyRuntimeBrushSelectorWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget()
{
	if (!Z_Registration_Info_UClass_UOdysseyRuntimeBrushSelectorWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyRuntimeBrushSelectorWidget.OuterSingleton, Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyRuntimeBrushSelectorWidget.OuterSingleton;
}
template<> ODYSSEYRUNTIMEWIDGETS_API UClass* StaticClass<UOdysseyRuntimeBrushSelectorWidget>()
{
	return UOdysseyRuntimeBrushSelectorWidget::StaticClass();
}
UOdysseyRuntimeBrushSelectorWidget::UOdysseyRuntimeBrushSelectorWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyRuntimeBrushSelectorWidget);
UOdysseyRuntimeBrushSelectorWidget::~UOdysseyRuntimeBrushSelectorWidget() {}
// End Class UOdysseyRuntimeBrushSelectorWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeBrushSelectorWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyRuntimeBrushSelectorWidget, UOdysseyRuntimeBrushSelectorWidget::StaticClass, TEXT("UOdysseyRuntimeBrushSelectorWidget"), &Z_Registration_Info_UClass_UOdysseyRuntimeBrushSelectorWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyRuntimeBrushSelectorWidget), 3975552852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeBrushSelectorWidget_h_3079877711(TEXT("/Script/OdysseyRuntimeWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeBrushSelectorWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeBrushSelectorWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
