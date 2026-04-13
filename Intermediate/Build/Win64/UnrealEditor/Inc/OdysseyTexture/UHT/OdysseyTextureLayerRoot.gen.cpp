// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyTexture/Public/LayerStack/OdysseyTextureLayerRoot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyTextureLayerRoot() {}

// Begin Cross Module References
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayer();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayerRoot();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayerRoot_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyTexture();
// End Cross Module References

// Begin Class UOdysseyTextureLayerRoot
void UOdysseyTextureLayerRoot::StaticRegisterNativesUOdysseyTextureLayerRoot()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyTextureLayerRoot);
UClass* Z_Construct_UClass_UOdysseyTextureLayerRoot_NoRegister()
{
	return UOdysseyTextureLayerRoot::StaticClass();
}
struct Z_Construct_UClass_UOdysseyTextureLayerRoot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LayerStack/OdysseyTextureLayerRoot.h" },
		{ "ModuleRelativePath", "Public/LayerStack/OdysseyTextureLayerRoot.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyTextureLayerRoot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyTextureLayerRoot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyTextureLayer,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerRoot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyTextureLayerRoot_Statics::ClassParams = {
	&UOdysseyTextureLayerRoot::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001004A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerRoot_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyTextureLayerRoot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyTextureLayerRoot()
{
	if (!Z_Registration_Info_UClass_UOdysseyTextureLayerRoot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyTextureLayerRoot.OuterSingleton, Z_Construct_UClass_UOdysseyTextureLayerRoot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyTextureLayerRoot.OuterSingleton;
}
template<> ODYSSEYTEXTURE_API UClass* StaticClass<UOdysseyTextureLayerRoot>()
{
	return UOdysseyTextureLayerRoot::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyTextureLayerRoot);
UOdysseyTextureLayerRoot::~UOdysseyTextureLayerRoot() {}
// End Class UOdysseyTextureLayerRoot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerRoot_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyTextureLayerRoot, UOdysseyTextureLayerRoot::StaticClass, TEXT("UOdysseyTextureLayerRoot"), &Z_Registration_Info_UClass_UOdysseyTextureLayerRoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyTextureLayerRoot), 772463356U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerRoot_h_2280932479(TEXT("/Script/OdysseyTexture"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerRoot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerRoot_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
