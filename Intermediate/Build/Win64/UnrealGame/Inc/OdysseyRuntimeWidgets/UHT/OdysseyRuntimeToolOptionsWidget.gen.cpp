// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/OdysseyRuntimeWidgets/Public/OdysseyRuntimeToolOptionsWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyRuntimeToolOptionsWidget() {}

// Begin Cross Module References
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_NoRegister();
ODYSSEYSHAPES_API UClass* Z_Construct_UClass_UOdysseyFreehandShape_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_OdysseyRuntimeWidgets();
// End Cross Module References

// Begin Class UOdysseyRuntimeToolOptionsWidget Function GetFreehandShape
struct Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics
{
	struct OdysseyRuntimeToolOptionsWidget_eventGetFreehandShape_Parms
	{
		UOdysseyFreehandShape* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolOptionsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimeToolOptionsWidget_eventGetFreehandShape_Parms, ReturnValue), Z_Construct_UClass_UOdysseyFreehandShape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget, nullptr, "GetFreehandShape", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::OdysseyRuntimeToolOptionsWidget_eventGetFreehandShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::OdysseyRuntimeToolOptionsWidget_eventGetFreehandShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeToolOptionsWidget::execGetFreehandShape)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyFreehandShape**)Z_Param__Result=P_THIS->GetFreehandShape();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeToolOptionsWidget Function GetFreehandShape

// Begin Class UOdysseyRuntimeToolOptionsWidget Function GetViewModel
struct Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics
{
	struct OdysseyRuntimeToolOptionsWidget_eventGetViewModel_Parms
	{
		UOdysseyRuntimePaintViewModel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolOptionsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimeToolOptionsWidget_eventGetViewModel_Parms, ReturnValue), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget, nullptr, "GetViewModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::OdysseyRuntimeToolOptionsWidget_eventGetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::OdysseyRuntimeToolOptionsWidget_eventGetViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeToolOptionsWidget::execGetViewModel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyRuntimePaintViewModel**)Z_Param__Result=P_THIS->GetViewModel();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeToolOptionsWidget Function GetViewModel

// Begin Class UOdysseyRuntimeToolOptionsWidget Function SetFreehandShape
struct Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics
{
	struct OdysseyRuntimeToolOptionsWidget_eventSetFreehandShape_Parms
	{
		UOdysseyFreehandShape* InFreehandShape;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolOptionsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InFreehandShape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::NewProp_InFreehandShape = { "InFreehandShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimeToolOptionsWidget_eventSetFreehandShape_Parms, InFreehandShape), Z_Construct_UClass_UOdysseyFreehandShape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::NewProp_InFreehandShape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget, nullptr, "SetFreehandShape", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::OdysseyRuntimeToolOptionsWidget_eventSetFreehandShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::OdysseyRuntimeToolOptionsWidget_eventSetFreehandShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeToolOptionsWidget::execSetFreehandShape)
{
	P_GET_OBJECT(UOdysseyFreehandShape,Z_Param_InFreehandShape);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFreehandShape(Z_Param_InFreehandShape);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeToolOptionsWidget Function SetFreehandShape

// Begin Class UOdysseyRuntimeToolOptionsWidget Function SetViewModel
struct Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics
{
	struct OdysseyRuntimeToolOptionsWidget_eventSetViewModel_Parms
	{
		UOdysseyRuntimePaintViewModel* InViewModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolOptionsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InViewModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::NewProp_InViewModel = { "InViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimeToolOptionsWidget_eventSetViewModel_Parms, InViewModel), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::NewProp_InViewModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget, nullptr, "SetViewModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::OdysseyRuntimeToolOptionsWidget_eventSetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::OdysseyRuntimeToolOptionsWidget_eventSetViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeToolOptionsWidget::execSetViewModel)
{
	P_GET_OBJECT(UOdysseyRuntimePaintViewModel,Z_Param_InViewModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewModel(Z_Param_InViewModel);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeToolOptionsWidget Function SetViewModel

// Begin Class UOdysseyRuntimeToolOptionsWidget
void UOdysseyRuntimeToolOptionsWidget::StaticRegisterNativesUOdysseyRuntimeToolOptionsWidget()
{
	UClass* Class = UOdysseyRuntimeToolOptionsWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFreehandShape", &UOdysseyRuntimeToolOptionsWidget::execGetFreehandShape },
		{ "GetViewModel", &UOdysseyRuntimeToolOptionsWidget::execGetViewModel },
		{ "SetFreehandShape", &UOdysseyRuntimeToolOptionsWidget::execSetFreehandShape },
		{ "SetViewModel", &UOdysseyRuntimeToolOptionsWidget::execSetViewModel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyRuntimeToolOptionsWidget);
UClass* Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_NoRegister()
{
	return UOdysseyRuntimeToolOptionsWidget::StaticClass();
}
struct Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OdysseyRuntimeToolOptionsWidget.h" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolOptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolOptionsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreehandShape_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolOptionsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FreehandShape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetFreehandShape, "GetFreehandShape" }, // 3266966513
		{ &Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_GetViewModel, "GetViewModel" }, // 3107130063
		{ &Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetFreehandShape, "SetFreehandShape" }, // 1738938703
		{ &Z_Construct_UFunction_UOdysseyRuntimeToolOptionsWidget_SetViewModel, "SetViewModel" }, // 860668362
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyRuntimeToolOptionsWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimeToolOptionsWidget, ViewModel), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModel_MetaData), NewProp_ViewModel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::NewProp_FreehandShape = { "FreehandShape", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimeToolOptionsWidget, FreehandShape), Z_Construct_UClass_UOdysseyFreehandShape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreehandShape_MetaData), NewProp_FreehandShape_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::NewProp_ViewModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::NewProp_FreehandShape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyRuntimeWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::ClassParams = {
	&UOdysseyRuntimeToolOptionsWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget()
{
	if (!Z_Registration_Info_UClass_UOdysseyRuntimeToolOptionsWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyRuntimeToolOptionsWidget.OuterSingleton, Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyRuntimeToolOptionsWidget.OuterSingleton;
}
template<> ODYSSEYRUNTIMEWIDGETS_API UClass* StaticClass<UOdysseyRuntimeToolOptionsWidget>()
{
	return UOdysseyRuntimeToolOptionsWidget::StaticClass();
}
UOdysseyRuntimeToolOptionsWidget::UOdysseyRuntimeToolOptionsWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyRuntimeToolOptionsWidget);
UOdysseyRuntimeToolOptionsWidget::~UOdysseyRuntimeToolOptionsWidget() {}
// End Class UOdysseyRuntimeToolOptionsWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeToolOptionsWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyRuntimeToolOptionsWidget, UOdysseyRuntimeToolOptionsWidget::StaticClass, TEXT("UOdysseyRuntimeToolOptionsWidget"), &Z_Registration_Info_UClass_UOdysseyRuntimeToolOptionsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyRuntimeToolOptionsWidget), 1995758401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeToolOptionsWidget_h_2087850742(TEXT("/Script/OdysseyRuntimeWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeToolOptionsWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeToolOptionsWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
