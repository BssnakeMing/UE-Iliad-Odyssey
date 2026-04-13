// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyLayerStack/Public/OdysseyCustomLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyCustomLayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyCustomLayer();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyCustomLayer_NoRegister();
ODYSSEYLAYERSTACK_API UClass* Z_Construct_UClass_UOdysseyLayer();
UPackage* Z_Construct_UPackage__Script_OdysseyLayerStack();
// End Cross Module References

// Begin Class UOdysseyCustomLayer
void UOdysseyCustomLayer::StaticRegisterNativesUOdysseyCustomLayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyCustomLayer);
UClass* Z_Construct_UClass_UOdysseyCustomLayer_NoRegister()
{
	return UOdysseyCustomLayer::StaticClass();
}
struct Z_Construct_UClass_UOdysseyCustomLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * @brief Should be the base class for all Blueprint based Layers\n * \n */" },
		{ "IncludePath", "OdysseyCustomLayer.h" },
		{ "ModuleRelativePath", "Public/OdysseyCustomLayer.h" },
		{ "ToolTip", "@brief Should be the base class for all Blueprint based Layers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Layer" },
		{ "Comment", "//Default properties\n" },
		{ "ModuleRelativePath", "Public/OdysseyCustomLayer.h" },
		{ "ToolTip", "Default properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayOrder_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyCustomLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleLayerStacks_MetaData[] = {
		{ "Category", "Layer" },
		{ "ModuleRelativePath", "Public/OdysseyCustomLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DisplayOrder;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CompatibleLayerStacks_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_CompatibleLayerStacks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyCustomLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UOdysseyCustomLayer_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyCustomLayer, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyCustomLayer_Statics::NewProp_DisplayOrder = { "DisplayOrder", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyCustomLayer, DisplayOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayOrder_MetaData), NewProp_DisplayOrder_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UOdysseyCustomLayer_Statics::NewProp_CompatibleLayerStacks_ElementProp = { "CompatibleLayerStacks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UOdysseyCustomLayer_Statics::NewProp_CompatibleLayerStacks = { "CompatibleLayerStacks", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyCustomLayer, CompatibleLayerStacks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibleLayerStacks_MetaData), NewProp_CompatibleLayerStacks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyCustomLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyCustomLayer_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyCustomLayer_Statics::NewProp_DisplayOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyCustomLayer_Statics::NewProp_CompatibleLayerStacks_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyCustomLayer_Statics::NewProp_CompatibleLayerStacks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyCustomLayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyCustomLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyLayer,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyLayerStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyCustomLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyCustomLayer_Statics::ClassParams = {
	&UOdysseyCustomLayer::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyCustomLayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyCustomLayer_Statics::PropPointers),
	0,
	0x001004A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyCustomLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyCustomLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyCustomLayer()
{
	if (!Z_Registration_Info_UClass_UOdysseyCustomLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyCustomLayer.OuterSingleton, Z_Construct_UClass_UOdysseyCustomLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyCustomLayer.OuterSingleton;
}
template<> ODYSSEYLAYERSTACK_API UClass* StaticClass<UOdysseyCustomLayer>()
{
	return UOdysseyCustomLayer::StaticClass();
}
UOdysseyCustomLayer::UOdysseyCustomLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyCustomLayer);
UOdysseyCustomLayer::~UOdysseyCustomLayer() {}
// End Class UOdysseyCustomLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyCustomLayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyCustomLayer, UOdysseyCustomLayer::StaticClass, TEXT("UOdysseyCustomLayer"), &Z_Registration_Info_UClass_UOdysseyCustomLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyCustomLayer), 3150844242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyCustomLayer_h_2636830564(TEXT("/Script/OdysseyLayerStack"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyCustomLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyCustomLayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
