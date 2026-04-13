// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyLayerStack/Public/OdysseyLayerFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyLayerFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayer_NoRegister();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayerFunctionLibrary();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayerFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyLayerStack();
// End Cross Module References

// Begin Class UOdysseyLayerFunctionLibrary Function IsLayerActivatedInStack
struct Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics
{
	struct OdysseyLayerFunctionLibrary_eventIsLayerActivatedInStack_Parms
	{
		UOdysseyLayer* Layer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack|Layer" },
		{ "DefaultToSelf", "Layer" },
		{ "HidePin", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerFunctionLibrary_eventIsLayerActivatedInStack_Parms, Layer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyLayerFunctionLibrary_eventIsLayerActivatedInStack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayerFunctionLibrary_eventIsLayerActivatedInStack_Parms), &Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerFunctionLibrary, nullptr, "IsLayerActivatedInStack", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::OdysseyLayerFunctionLibrary_eventIsLayerActivatedInStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::OdysseyLayerFunctionLibrary_eventIsLayerActivatedInStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerFunctionLibrary::execIsLayerActivatedInStack)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOdysseyLayerFunctionLibrary::IsLayerActivatedInStack(Z_Param_Layer);
	P_NATIVE_END;
}
// End Class UOdysseyLayerFunctionLibrary Function IsLayerActivatedInStack

// Begin Class UOdysseyLayerFunctionLibrary Function IsLayerLockedInStack
struct Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics
{
	struct OdysseyLayerFunctionLibrary_eventIsLayerLockedInStack_Parms
	{
		UOdysseyLayer* Layer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack|Layer" },
		{ "DefaultToSelf", "Layer" },
		{ "HidePin", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyLayerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyLayerFunctionLibrary_eventIsLayerLockedInStack_Parms, Layer), Z_Construct_UClass_UOdysseyLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyLayerFunctionLibrary_eventIsLayerLockedInStack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyLayerFunctionLibrary_eventIsLayerLockedInStack_Parms), &Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::NewProp_Layer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyLayerFunctionLibrary, nullptr, "IsLayerLockedInStack", nullptr, nullptr, Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::OdysseyLayerFunctionLibrary_eventIsLayerLockedInStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::OdysseyLayerFunctionLibrary_eventIsLayerLockedInStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyLayerFunctionLibrary::execIsLayerLockedInStack)
{
	P_GET_OBJECT(UOdysseyLayer,Z_Param_Layer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOdysseyLayerFunctionLibrary::IsLayerLockedInStack(Z_Param_Layer);
	P_NATIVE_END;
}
// End Class UOdysseyLayerFunctionLibrary Function IsLayerLockedInStack

// Begin Class UOdysseyLayerFunctionLibrary
void UOdysseyLayerFunctionLibrary::StaticRegisterNativesUOdysseyLayerFunctionLibrary()
{
	UClass* Class = UOdysseyLayerFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsLayerActivatedInStack", &UOdysseyLayerFunctionLibrary::execIsLayerActivatedInStack },
		{ "IsLayerLockedInStack", &UOdysseyLayerFunctionLibrary::execIsLayerLockedInStack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyLayerFunctionLibrary);
UClass* Z_Construct_UClass_UOdysseyLayerFunctionLibrary_NoRegister()
{
	return UOdysseyLayerFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UOdysseyLayerFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OdysseyLayerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OdysseyLayerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerActivatedInStack, "IsLayerActivatedInStack" }, // 2862703144
		{ &Z_Construct_UFunction_UOdysseyLayerFunctionLibrary_IsLayerLockedInStack, "IsLayerLockedInStack" }, // 383920201
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyLayerFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyLayerFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyLayerStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayerFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyLayerFunctionLibrary_Statics::ClassParams = {
	&UOdysseyLayerFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyLayerFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyLayerFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyLayerFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOdysseyLayerFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyLayerFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOdysseyLayerFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyLayerFunctionLibrary.OuterSingleton;
}
template<> ODYSSEYLAYERSTACK_API UClass* StaticClass<UOdysseyLayerFunctionLibrary>()
{
	return UOdysseyLayerFunctionLibrary::StaticClass();
}
UOdysseyLayerFunctionLibrary::UOdysseyLayerFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyLayerFunctionLibrary);
UOdysseyLayerFunctionLibrary::~UOdysseyLayerFunctionLibrary() {}
// End Class UOdysseyLayerFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyLayerFunctionLibrary, UOdysseyLayerFunctionLibrary::StaticClass, TEXT("UOdysseyLayerFunctionLibrary"), &Z_Registration_Info_UClass_UOdysseyLayerFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyLayerFunctionLibrary), 2333796330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_1980267166(TEXT("/Script/OdysseyLayerStack"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
