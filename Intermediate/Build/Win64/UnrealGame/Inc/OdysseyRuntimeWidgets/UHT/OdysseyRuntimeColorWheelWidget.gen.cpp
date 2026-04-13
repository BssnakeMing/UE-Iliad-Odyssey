// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/OdysseyRuntimeWidgets/Public/OdysseyRuntimeColorWheelWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyRuntimeColorWheelWidget() {}

// Begin Cross Module References
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_NoRegister();
ODYSSEYRUNTIMEWIDGETS_API UClass* Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_OdysseyRuntimeWidgets();
// End Cross Module References

// Begin Class UOdysseyRuntimeColorWheelWidget Function GetViewModel
struct Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics
{
	struct OdysseyRuntimeColorWheelWidget_eventGetViewModel_Parms
	{
		UOdysseyRuntimePaintViewModel* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeColorWheelWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimeColorWheelWidget_eventGetViewModel_Parms, ReturnValue), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget, nullptr, "GetViewModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::OdysseyRuntimeColorWheelWidget_eventGetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::OdysseyRuntimeColorWheelWidget_eventGetViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeColorWheelWidget::execGetViewModel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOdysseyRuntimePaintViewModel**)Z_Param__Result=P_THIS->GetViewModel();
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeColorWheelWidget Function GetViewModel

// Begin Class UOdysseyRuntimeColorWheelWidget Function SetViewModel
struct Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics
{
	struct OdysseyRuntimeColorWheelWidget_eventSetViewModel_Parms
	{
		UOdysseyRuntimePaintViewModel* InViewModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeColorWheelWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InViewModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::NewProp_InViewModel = { "InViewModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyRuntimeColorWheelWidget_eventSetViewModel_Parms, InViewModel), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::NewProp_InViewModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget, nullptr, "SetViewModel", nullptr, nullptr, Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::OdysseyRuntimeColorWheelWidget_eventSetViewModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::OdysseyRuntimeColorWheelWidget_eventSetViewModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyRuntimeColorWheelWidget::execSetViewModel)
{
	P_GET_OBJECT(UOdysseyRuntimePaintViewModel,Z_Param_InViewModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewModel(Z_Param_InViewModel);
	P_NATIVE_END;
}
// End Class UOdysseyRuntimeColorWheelWidget Function SetViewModel

// Begin Class UOdysseyRuntimeColorWheelWidget
void UOdysseyRuntimeColorWheelWidget::StaticRegisterNativesUOdysseyRuntimeColorWheelWidget()
{
	UClass* Class = UOdysseyRuntimeColorWheelWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetViewModel", &UOdysseyRuntimeColorWheelWidget::execGetViewModel },
		{ "SetViewModel", &UOdysseyRuntimeColorWheelWidget::execSetViewModel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyRuntimeColorWheelWidget);
UClass* Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_NoRegister()
{
	return UOdysseyRuntimeColorWheelWidget::StaticClass();
}
struct Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OdysseyRuntimeColorWheelWidget.h" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeColorWheelWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewModel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Odyssey|Paint" },
		{ "ModuleRelativePath", "Public/OdysseyRuntimeColorWheelWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_GetViewModel, "GetViewModel" }, // 1361139833
		{ &Z_Construct_UFunction_UOdysseyRuntimeColorWheelWidget_SetViewModel, "SetViewModel" }, // 2836009242
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyRuntimeColorWheelWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::NewProp_ViewModel = { "ViewModel", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyRuntimeColorWheelWidget, ViewModel), Z_Construct_UClass_UOdysseyRuntimePaintViewModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewModel_MetaData), NewProp_ViewModel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::NewProp_ViewModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyRuntimeWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::ClassParams = {
	&UOdysseyRuntimeColorWheelWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget()
{
	if (!Z_Registration_Info_UClass_UOdysseyRuntimeColorWheelWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyRuntimeColorWheelWidget.OuterSingleton, Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyRuntimeColorWheelWidget.OuterSingleton;
}
template<> ODYSSEYRUNTIMEWIDGETS_API UClass* StaticClass<UOdysseyRuntimeColorWheelWidget>()
{
	return UOdysseyRuntimeColorWheelWidget::StaticClass();
}
UOdysseyRuntimeColorWheelWidget::UOdysseyRuntimeColorWheelWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyRuntimeColorWheelWidget);
UOdysseyRuntimeColorWheelWidget::~UOdysseyRuntimeColorWheelWidget() {}
// End Class UOdysseyRuntimeColorWheelWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeColorWheelWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyRuntimeColorWheelWidget, UOdysseyRuntimeColorWheelWidget::StaticClass, TEXT("UOdysseyRuntimeColorWheelWidget"), &Z_Registration_Info_UClass_UOdysseyRuntimeColorWheelWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyRuntimeColorWheelWidget), 2357131082U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeColorWheelWidget_h_1220009695(TEXT("/Script/OdysseyRuntimeWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeColorWheelWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimeColorWheelWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
