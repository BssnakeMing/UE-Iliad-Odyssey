// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyEditorBrushBlueprints/Private/TextureEditor/OdysseyTextureEditorFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyTextureEditorFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ODYSSEYEDITORBRUSHBLUEPRINTS_API UClass* Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary();
ODYSSEYEDITORBRUSHBLUEPRINTS_API UClass* Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyEditorBrushBlueprints();
// End Cross Module References

// Begin Class UOdysseyTextureEditorFunctionLibrary
void UOdysseyTextureEditorFunctionLibrary::StaticRegisterNativesUOdysseyTextureEditorFunctionLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyTextureEditorFunctionLibrary);
UClass* Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary_NoRegister()
{
	return UOdysseyTextureEditorFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//---\n" },
		{ "IncludePath", "TextureEditor/OdysseyTextureEditorFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/TextureEditor/OdysseyTextureEditorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyTextureEditorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyEditorBrushBlueprints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary_Statics::ClassParams = {
	&UOdysseyTextureEditorFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOdysseyTextureEditorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyTextureEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyTextureEditorFunctionLibrary.OuterSingleton;
}
template<> ODYSSEYEDITORBRUSHBLUEPRINTS_API UClass* StaticClass<UOdysseyTextureEditorFunctionLibrary>()
{
	return UOdysseyTextureEditorFunctionLibrary::StaticClass();
}
UOdysseyTextureEditorFunctionLibrary::UOdysseyTextureEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyTextureEditorFunctionLibrary);
UOdysseyTextureEditorFunctionLibrary::~UOdysseyTextureEditorFunctionLibrary() {}
// End Class UOdysseyTextureEditorFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyEditorBrushBlueprints_Private_TextureEditor_OdysseyTextureEditorFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyTextureEditorFunctionLibrary, UOdysseyTextureEditorFunctionLibrary::StaticClass, TEXT("UOdysseyTextureEditorFunctionLibrary"), &Z_Registration_Info_UClass_UOdysseyTextureEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyTextureEditorFunctionLibrary), 3233656791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyEditorBrushBlueprints_Private_TextureEditor_OdysseyTextureEditorFunctionLibrary_h_4044425447(TEXT("/Script/OdysseyEditorBrushBlueprints"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyEditorBrushBlueprints_Private_TextureEditor_OdysseyTextureEditorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyEditorBrushBlueprints_Private_TextureEditor_OdysseyTextureEditorFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
