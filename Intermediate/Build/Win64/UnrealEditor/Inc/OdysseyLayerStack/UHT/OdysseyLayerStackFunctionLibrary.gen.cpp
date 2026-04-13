// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyLayerStack/Public/OdysseyLayerStackFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyLayerStackFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayer_NoRegister();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyLayerStack();
// End Cross Module References

// Begin Class UOdysseyLayerStackFunctionLibrary Function FilterTopmostLayers
struct Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics
{
	struct OdysseyLayerStackFunctionLibrary_eventFilterTopmostLayers_Parms
	{
		TArray<UOdysseyLayer*> Layers;
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStackFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStackFunctionLibrary_eventFilterTopmostLayers_Parms, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStackFunctionLibrary_eventFilterTopmostLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::NewProp_Layers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary, nullptr, "FilterTopmostLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::OdysseyLayerStackFunctionLibrary_eventFilterTopmostLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::OdysseyLayerStackFunctionLibrary_eventFilterTopmostLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStackFunctionLibrary::execFilterTopmostLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_Layers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=UOdysseyLayerStackFunctionLibrary::FilterTopmostLayers(Z_Param_Layers);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStackFunctionLibrary Function FilterTopmostLayers

// Begin Class UOdysseyLayerStackFunctionLibrary Function SortLayers
struct Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics
{
	struct OdysseyLayerStackFunctionLibrary_eventSortLayers_Parms
	{
		TArray<UOdysseyLayer*> iLayers;
		bool iReverse;
		TArray<UOdysseyLayer*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStackFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_iLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_iLayers;
	static void NewProp_iReverse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_iReverse;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_iLayers_Inner = { "iLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_iLayers = { "iLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStackFunctionLibrary_eventSortLayers_Parms, iLayers), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_iReverse_SetBit(void* Obj)
{
	((OdysseyLayerStackFunctionLibrary_eventSortLayers_Parms*)Obj)->iReverse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_iReverse = { "iReverse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayerStackFunctionLibrary_eventSortLayers_Parms), &Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_iReverse_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerStackFunctionLibrary_eventSortLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_iLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_iLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_iReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary, nullptr, "SortLayers", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::OdysseyLayerStackFunctionLibrary_eventSortLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::OdysseyLayerStackFunctionLibrary_eventSortLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerStackFunctionLibrary::execSortLayers)
{
	P_GET_TARRAY(UOdysseyLayer*,Z_Param_iLayers);
	P_GET_UBOOL(Z_Param_iReverse);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UOdysseyLayer*>*)Z_Param__Result=UOdysseyLayerStackFunctionLibrary::SortLayers(Z_Param_iLayers,Z_Param_iReverse);
	P_NATIVE_END;
}
// End Class UOdysseyLayerStackFunctionLibrary Function SortLayers

// Begin Class UOdysseyLayerStackFunctionLibrary
void UOdysseyLayerStackFunctionLibrary::StaticRegisterNativesUOdysseyLayerStackFunctionLibrary()
{
	UClass* Class = UOdysseyLayerStackFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FilterTopmostLayers", &UOdysseyLayerStackFunctionLibrary::execFilterTopmostLayers },
		{ "SortLayers", &UOdysseyLayerStackFunctionLibrary::execSortLayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyLayerStackFunctionLibrary);
UClass* Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary_NoRegister()
{
	return UOdysseyLayerStackFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OdysseyLayerStackFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OdysseyLayerStackFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_FilterTopmostLayers, "FilterTopmostLayers" }, // 47658376
		{ &Z_Construct_UFunction_UOdysseyLayerStackFunctionLibrary_SortLayers, "SortLayers" }, // 1304181372
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyLayerStackFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyLayerStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary_Statics::ClassParams = {
	&UOdysseyLayerStackFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOdysseyLayerStackFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyLayerStackFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyLayerStackFunctionLibrary.OuterSingleton;
}
template<> ODYSSEYLAYERSTACK_API UClass* StaticClass<UOdysseyLayerStackFunctionLibrary>()
{
	return UOdysseyLayerStackFunctionLibrary::StaticClass();
}
UOdysseyLayerStackFunctionLibrary::UOdysseyLayerStackFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyLayerStackFunctionLibrary);
UOdysseyLayerStackFunctionLibrary::~UOdysseyLayerStackFunctionLibrary() {}
// End Class UOdysseyLayerStackFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStackFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyLayerStackFunctionLibrary, UOdysseyLayerStackFunctionLibrary::StaticClass, TEXT("UOdysseyLayerStackFunctionLibrary"), &Z_Registration_Info_UClass_UOdysseyLayerStackFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyLayerStackFunctionLibrary), 2612089703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStackFunctionLibrary_h_4021750049(TEXT("/Script/OdysseyLayerStack"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStackFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStackFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
