// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyTexture/Public/OdysseyTextureImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyTextureImportFactory() {}

// Begin Cross Module References
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureImportFactory();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureImportFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_OdysseyTexture();
// End Cross Module References

// Begin Class UOdysseyTextureImportFactory
void UOdysseyTextureImportFactory::StaticRegisterNativesUOdysseyTextureImportFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyTextureImportFactory);
UClass* Z_Construct_UClass_UOdysseyTextureImportFactory_NoRegister()
{
	return UOdysseyTextureImportFactory::StaticClass();
}
struct Z_Construct_UClass_UOdysseyTextureImportFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OdysseyTextureImportFactory.h" },
		{ "ModuleRelativePath", "Public/OdysseyTextureImportFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyTextureImportFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyTextureImportFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureImportFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyTextureImportFactory_Statics::ClassParams = {
	&UOdysseyTextureImportFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureImportFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyTextureImportFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyTextureImportFactory()
{
	if (!Z_Registration_Info_UClass_UOdysseyTextureImportFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyTextureImportFactory.OuterSingleton, Z_Construct_UClass_UOdysseyTextureImportFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyTextureImportFactory.OuterSingleton;
}
template<> ODYSSEYTEXTURE_API UClass* StaticClass<UOdysseyTextureImportFactory>()
{
	return UOdysseyTextureImportFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyTextureImportFactory);
UOdysseyTextureImportFactory::~UOdysseyTextureImportFactory() {}
// End Class UOdysseyTextureImportFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_OdysseyTextureImportFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyTextureImportFactory, UOdysseyTextureImportFactory::StaticClass, TEXT("UOdysseyTextureImportFactory"), &Z_Registration_Info_UClass_UOdysseyTextureImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyTextureImportFactory), 3614395487U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_OdysseyTextureImportFactory_h_2903636361(TEXT("/Script/OdysseyTexture"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_OdysseyTextureImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_OdysseyTextureImportFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
