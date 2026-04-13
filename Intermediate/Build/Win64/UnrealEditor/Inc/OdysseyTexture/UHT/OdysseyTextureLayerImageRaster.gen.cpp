// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyTexture/Public/LayerStack/OdysseyTextureLayerImageRaster.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyTextureLayerImageRaster() {}

// Begin Cross Module References
ODYSSEYCORE_API UEnum* Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayer();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayerImageRaster();
ODYSSEYTEXTURE_API UClass* Z_Construct_UClass_UOdysseyTextureLayerImageRaster_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyTexture();
// End Cross Module References

// Begin Class UOdysseyTextureLayerImageRaster
void UOdysseyTextureLayerImageRaster::StaticRegisterNativesUOdysseyTextureLayerImageRaster()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyTextureLayerImageRaster);
UClass* Z_Construct_UClass_UOdysseyTextureLayerImageRaster_NoRegister()
{
	return UOdysseyTextureLayerImageRaster::StaticClass();
}
struct Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LayerStack/OdysseyTextureLayerImageRaster.h" },
		{ "ModuleRelativePath", "Public/LayerStack/OdysseyTextureLayerImageRaster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAlphaLocked_MetaData[] = {
		{ "Category", "Texture | LayerStack" },
		{ "ModuleRelativePath", "Public/LayerStack/OdysseyTextureLayerImageRaster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "Texture | LayerStack" },
		{ "ModuleRelativePath", "Public/LayerStack/OdysseyTextureLayerImageRaster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "Category", "Texture | LayerStack" },
		{ "ModuleRelativePath", "Public/LayerStack/OdysseyTextureLayerImageRaster.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsAlphaLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAlphaLocked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyTextureLayerImageRaster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::NewProp_IsAlphaLocked_SetBit(void* Obj)
{
	((UOdysseyTextureLayerImageRaster*)Obj)->IsAlphaLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::NewProp_IsAlphaLocked = { "IsAlphaLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyTextureLayerImageRaster), &Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::NewProp_IsAlphaLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAlphaLocked_MetaData), NewProp_IsAlphaLocked_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyTextureLayerImageRaster, BlendMode), Z_Construct_UEnum_OdysseyCore_EOdysseyBlendingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 1337073500
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyTextureLayerImageRaster, Opacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::NewProp_IsAlphaLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::NewProp_BlendMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::NewProp_Opacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyTextureLayer,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::ClassParams = {
	&UOdysseyTextureLayerImageRaster::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::PropPointers),
	0,
	0x001004A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyTextureLayerImageRaster()
{
	if (!Z_Registration_Info_UClass_UOdysseyTextureLayerImageRaster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyTextureLayerImageRaster.OuterSingleton, Z_Construct_UClass_UOdysseyTextureLayerImageRaster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyTextureLayerImageRaster.OuterSingleton;
}
template<> ODYSSEYTEXTURE_API UClass* StaticClass<UOdysseyTextureLayerImageRaster>()
{
	return UOdysseyTextureLayerImageRaster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyTextureLayerImageRaster);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOdysseyTextureLayerImageRaster)
// End Class UOdysseyTextureLayerImageRaster

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerImageRaster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyTextureLayerImageRaster, UOdysseyTextureLayerImageRaster::StaticClass, TEXT("UOdysseyTextureLayerImageRaster"), &Z_Registration_Info_UClass_UOdysseyTextureLayerImageRaster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyTextureLayerImageRaster), 3278853727U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerImageRaster_h_143620562(TEXT("/Script/OdysseyTexture"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerImageRaster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerImageRaster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
