// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/OdysseyRuntimeWidgets/Public/OdysseyRuntimeToolsWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyRuntimeToolsWidget() {}

// Begin Cross Module References
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimeToolsWidget();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimeToolsWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_OdysseyRuntimeWidgets();
// End Cross Module References

// Begin Class UOdysseyRuntimeToolsWidget Function GetViewModel
struct Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics
{
	struct OdysseyRuntimeToolsWidget_eventGetViewModel_Parms
	{
		UOdysseyRuntimePaintViewModel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimeToolsWidget_eventGetViewModel_Parms, ReturnValue), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeToolsWidget, nullptr, "GetViewModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::OdysseyRuntimeToolsWidget_eventGetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::OdysseyRuntimeToolsWidget_eventGetViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeToolsWidget::execGetViewModel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyRuntimePaintViewModel**)Z_Param__Result=P_THIS->GetViewModel();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeToolsWidget Function GetViewModel

// Begin Class UOdysseyRuntimeToolsWidget Function SetViewModel
struct Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics
{
	struct OdysseyRuntimeToolsWidget_eventSetViewModel_Parms
	{
		UOdysseyRuntimePaintViewModel* InViewModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InViewModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::NewProp_InViewModel = { "InViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimeToolsWidget_eventSetViewModel_Parms, InViewModel), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::NewProp_InViewModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeToolsWidget, nullptr, "SetViewModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::OdysseyRuntimeToolsWidget_eventSetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::OdysseyRuntimeToolsWidget_eventSetViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeToolsWidget::execSetViewModel)
{
	P_GET_OBJECT(UOdysseyRuntimePaintViewModel,Z_Param_InViewModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewModel(Z_Param_InViewModel);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeToolsWidget Function SetViewModel

// Begin Class UOdysseyRuntimeToolsWidget
void UOdysseyRuntimeToolsWidget::StaticRegisterNativesUOdysseyRuntimeToolsWidget()
{
	UClass* Class = UOdysseyRuntimeToolsWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetViewModel", &UOdysseyRuntimeToolsWidget::execGetViewModel },
		{ "SetViewModel", &UOdysseyRuntimeToolsWidget::execSetViewModel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyRuntimeToolsWidget);
UClass* Z_Construct_UClass_UOdysseyRuntimeToolsWidget_NoRegister()
{
	return UOdysseyRuntimeToolsWidget::StaticClass();
}
struct Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OdysseyRuntimeToolsWidget.h" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolsWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeToolsWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_GetViewModel, "GetViewModel" }, // 3577462458
		{ &Z_Construct_UFunction_UOdysseyRuntimeToolsWidget_SetViewModel, "SetViewModel" }, // 4061190416
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyRuntimeToolsWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimeToolsWidget, ViewModel), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModel_MetaData), NewProp_ViewModel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::NewProp_ViewModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyRuntimeWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::ClassParams = {
	&UOdysseyRuntimeToolsWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyRuntimeToolsWidget()
{
	if (!Z_Registration_Info_UClass_UOdysseyRuntimeToolsWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyRuntimeToolsWidget.OuterSingleton, Z_Construct_UClass_UOdysseyRuntimeToolsWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyRuntimeToolsWidget.OuterSingleton;
}
template<> ODYSSEYRUNTIMEWIDGETS_API UClass* StaticClass<UOdysseyRuntimeToolsWidget>()
{
	return UOdysseyRuntimeToolsWidget::StaticClass();
}
UOdysseyRuntimeToolsWidget::UOdysseyRuntimeToolsWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyRuntimeToolsWidget);
UOdysseyRuntimeToolsWidget::~UOdysseyRuntimeToolsWidget() {}
// End Class UOdysseyRuntimeToolsWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeToolsWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyRuntimeToolsWidget, UOdysseyRuntimeToolsWidget::StaticClass, TEXT("UOdysseyRuntimeToolsWidget"), &Z_Registration_Info_UClass_UOdysseyRuntimeToolsWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyRuntimeToolsWidget), 892313440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeToolsWidget_h_148197553(TEXT("/Script/OdysseyRuntimeWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeToolsWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeToolsWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
