// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/OdysseyBrushBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrush();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrush_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin Class UOdysseyBrush
void UOdysseyBrush::StaticRegisterNativesUOdysseyBrush()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrush);
UClass* Z_Construct_UClass_UOdysseyBrush_NoRegister()
{
	return UOdysseyBrush::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrush_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Odyssey Brush\n * Design a brush to paint with.\n */" },
		{ "IncludePath", "OdysseyBrushBlueprint.h" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushBlueprint.h" },
		{ "ToolTip", "Odyssey Brush\nDesign a brush to paint with." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrush>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyBrush_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrush_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrush_Statics::ClassParams = {
	&UOdysseyBrush::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrush_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrush_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrush()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrush.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrush.OuterSingleton, Z_Construct_UClass_UOdysseyBrush_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrush.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UClass* StaticClass<UOdysseyBrush>()
{
	return UOdysseyBrush::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrush);
UOdysseyBrush::~UOdysseyBrush() {}
// End Class UOdysseyBrush

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrush, UOdysseyBrush::StaticClass, TEXT("UOdysseyBrush"), &Z_Registration_Info_UClass_UOdysseyBrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrush), 2253435519U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushBlueprint_h_2761254079(TEXT("/Script/OdysseyBrush"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
