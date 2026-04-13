// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin Class UOdysseyBrushFunctionLibrary
void UOdysseyBrushFunctionLibrary::StaticRegisterNativesUOdysseyBrushFunctionLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrushFunctionLibrary);
UClass* Z_Construct_UClass_UOdysseyBrushFunctionLibrary_NoRegister()
{
	return UOdysseyBrushFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrushFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Proxies/OdysseyBrushFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushFunctionLibrary.h" },
		{ "ScriptName", "OdysseyBrushLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrushFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyBrushFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrushFunctionLibrary_Statics::ClassParams = {
	&UOdysseyBrushFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrushFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrushFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrushFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrushFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOdysseyBrushFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrushFunctionLibrary.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UClass* StaticClass<UOdysseyBrushFunctionLibrary>()
{
	return UOdysseyBrushFunctionLibrary::StaticClass();
}
UOdysseyBrushFunctionLibrary::UOdysseyBrushFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrushFunctionLibrary);
UOdysseyBrushFunctionLibrary::~UOdysseyBrushFunctionLibrary() {}
// End Class UOdysseyBrushFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrushFunctionLibrary, UOdysseyBrushFunctionLibrary::StaticClass, TEXT("UOdysseyBrushFunctionLibrary"), &Z_Registration_Info_UClass_UOdysseyBrushFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrushFunctionLibrary), 366463561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushFunctionLibrary_h_3262889851(TEXT("/Script/OdysseyBrush"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
