// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyWidgets/Public/HUDViewportElement/Elements/OdysseyHUDPolygon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyHUDPolygon() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDElement();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDPolygon();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDPolygon_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyWidgets();
// End Cross Module References

// Begin Class UOdysseyHUDPolygon
void UOdysseyHUDPolygon::StaticRegisterNativesUOdysseyHUDPolygon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyHUDPolygon);
UClass* Z_Construct_UClass_UOdysseyHUDPolygon_NoRegister()
{
	return UOdysseyHUDPolygon::StaticClass();
}
struct Z_Construct_UClass_UOdysseyHUDPolygon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyHUDPolygon\n" },
		{ "IncludePath", "HUDViewportElement/Elements/OdysseyHUDPolygon.h" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDPolygon.h" },
		{ "ToolTip", "UOdysseyHUDPolygon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mPoints_MetaData[] = {
		{ "Category", "Odyssey HUD Polygon" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDPolygon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_mPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_mPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyHUDPolygon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyHUDPolygon_Statics::NewProp_mPoints_Inner = { "mPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOdysseyHUDPolygon_Statics::NewProp_mPoints = { "mPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDPolygon, mPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mPoints_MetaData), NewProp_mPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyHUDPolygon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDPolygon_Statics::NewProp_mPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDPolygon_Statics::NewProp_mPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDPolygon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyHUDPolygon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyHUDElement,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDPolygon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyHUDPolygon_Statics::ClassParams = {
	&UOdysseyHUDPolygon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyHUDPolygon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDPolygon_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDPolygon_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyHUDPolygon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyHUDPolygon()
{
	if (!Z_Registration_Info_UClass_UOdysseyHUDPolygon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyHUDPolygon.OuterSingleton, Z_Construct_UClass_UOdysseyHUDPolygon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyHUDPolygon.OuterSingleton;
}
template<> ODYSSEYWIDGETS_API UClass* StaticClass<UOdysseyHUDPolygon>()
{
	return UOdysseyHUDPolygon::StaticClass();
}
UOdysseyHUDPolygon::UOdysseyHUDPolygon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyHUDPolygon);
UOdysseyHUDPolygon::~UOdysseyHUDPolygon() {}
// End Class UOdysseyHUDPolygon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDPolygon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyHUDPolygon, UOdysseyHUDPolygon::StaticClass, TEXT("UOdysseyHUDPolygon"), &Z_Registration_Info_UClass_UOdysseyHUDPolygon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyHUDPolygon), 3077226291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDPolygon_h_2888164420(TEXT("/Script/OdysseyWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDPolygon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDPolygon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
