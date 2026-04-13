// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/OdysseyBrushOptions.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushOptions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushOptions();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushOptions_NoRegister();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBrushColor();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin Class UOdysseyBrushOptions
void UOdysseyBrushOptions::StaticRegisterNativesUOdysseyBrushOptions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrushOptions);
UClass* Z_Construct_UClass_UOdysseyBrushOptions_NoRegister()
{
	return UOdysseyBrushOptions::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrushOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OdysseyBrushOptions.h" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushOptions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "Common" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "1" },
		{ "Delta", "1" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushOptions.h" },
		{ "Multiple", "1" },
		{ "SliderExponent", "2" },
		{ "UIMax", "2000" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flow_MetaData[] = {
		{ "Category", "Common" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Delta", "1" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushOptions.h" },
		{ "Multiple", "1" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
		{ "Units", "Percent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Common" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushOptions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Flow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrushOptions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOdysseyBrushOptions_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBrushOptions, Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOdysseyBrushOptions_Statics::NewProp_Flow = { "Flow", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBrushOptions, Flow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flow_MetaData), NewProp_Flow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyBrushOptions_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBrushOptions, Color), Z_Construct_UScriptStruct_FOdysseyBrushColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) }; // 1885050580
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyBrushOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushOptions_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushOptions_Statics::NewProp_Flow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushOptions_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushOptions_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyBrushOptions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushOptions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrushOptions_Statics::ClassParams = {
	&UOdysseyBrushOptions::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyBrushOptions_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushOptions_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushOptions_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrushOptions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrushOptions()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrushOptions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrushOptions.OuterSingleton, Z_Construct_UClass_UOdysseyBrushOptions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrushOptions.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UClass* StaticClass<UOdysseyBrushOptions>()
{
	return UOdysseyBrushOptions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrushOptions);
UOdysseyBrushOptions::~UOdysseyBrushOptions() {}
// End Class UOdysseyBrushOptions

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushOptions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrushOptions, UOdysseyBrushOptions::StaticClass, TEXT("UOdysseyBrushOptions"), &Z_Registration_Info_UClass_UOdysseyBrushOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrushOptions), 866121870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushOptions_h_2718553348(TEXT("/Script/OdysseyBrush"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushOptions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
