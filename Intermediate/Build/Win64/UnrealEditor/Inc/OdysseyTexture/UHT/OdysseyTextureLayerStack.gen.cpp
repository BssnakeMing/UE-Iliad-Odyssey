// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyTexture/Public/LayerStack/OdysseyTextureLayerStack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyTextureLayerStack() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayerStack();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayerStack();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayerStack_NoRegister();
ODYSSEYTEXTURE_API UEnum* Z_Construct_UEnum_OdysseyTexture_EOdysseyTextureLayerStackTextureUpdateMode();
UPackage* Z_Construct_UPackage__Script_OdysseyTexture();
// End Cross Module References

// Begin Enum EOdysseyTextureLayerStackTextureUpdateMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyTextureLayerStackTextureUpdateMode;
static UEnum* EOdysseyTextureLayerStackTextureUpdateMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyTextureLayerStackTextureUpdateMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyTextureLayerStackTextureUpdateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyTexture_EOdysseyTextureLayerStackTextureUpdateMode, (UObject*)Z_Construct_UPackage__Script_OdysseyTexture(), TEXT("EOdysseyTextureLayerStackTextureUpdateMode"));
	}
	return Z_Registration_Info_UEnum_EOdysseyTextureLayerStackTextureUpdateMode.OuterSingleton;
}
template<> ODYSSEYTEXTURE_API UEnum* StaticEnum<EOdysseyTextureLayerStackTextureUpdateMode>()
{
	return EOdysseyTextureLayerStackTextureUpdateMode_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyTexture_EOdysseyTextureLayerStackTextureUpdateMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Instantaneous.Name", "EOdysseyTextureLayerStackTextureUpdateMode::Instantaneous" },
		{ "Manually.Name", "EOdysseyTextureLayerStackTextureUpdateMode::Manually" },
		{ "ModuleRelativePath", "Public/LayerStack/OdysseyTextureLayerStack.h" },
		{ "OnTick.Name", "EOdysseyTextureLayerStackTextureUpdateMode::OnTick" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOdysseyTextureLayerStackTextureUpdateMode::Manually", (int64)EOdysseyTextureLayerStackTextureUpdateMode::Manually },
		{ "EOdysseyTextureLayerStackTextureUpdateMode::OnTick", (int64)EOdysseyTextureLayerStackTextureUpdateMode::OnTick },
		{ "EOdysseyTextureLayerStackTextureUpdateMode::Instantaneous", (int64)EOdysseyTextureLayerStackTextureUpdateMode::Instantaneous },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyTexture_EOdysseyTextureLayerStackTextureUpdateMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyTexture,
	nullptr,
	"EOdysseyTextureLayerStackTextureUpdateMode",
	"EOdysseyTextureLayerStackTextureUpdateMode",
	Z_Construct_UEnum_OdysseyTexture_EOdysseyTextureLayerStackTextureUpdateMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyTexture_EOdysseyTextureLayerStackTextureUpdateMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyTexture_EOdysseyTextureLayerStackTextureUpdateMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyTexture_EOdysseyTextureLayerStackTextureUpdateMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyTexture_EOdysseyTextureLayerStackTextureUpdateMode()
{
	if (!Z_Registration_Info_UEnum_EOdysseyTextureLayerStackTextureUpdateMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyTextureLayerStackTextureUpdateMode.InnerSingleton, Z_Construct_UEnum_OdysseyTexture_EOdysseyTextureLayerStackTextureUpdateMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyTextureLayerStackTextureUpdateMode.InnerSingleton;
}
// End Enum EOdysseyTextureLayerStackTextureUpdateMode

// Begin Class UOdysseyTextureLayerStack Function GetTexture
struct Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics
{
	struct OdysseyTextureLayerStack_eventGetTexture_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LayerStack" },
		{ "ModuleRelativePath", "Public/LayerStack/OdysseyTextureLayerStack.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyTextureLayerStack_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyTextureLayerStack, nullptr, "GetTexture", nullptr, nullptr, Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::OdysseyTextureLayerStack_eventGetTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::OdysseyTextureLayerStack_eventGetTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyTextureLayerStack::execGetTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetTexture();
	P_NATIVE_END;
}
// End Class UOdysseyTextureLayerStack Function GetTexture

// Begin Class UOdysseyTextureLayerStack
void UOdysseyTextureLayerStack::StaticRegisterNativesUOdysseyTextureLayerStack()
{
	UClass* Class = UOdysseyTextureLayerStack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTexture", &UOdysseyTextureLayerStack::execGetTexture },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyTextureLayerStack);
UClass* Z_Construct_UClass_UOdysseyTextureLayerStack_NoRegister()
{
	return UOdysseyTextureLayerStack::StaticClass();
}
struct Z_Construct_UClass_UOdysseyTextureLayerStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LayerStack/OdysseyTextureLayerStack.h" },
		{ "ModuleRelativePath", "Public/LayerStack/OdysseyTextureLayerStack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyTextureLayerStack_GetTexture, "GetTexture" }, // 3921737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyTextureLayerStack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyTextureLayerStack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyLayerStack,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerStack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyTextureLayerStack_Statics::ClassParams = {
	&UOdysseyTextureLayerStack::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001004A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerStack_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyTextureLayerStack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyTextureLayerStack()
{
	if (!Z_Registration_Info_UClass_UOdysseyTextureLayerStack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyTextureLayerStack.OuterSingleton, Z_Construct_UClass_UOdysseyTextureLayerStack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyTextureLayerStack.OuterSingleton;
}
template<> ODYSSEYTEXTURE_API UClass* StaticClass<UOdysseyTextureLayerStack>()
{
	return UOdysseyTextureLayerStack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyTextureLayerStack);
UOdysseyTextureLayerStack::~UOdysseyTextureLayerStack() {}
// End Class UOdysseyTextureLayerStack

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOdysseyTextureLayerStackTextureUpdateMode_StaticEnum, TEXT("EOdysseyTextureLayerStackTextureUpdateMode"), &Z_Registration_Info_UEnum_EOdysseyTextureLayerStackTextureUpdateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3051587906U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyTextureLayerStack, UOdysseyTextureLayerStack::StaticClass, TEXT("UOdysseyTextureLayerStack"), &Z_Registration_Info_UClass_UOdysseyTextureLayerStack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyTextureLayerStack), 198326991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_1350785417(TEXT("/Script/OdysseyTexture"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
