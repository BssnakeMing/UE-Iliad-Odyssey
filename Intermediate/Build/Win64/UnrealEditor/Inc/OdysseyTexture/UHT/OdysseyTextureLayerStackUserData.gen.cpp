// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyTexture/Public/OdysseyTextureLayerStackUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyTextureLayerStackUserData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayerStack_NoRegister();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayerStackUserData();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayerStackUserData_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyTexture();
// End Cross Module References

// Begin Class UOdysseyTextureLayerStackUserData
void UOdysseyTextureLayerStackUserData::StaticRegisterNativesUOdysseyTextureLayerStackUserData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyTextureLayerStackUserData);
UClass* Z_Construct_UClass_UOdysseyTextureLayerStackUserData_NoRegister()
{
	return UOdysseyTextureLayerStackUserData::StaticClass();
}
struct Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OdysseyTextureLayerStackUserData.h" },
		{ "ModuleRelativePath", "Public/OdysseyTextureLayerStackUserData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/OdysseyTextureLayerStackUserData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyTextureLayerStackUserData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::NewProp_LayerStack = { "LayerStack", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyTextureLayerStackUserData, LayerStack), Z_Construct_UClass_UOdysseyTextureLayerStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerStack_MetaData), NewProp_LayerStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::NewProp_LayerStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::ClassParams = {
	&UOdysseyTextureLayerStackUserData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyTextureLayerStackUserData()
{
	if (!Z_Registration_Info_UClass_UOdysseyTextureLayerStackUserData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyTextureLayerStackUserData.OuterSingleton, Z_Construct_UClass_UOdysseyTextureLayerStackUserData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyTextureLayerStackUserData.OuterSingleton;
}
template<> ODYSSEYTEXTURE_API UClass* StaticClass<UOdysseyTextureLayerStackUserData>()
{
	return UOdysseyTextureLayerStackUserData::StaticClass();
}
UOdysseyTextureLayerStackUserData::UOdysseyTextureLayerStackUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyTextureLayerStackUserData);
UOdysseyTextureLayerStackUserData::~UOdysseyTextureLayerStackUserData() {}
// End Class UOdysseyTextureLayerStackUserData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_OdysseyTextureLayerStackUserData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyTextureLayerStackUserData, UOdysseyTextureLayerStackUserData::StaticClass, TEXT("UOdysseyTextureLayerStackUserData"), &Z_Registration_Info_UClass_UOdysseyTextureLayerStackUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyTextureLayerStackUserData), 230295593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_OdysseyTextureLayerStackUserData_h_903350270(TEXT("/Script/OdysseyTexture"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_OdysseyTextureLayerStackUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_OdysseyTextureLayerStackUserData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
