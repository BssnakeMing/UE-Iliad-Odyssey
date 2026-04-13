// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyWidgets/Public/HUDViewportElement/OdysseyHUDSlateElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyHUDSlateElement() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDSlateElement();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDSlateElement_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyWidgets();
// End Cross Module References

// Begin Class UOdysseyHUDSlateElement
void UOdysseyHUDSlateElement::StaticRegisterNativesUOdysseyHUDSlateElement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyHUDSlateElement);
UClass* Z_Construct_UClass_UOdysseyHUDSlateElement_NoRegister()
{
	return UOdysseyHUDSlateElement::StaticClass();
}
struct Z_Construct_UClass_UOdysseyHUDSlateElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyHUD\n" },
		{ "IncludePath", "HUDViewportElement/OdysseyHUDSlateElement.h" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/OdysseyHUDSlateElement.h" },
		{ "ToolTip", "UOdysseyHUD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mName_MetaData[] = {
		{ "ModuleRelativePath", "Public/HUDViewportElement/OdysseyHUDSlateElement.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_mName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyHUDSlateElement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::NewProp_mName = { "mName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDSlateElement, mName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mName_MetaData), NewProp_mName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::NewProp_mName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::ClassParams = {
	&UOdysseyHUDSlateElement::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyHUDSlateElement()
{
	if (!Z_Registration_Info_UClass_UOdysseyHUDSlateElement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyHUDSlateElement.OuterSingleton, Z_Construct_UClass_UOdysseyHUDSlateElement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyHUDSlateElement.OuterSingleton;
}
template<> ODYSSEYWIDGETS_API UClass* StaticClass<UOdysseyHUDSlateElement>()
{
	return UOdysseyHUDSlateElement::StaticClass();
}
UOdysseyHUDSlateElement::UOdysseyHUDSlateElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyHUDSlateElement);
UOdysseyHUDSlateElement::~UOdysseyHUDSlateElement() {}
// End Class UOdysseyHUDSlateElement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_OdysseyHUDSlateElement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyHUDSlateElement, UOdysseyHUDSlateElement::StaticClass, TEXT("UOdysseyHUDSlateElement"), &Z_Registration_Info_UClass_UOdysseyHUDSlateElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyHUDSlateElement), 1956958547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_OdysseyHUDSlateElement_h_3790455511(TEXT("/Script/OdysseyWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_OdysseyHUDSlateElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_OdysseyHUDSlateElement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
