// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyWidgets/Public/HUDViewportElement/Elements/OdysseyHUDHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyHUDHandle() {}

// Begin Cross Module References
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDElement();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDHandle();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDHandle_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyWidgets();
// End Cross Module References

// Begin Class UOdysseyHUDHandle
void UOdysseyHUDHandle::StaticRegisterNativesUOdysseyHUDHandle()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyHUDHandle);
UClass* Z_Construct_UClass_UOdysseyHUDHandle_NoRegister()
{
	return UOdysseyHUDHandle::StaticClass();
}
struct Z_Construct_UClass_UOdysseyHUDHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyHUDHandle\n" },
		{ "IncludePath", "HUDViewportElement/Elements/OdysseyHUDHandle.h" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDHandle.h" },
		{ "ToolTip", "UOdysseyHUDHandle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mHandleSize_MetaData[] = {
		{ "Category", "Odyssey HUD Handle" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDHandle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_mHandleSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyHUDHandle>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyHUDHandle_Statics::NewProp_mHandleSize = { "mHandleSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDHandle, mHandleSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mHandleSize_MetaData), NewProp_mHandleSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyHUDHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDHandle_Statics::NewProp_mHandleSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDHandle_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyHUDHandle_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyHUDElement,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDHandle_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyHUDHandle_Statics::ClassParams = {
	&UOdysseyHUDHandle::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyHUDHandle_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDHandle_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDHandle_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyHUDHandle_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyHUDHandle()
{
	if (!Z_Registration_Info_UClass_UOdysseyHUDHandle.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyHUDHandle.OuterSingleton, Z_Construct_UClass_UOdysseyHUDHandle_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyHUDHandle.OuterSingleton;
}
template<> ODYSSEYWIDGETS_API UClass* StaticClass<UOdysseyHUDHandle>()
{
	return UOdysseyHUDHandle::StaticClass();
}
UOdysseyHUDHandle::UOdysseyHUDHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyHUDHandle);
UOdysseyHUDHandle::~UOdysseyHUDHandle() {}
// End Class UOdysseyHUDHandle

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDHandle_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyHUDHandle, UOdysseyHUDHandle::StaticClass, TEXT("UOdysseyHUDHandle"), &Z_Registration_Info_UClass_UOdysseyHUDHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyHUDHandle), 2145581747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDHandle_h_1122925785(TEXT("/Script/OdysseyWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDHandle_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
