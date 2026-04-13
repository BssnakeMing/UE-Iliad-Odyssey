// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrushEditor/Classes/OdysseyBrushFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ODYSSEYBRUSHEDITOR_API UClass* Z_Construct_UClass_UOdysseyBrushFactory();
ODYSSEYBRUSHEDITOR_API UClass* Z_Construct_UClass_UOdysseyBrushFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_OdysseyBrushEditor();
// End Cross Module References

// Begin Class UOdysseyBrushFactory
void UOdysseyBrushFactory::StaticRegisterNativesUOdysseyBrushFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrushFactory);
UClass* Z_Construct_UClass_UOdysseyBrushFactory_NoRegister()
{
	return UOdysseyBrushFactory::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrushFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OdysseyBrushFactory.h" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "BlueprintFactory" },
		{ "Comment", "// The parent class of the created brush\n" },
		{ "ModuleRelativePath", "Classes/OdysseyBrushFactory.h" },
		{ "ToolTip", "The parent class of the created brush" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrushFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOdysseyBrushFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyBrushFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyBrushFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyBrushFactory_Statics::NewProp_ParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyBrushFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrushEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrushFactory_Statics::ClassParams = {
	&UOdysseyBrushFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyBrushFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushFactory_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrushFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrushFactory()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrushFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrushFactory.OuterSingleton, Z_Construct_UClass_UOdysseyBrushFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrushFactory.OuterSingleton;
}
template<> ODYSSEYBRUSHEDITOR_API UClass* StaticClass<UOdysseyBrushFactory>()
{
	return UOdysseyBrushFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrushFactory);
UOdysseyBrushFactory::~UOdysseyBrushFactory() {}
// End Class UOdysseyBrushFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrushEditor_Classes_OdysseyBrushFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrushFactory, UOdysseyBrushFactory::StaticClass, TEXT("UOdysseyBrushFactory"), &Z_Registration_Info_UClass_UOdysseyBrushFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrushFactory), 3394605124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrushEditor_Classes_OdysseyBrushFactory_h_2019595619(TEXT("/Script/OdysseyBrushEditor"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrushEditor_Classes_OdysseyBrushFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrushEditor_Classes_OdysseyBrushFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
