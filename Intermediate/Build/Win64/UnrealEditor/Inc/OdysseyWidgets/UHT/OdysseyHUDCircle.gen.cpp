// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyWidgets/Public/HUDViewportElement/Elements/OdysseyHUDCircle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyHUDCircle() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDCircle();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDCircle_NoRegister();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDElement();
UPackage* Z_Construct_UPackage__Script_OdysseyWidgets();
// End Cross Module References

// Begin Class UOdysseyHUDCircle
void UOdysseyHUDCircle::StaticRegisterNativesUOdysseyHUDCircle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyHUDCircle);
UClass* Z_Construct_UClass_UOdysseyHUDCircle_NoRegister()
{
	return UOdysseyHUDCircle::StaticClass();
}
struct Z_Construct_UClass_UOdysseyHUDCircle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyHUDCircle\n" },
		{ "IncludePath", "HUDViewportElement/Elements/OdysseyHUDCircle.h" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDCircle.h" },
		{ "ToolTip", "UOdysseyHUDCircle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mCenterPoint_MetaData[] = {
		{ "Category", "Odyssey HUD Circle" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDCircle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mRadius_MetaData[] = {
		{ "Category", "Odyssey HUD Circle" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDCircle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_mCenterPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_mRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyHUDCircle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyHUDCircle_Statics::NewProp_mCenterPoint = { "mCenterPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDCircle, mCenterPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mCenterPoint_MetaData), NewProp_mCenterPoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyHUDCircle_Statics::NewProp_mRadius = { "mRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDCircle, mRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mRadius_MetaData), NewProp_mRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyHUDCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDCircle_Statics::NewProp_mCenterPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDCircle_Statics::NewProp_mRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDCircle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyHUDCircle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyHUDElement,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDCircle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyHUDCircle_Statics::ClassParams = {
	&UOdysseyHUDCircle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyHUDCircle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDCircle_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDCircle_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyHUDCircle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyHUDCircle()
{
	if (!Z_Registration_Info_UClass_UOdysseyHUDCircle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyHUDCircle.OuterSingleton, Z_Construct_UClass_UOdysseyHUDCircle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyHUDCircle.OuterSingleton;
}
template<> ODYSSEYWIDGETS_API UClass* StaticClass<UOdysseyHUDCircle>()
{
	return UOdysseyHUDCircle::StaticClass();
}
UOdysseyHUDCircle::UOdysseyHUDCircle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyHUDCircle);
UOdysseyHUDCircle::~UOdysseyHUDCircle() {}
// End Class UOdysseyHUDCircle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDCircle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyHUDCircle, UOdysseyHUDCircle::StaticClass, TEXT("UOdysseyHUDCircle"), &Z_Registration_Info_UClass_UOdysseyHUDCircle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyHUDCircle), 1183987768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDCircle_h_3600457428(TEXT("/Script/OdysseyWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDCircle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDCircle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
