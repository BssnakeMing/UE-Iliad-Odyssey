// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyWidgets/Public/HUDViewportElement/Elements/OdysseyHUDLine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyHUDLine() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDElement();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDLine();
ODYSSEYWIDGETS_API UClass* Z_Construct_UClass_UOdysseyHUDLine_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyWidgets();
// End Cross Module References

// Begin Class UOdysseyHUDLine
void UOdysseyHUDLine::StaticRegisterNativesUOdysseyHUDLine()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyHUDLine);
UClass* Z_Construct_UClass_UOdysseyHUDLine_NoRegister()
{
	return UOdysseyHUDLine::StaticClass();
}
struct Z_Construct_UClass_UOdysseyHUDLine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyHUDLine\n" },
		{ "IncludePath", "HUDViewportElement/Elements/OdysseyHUDLine.h" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDLine.h" },
		{ "ToolTip", "UOdysseyHUDLine" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mStartPoint_MetaData[] = {
		{ "Category", "Odyssey HUD Line" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDLine.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mFinishPoint_MetaData[] = {
		{ "Category", "Odyssey HUD Line" },
		{ "ModuleRelativePath", "Public/HUDViewportElement/Elements/OdysseyHUDLine.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_mStartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_mFinishPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyHUDLine>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyHUDLine_Statics::NewProp_mStartPoint = { "mStartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDLine, mStartPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mStartPoint_MetaData), NewProp_mStartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyHUDLine_Statics::NewProp_mFinishPoint = { "mFinishPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyHUDLine, mFinishPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mFinishPoint_MetaData), NewProp_mFinishPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyHUDLine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDLine_Statics::NewProp_mStartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyHUDLine_Statics::NewProp_mFinishPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDLine_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyHUDLine_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyHUDElement,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyWidgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDLine_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyHUDLine_Statics::ClassParams = {
	&UOdysseyHUDLine::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyHUDLine_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDLine_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyHUDLine_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyHUDLine_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyHUDLine()
{
	if (!Z_Registration_Info_UClass_UOdysseyHUDLine.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyHUDLine.OuterSingleton, Z_Construct_UClass_UOdysseyHUDLine_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyHUDLine.OuterSingleton;
}
template<> ODYSSEYWIDGETS_API UClass* StaticClass<UOdysseyHUDLine>()
{
	return UOdysseyHUDLine::StaticClass();
}
UOdysseyHUDLine::UOdysseyHUDLine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyHUDLine);
UOdysseyHUDLine::~UOdysseyHUDLine() {}
// End Class UOdysseyHUDLine

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDLine_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyHUDLine, UOdysseyHUDLine::StaticClass, TEXT("UOdysseyHUDLine"), &Z_Registration_Info_UClass_UOdysseyHUDLine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyHUDLine), 3285777064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDLine_h_3242463948(TEXT("/Script/OdysseyWidgets"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDLine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyWidgets_Public_HUDViewportElement_Elements_OdysseyHUDLine_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
