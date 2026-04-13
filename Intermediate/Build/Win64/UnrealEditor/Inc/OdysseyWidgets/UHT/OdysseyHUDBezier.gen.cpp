// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyWidgets/Public/HUDViewportElement/Elements/OdysseyHUDBezier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyHUDBezier() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDBezier();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDBezier_NoRegister();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDElement();
UPackage* Z_Construct_UPackage__Script_OdysseyWidgets();
// End Cross Module References

// Begin Class UOdysseyHUDBezier
void UOdysseyHUDBezier::StaticRegisterNativesUOdysseyHUDBezier()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyHUDBezier);
UClass* Z_Construct_UClass_UOdysseyHUDBezier_NoRegister()
{
	return UOdysseyHUDBezier::StaticClass();
}
struct Z_Construct_UClass_UOdysseyHUDBezier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyHUDBezier\n" },
		{ "IncludePath", "HUDViewportElement/Elements/OdysseyHUDBezier.h" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDBezier.h" },
		{ "ToolTip", "UOdysseyHUDBezier" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mStartPoint_MetaData[] = {
		{ "Category", "Odyssey HUD Bezier" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mEndPoint_MetaData[] = {
		{ "Category", "Odyssey HUD Bezier" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDBezier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mControlPoint_MetaData[] = {
		{ "Category", "Odyssey HUD Bezier" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDBezier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_mStartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_mEndPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_mControlPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyHUDBezier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyHUDBezier_Statics::NewProp_mStartPoint = { "mStartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDBezier, mStartPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mStartPoint_MetaData), NewProp_mStartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyHUDBezier_Statics::NewProp_mEndPoint = { "mEndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDBezier, mEndPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mEndPoint_MetaData), NewProp_mEndPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyHUDBezier_Statics::NewProp_mControlPoint = { "mControlPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDBezier, mControlPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mControlPoint_MetaData), NewProp_mControlPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyHUDBezier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDBezier_Statics::NewProp_mStartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDBezier_Statics::NewProp_mEndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDBezier_Statics::NewProp_mControlPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDBezier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyHUDBezier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyHUDElement,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDBezier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyHUDBezier_Statics::ClassParams = {
	&UOdysseyHUDBezier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyHUDBezier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDBezier_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDBezier_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyHUDBezier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyHUDBezier()
{
	if (!Z_Registration_Info_UClass_UOdysseyHUDBezier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyHUDBezier.OuterSingleton, Z_Construct_UClass_UOdysseyHUDBezier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyHUDBezier.OuterSingleton;
}
template<> ODYSSEYWIDGETS_API UClass* StaticClass<UOdysseyHUDBezier>()
{
	return UOdysseyHUDBezier::StaticClass();
}
UOdysseyHUDBezier::UOdysseyHUDBezier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyHUDBezier);
UOdysseyHUDBezier::~UOdysseyHUDBezier() {}
// End Class UOdysseyHUDBezier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDBezier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyHUDBezier, UOdysseyHUDBezier::StaticClass, TEXT("UOdysseyHUDBezier"), &Z_Registration_Info_UClass_UOdysseyHUDBezier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyHUDBezier), 4178977001U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDBezier_h_3820441183(TEXT("/Script/OdysseyWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDBezier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDBezier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
