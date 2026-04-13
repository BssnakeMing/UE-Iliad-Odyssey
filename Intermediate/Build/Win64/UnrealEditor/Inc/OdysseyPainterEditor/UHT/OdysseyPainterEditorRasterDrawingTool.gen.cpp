// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyPainterEditor/Public/Tools/RasterDrawingTool/OdysseyPainterEditorRasterDrawingTool.h"
#include "Editor/OdysseyPaintEngine/Public/OdysseyBlendParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyPainterEditorRasterDrawingTool() {}

// Begin Cross Module References
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrush_NoRegister();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushOptions_NoRegister();
ODYSSEYPAINTENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBlendParameters();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_NoRegister();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyPainterEditorTool();
ODYSSEYSHAPES_API UClass* Z_Construct_UClass_UOdysseyShape_NoRegister();
ODYSSEYSHAPES_API UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseyShape();
UPackage* Z_Construct_UPackage__Script_OdysseyPainterEditor();
// End Cross Module References

// Begin Class UOdysseyPainterEditorRasterDrawingTool
void UOdysseyPainterEditorRasterDrawingTool::StaticRegisterNativesUOdysseyPainterEditorRasterDrawingTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyPainterEditorRasterDrawingTool);
UClass* Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_NoRegister()
{
	return UOdysseyPainterEditorRasterDrawingTool::StaticClass();
}
struct Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/RasterDrawingTool/OdysseyPainterEditorRasterDrawingTool.h" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyPainterEditorRasterDrawingTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[] = {
		{ "Comment", "//Visible properties\n" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyPainterEditorRasterDrawingTool.h" },
		{ "ToolTip", "Visible properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyPainterEditorRasterDrawingTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyPainterEditorRasterDrawingTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedShape_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyPainterEditorRasterDrawingTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedShapeInstance_MetaData[] = {
		{ "Category", "Shape" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyPainterEditorRasterDrawingTool.h" },
		{ "ShowInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailableShapes_MetaData[] = {
		{ "Comment", "// Hidden properties\n" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyPainterEditorRasterDrawingTool.h" },
		{ "ToolTip", "Hidden properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendParameters_MetaData[] = {
		{ "Category", "Blending" },
		{ "ModuleRelativePath", "Public/Tools/RasterDrawingTool/OdysseyPainterEditorRasterDrawingTool.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Brush;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushOptions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedShape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectedShape;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedShapeInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AvailableShapes_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AvailableShapes_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AvailableShapes_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AvailableShapes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlendParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyPainterEditorRasterDrawingTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorRasterDrawingTool, Brush), Z_Construct_UClass_UOdysseyBrush_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brush_MetaData), NewProp_Brush_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_BrushInstance = { "BrushInstance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorRasterDrawingTool, BrushInstance), Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushInstance_MetaData), NewProp_BrushInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_BrushOptions = { "BrushOptions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorRasterDrawingTool, BrushOptions), Z_Construct_UClass_UOdysseyBrushOptions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushOptions_MetaData), NewProp_BrushOptions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_SelectedShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_SelectedShape = { "SelectedShape", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorRasterDrawingTool, SelectedShape), Z_Construct_UEnum_OdysseyShapes_EOdysseyShape, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedShape_MetaData), NewProp_SelectedShape_MetaData) }; // 793889286
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_SelectedShapeInstance = { "SelectedShapeInstance", nullptr, (EPropertyFlags)0x00220800000a0809, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorRasterDrawingTool, SelectedShapeInstance), Z_Construct_UClass_UOdysseyShape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedShapeInstance_MetaData), NewProp_SelectedShapeInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_AvailableShapes_ValueProp = { "AvailableShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UOdysseyShape_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_AvailableShapes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_AvailableShapes_Key_KeyProp = { "AvailableShapes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_OdysseyShapes_EOdysseyShape, METADATA_PARAMS(0, nullptr) }; // 793889286
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_AvailableShapes = { "AvailableShapes", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorRasterDrawingTool, AvailableShapes), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailableShapes_MetaData), NewProp_AvailableShapes_MetaData) }; // 793889286
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_BlendParameters = { "BlendParameters", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorRasterDrawingTool, BlendParameters), Z_Construct_UScriptStruct_FOdysseyBlendParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendParameters_MetaData), NewProp_BlendParameters_MetaData) }; // 327957349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_Brush,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_BrushInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_BrushOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_SelectedShape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_SelectedShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_SelectedShapeInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_AvailableShapes_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_AvailableShapes_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_AvailableShapes_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_AvailableShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::NewProp_BlendParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyPainterEditorTool,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyPainterEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::ClassParams = {
	&UOdysseyPainterEditorRasterDrawingTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool()
{
	if (!Z_Registration_Info_UClass_UOdysseyPainterEditorRasterDrawingTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyPainterEditorRasterDrawingTool.OuterSingleton, Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyPainterEditorRasterDrawingTool.OuterSingleton;
}
template<> ODYSSEYPAINTEREDITOR_API UClass* StaticClass<UOdysseyPainterEditorRasterDrawingTool>()
{
	return UOdysseyPainterEditorRasterDrawingTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyPainterEditorRasterDrawingTool);
// End Class UOdysseyPainterEditorRasterDrawingTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyPainterEditorRasterDrawingTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyPainterEditorRasterDrawingTool, UOdysseyPainterEditorRasterDrawingTool::StaticClass, TEXT("UOdysseyPainterEditorRasterDrawingTool"), &Z_Registration_Info_UClass_UOdysseyPainterEditorRasterDrawingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyPainterEditorRasterDrawingTool), 3734229930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyPainterEditorRasterDrawingTool_h_3301706356(TEXT("/Script/OdysseyPainterEditor"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyPainterEditorRasterDrawingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_RasterDrawingTool_OdysseyPainterEditorRasterDrawingTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
