// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyWidgets/Public/HUDViewportElement/Elements/OdysseyHUDEllipse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyHUDEllipse() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDElement();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDEllipse();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDEllipse_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyWidgets();
// End Cross Module References

// Begin Class UOdysseyHUDEllipse
void UOdysseyHUDEllipse::StaticRegisterNativesUOdysseyHUDEllipse()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyHUDEllipse);
UClass* Z_Construct_UClass_UOdysseyHUDEllipse_NoRegister()
{
	return UOdysseyHUDEllipse::StaticClass();
}
struct Z_Construct_UClass_UOdysseyHUDEllipse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyHUDCircle\n" },
		{ "IncludePath", "HUDViewportElement/Elements/OdysseyHUDEllipse.h" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDEllipse.h" },
		{ "ToolTip", "UOdysseyHUDCircle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mCenterPoint_MetaData[] = {
		{ "Category", "Odyssey HUD Ellipse" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDEllipse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mEllipseAaxis_MetaData[] = {
		{ "Category", "Odyssey HUD Ellipse" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDEllipse.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mEllipseBaxis_MetaData[] = {
		{ "Category", "Odyssey HUD Ellipse" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDEllipse.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_mCenterPoint;
	static const UECodeGen_Private::FIntPropertyParams NewProp_mEllipseAaxis;
	static const UECodeGen_Private::FIntPropertyParams NewProp_mEllipseBaxis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyHUDEllipse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyHUDEllipse_Statics::NewProp_mCenterPoint = { "mCenterPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDEllipse, mCenterPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mCenterPoint_MetaData), NewProp_mCenterPoint_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyHUDEllipse_Statics::NewProp_mEllipseAaxis = { "mEllipseAaxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDEllipse, mEllipseAaxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mEllipseAaxis_MetaData), NewProp_mEllipseAaxis_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyHUDEllipse_Statics::NewProp_mEllipseBaxis = { "mEllipseBaxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDEllipse, mEllipseBaxis), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mEllipseBaxis_MetaData), NewProp_mEllipseBaxis_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyHUDEllipse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDEllipse_Statics::NewProp_mCenterPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDEllipse_Statics::NewProp_mEllipseAaxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDEllipse_Statics::NewProp_mEllipseBaxis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDEllipse_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyHUDEllipse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyHUDElement,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDEllipse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyHUDEllipse_Statics::ClassParams = {
	&UOdysseyHUDEllipse::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyHUDEllipse_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDEllipse_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDEllipse_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyHUDEllipse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyHUDEllipse()
{
	if (!Z_Registration_Info_UClass_UOdysseyHUDEllipse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyHUDEllipse.OuterSingleton, Z_Construct_UClass_UOdysseyHUDEllipse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyHUDEllipse.OuterSingleton;
}
template<> ODYSSEYWIDGETS_API UClass* StaticClass<UOdysseyHUDEllipse>()
{
	return UOdysseyHUDEllipse::StaticClass();
}
UOdysseyHUDEllipse::UOdysseyHUDEllipse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyHUDEllipse);
UOdysseyHUDEllipse::~UOdysseyHUDEllipse() {}
// End Class UOdysseyHUDEllipse

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDEllipse_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyHUDEllipse, UOdysseyHUDEllipse::StaticClass, TEXT("UOdysseyHUDEllipse"), &Z_Registration_Info_UClass_UOdysseyHUDEllipse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyHUDEllipse), 2719798414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDEllipse_h_286834889(TEXT("/Script/OdysseyWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDEllipse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDEllipse_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
