// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyTexture/Public/LayerStack/OdysseyTextureLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyTextureLayer() {}

// Begin Cross Module References
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayer();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayer();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyTexture();
// End Cross Module References

// Begin Class UOdysseyTextureLayer
void UOdysseyTextureLayer::StaticRegisterNativesUOdysseyTextureLayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyTextureLayer);
UClass* Z_Construct_UClass_UOdysseyTextureLayer_NoRegister()
{
	return UOdysseyTextureLayer::StaticClass();
}
struct Z_Construct_UClass_UOdysseyTextureLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LayerStack/OdysseyTextureLayer.h" },
		{ "ModuleRelativePath", "Public/LayerStack/OdysseyTextureLayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyTextureLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyTextureLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyLayer,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyTextureLayer_Statics::ClassParams = {
	&UOdysseyTextureLayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyTextureLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyTextureLayer()
{
	if (!Z_Registration_Info_UClass_UOdysseyTextureLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyTextureLayer.OuterSingleton, Z_Construct_UClass_UOdysseyTextureLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyTextureLayer.OuterSingleton;
}
template<> ODYSSEYTEXTURE_API UClass* StaticClass<UOdysseyTextureLayer>()
{
	return UOdysseyTextureLayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyTextureLayer);
UOdysseyTextureLayer::~UOdysseyTextureLayer() {}
// End Class UOdysseyTextureLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyTextureLayer, UOdysseyTextureLayer::StaticClass, TEXT("UOdysseyTextureLayer"), &Z_Registration_Info_UClass_UOdysseyTextureLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyTextureLayer), 3087168796U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayer_h_3194704033(TEXT("/Script/OdysseyTexture"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
