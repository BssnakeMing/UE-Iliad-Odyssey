// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyWidgets/Public/HUDViewportElement/Elements/OdysseyHUDRectangle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyHUDRectangle() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDElement();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDRectangle();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDRectangle_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyWidgets();
// End Cross Module References

// Begin Class UOdysseyHUDRectangle
void UOdysseyHUDRectangle::StaticRegisterNativesUOdysseyHUDRectangle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyHUDRectangle);
UClass* Z_Construct_UClass_UOdysseyHUDRectangle_NoRegister()
{
	return UOdysseyHUDRectangle::StaticClass();
}
struct Z_Construct_UClass_UOdysseyHUDRectangle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyHUDRectangle\n" },
		{ "IncludePath", "HUDViewportElement/Elements/OdysseyHUDRectangle.h" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDRectangle.h" },
		{ "ToolTip", "UOdysseyHUDRectangle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mTopLeftPoint_MetaData[] = {
		{ "Category", "Odyssey HUD Rectangle" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDRectangle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mBottomRightPoint_MetaData[] = {
		{ "Category", "Odyssey HUD Rectangle" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDRectangle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_mTopLeftPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_mBottomRightPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyHUDRectangle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyHUDRectangle_Statics::NewProp_mTopLeftPoint = { "mTopLeftPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDRectangle, mTopLeftPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mTopLeftPoint_MetaData), NewProp_mTopLeftPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyHUDRectangle_Statics::NewProp_mBottomRightPoint = { "mBottomRightPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDRectangle, mBottomRightPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mBottomRightPoint_MetaData), NewProp_mBottomRightPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyHUDRectangle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDRectangle_Statics::NewProp_mTopLeftPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDRectangle_Statics::NewProp_mBottomRightPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDRectangle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyHUDRectangle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyHUDElement,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDRectangle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyHUDRectangle_Statics::ClassParams = {
	&UOdysseyHUDRectangle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyHUDRectangle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDRectangle_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDRectangle_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyHUDRectangle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyHUDRectangle()
{
	if (!Z_Registration_Info_UClass_UOdysseyHUDRectangle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyHUDRectangle.OuterSingleton, Z_Construct_UClass_UOdysseyHUDRectangle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyHUDRectangle.OuterSingleton;
}
template<> ODYSSEYWIDGETS_API UClass* StaticClass<UOdysseyHUDRectangle>()
{
	return UOdysseyHUDRectangle::StaticClass();
}
UOdysseyHUDRectangle::UOdysseyHUDRectangle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyHUDRectangle);
UOdysseyHUDRectangle::~UOdysseyHUDRectangle() {}
// End Class UOdysseyHUDRectangle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDRectangle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyHUDRectangle, UOdysseyHUDRectangle::StaticClass, TEXT("UOdysseyHUDRectangle"), &Z_Registration_Info_UClass_UOdysseyHUDRectangle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyHUDRectangle), 1890175830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDRectangle_h_2537232123(TEXT("/Script/OdysseyWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDRectangle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDRectangle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
