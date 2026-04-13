// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyWidgets/Public/HUDViewportElement/OdysseyHUDElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyHUDElement() {}

// Begin Cross Module References
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDElement();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDElement_NoRegister();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDSlateElement();
UPackage* Z_Construct_UPackage__Script_OdysseyWidgets();
// End Cross Module References

// Begin Class UOdysseyHUDElement
void UOdysseyHUDElement::StaticRegisterNativesUOdysseyHUDElement()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyHUDElement);
UClass* Z_Construct_UClass_UOdysseyHUDElement_NoRegister()
{
	return UOdysseyHUDElement::StaticClass();
}
struct Z_Construct_UClass_UOdysseyHUDElement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyHUDElement\n" },
		{ "IncludePath", "HUDViewportElement/OdysseyHUDElement.h" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/OdysseyHUDElement.h" },
		{ "ToolTip", "UOdysseyHUDElement" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyHUDElement>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyHUDElement_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyHUDSlateElement,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDElement_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyHUDElement_Statics::ClassParams = {
	&UOdysseyHUDElement::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDElement_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyHUDElement_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyHUDElement()
{
	if (!Z_Registration_Info_UClass_UOdysseyHUDElement.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyHUDElement.OuterSingleton, Z_Construct_UClass_UOdysseyHUDElement_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyHUDElement.OuterSingleton;
}
template<> ODYSSEYWIDGETS_API UClass* StaticClass<UOdysseyHUDElement>()
{
	return UOdysseyHUDElement::StaticClass();
}
UOdysseyHUDElement::UOdysseyHUDElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyHUDElement);
UOdysseyHUDElement::~UOdysseyHUDElement() {}
// End Class UOdysseyHUDElement

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_OdysseyHUDElement_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyHUDElement, UOdysseyHUDElement::StaticClass, TEXT("UOdysseyHUDElement"), &Z_Registration_Info_UClass_UOdysseyHUDElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyHUDElement), 3561901726U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_OdysseyHUDElement_h_1229756779(TEXT("/Script/OdysseyWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_OdysseyHUDElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_OdysseyHUDElement_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
