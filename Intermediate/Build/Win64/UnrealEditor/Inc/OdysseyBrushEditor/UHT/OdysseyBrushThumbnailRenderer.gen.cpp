// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrushEditor/Classes/OdysseyBrushThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushThumbnailRenderer() {}

// Begin Cross Module References
ODYSSEYBRUSHEDITOR_API UClass* Z_Construct_UClass_UOdysseyBrushThumbnailRenderer();
ODYSSEYBRUSHEDITOR_API UClass* Z_Construct_UClass_UOdysseyBrushThumbnailRenderer_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_OdysseyBrushEditor();
// End Cross Module References

// Begin Class UOdysseyBrushThumbnailRenderer
void UOdysseyBrushThumbnailRenderer::StaticRegisterNativesUOdysseyBrushThumbnailRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrushThumbnailRenderer);
UClass* Z_Construct_UClass_UOdysseyBrushThumbnailRenderer_NoRegister()
{
	return UOdysseyBrushThumbnailRenderer::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrushThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//This class will be useful when doing procedural thumbnails\n" },
		{ "IncludePath", "OdysseyBrushThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushThumbnailRenderer.h" },
		{ "ToolTip", "This class will be useful when doing procedural thumbnails" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrushThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyBrushThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrushEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrushThumbnailRenderer_Statics::ClassParams = {
	&UOdysseyBrushThumbnailRenderer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrushThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrushThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrushThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrushThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UOdysseyBrushThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrushThumbnailRenderer.OuterSingleton;
}
template<> ODYSSEYBRUSHEDITOR_API UClass* StaticClass<UOdysseyBrushThumbnailRenderer>()
{
	return UOdysseyBrushThumbnailRenderer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrushThumbnailRenderer);
UOdysseyBrushThumbnailRenderer::~UOdysseyBrushThumbnailRenderer() {}
// End Class UOdysseyBrushThumbnailRenderer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrushEditor_Classes_OdysseyBrushThumbnailRenderer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrushThumbnailRenderer, UOdysseyBrushThumbnailRenderer::StaticClass, TEXT("UOdysseyBrushThumbnailRenderer"), &Z_Registration_Info_UClass_UOdysseyBrushThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrushThumbnailRenderer), 1016171535U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrushEditor_Classes_OdysseyBrushThumbnailRenderer_h_4019856928(TEXT("/Script/OdysseyBrushEditor"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrushEditor_Classes_OdysseyBrushThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrushEditor_Classes_OdysseyBrushThumbnailRenderer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
