// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyViewportDrawingEditor/Private/ViewportDrawingEditor/OdysseyViewportDrawingEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyViewportDrawingEditor() {}

// Begin Cross Module References
ODYSSEYVIEWPORTDRAWINGEDITOR_API UEnum* Z_Construct_UEnum_OdysseyViewportDrawingEditor_EOdysseyViewportDrawingPaintingAdapterMethod();
UPackage* Z_Construct_UPackage__Script_OdysseyViewportDrawingEditor();
// End Cross Module References

// Begin Enum EOdysseyViewportDrawingPaintingAdapterMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyViewportDrawingPaintingAdapterMethod;
static UEnum* EOdysseyViewportDrawingPaintingAdapterMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyViewportDrawingPaintingAdapterMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyViewportDrawingPaintingAdapterMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyViewportDrawingEditor_EOdysseyViewportDrawingPaintingAdapterMethod, (UObject*)Z_Construct_UPackage__Script_OdysseyViewportDrawingEditor(), TEXT("EOdysseyViewportDrawingPaintingAdapterMethod"));
	}
	return Z_Registration_Info_UEnum_EOdysseyViewportDrawingPaintingAdapterMethod.OuterSingleton;
}
template<> ODYSSEYVIEWPORTDRAWINGEDITOR_API UEnum* StaticEnum<EOdysseyViewportDrawingPaintingAdapterMethod>()
{
	return EOdysseyViewportDrawingPaintingAdapterMethod_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyViewportDrawingEditor_EOdysseyViewportDrawingPaintingAdapterMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ViewportDrawingEditor/OdysseyViewportDrawingEditor.h" },
		{ "OdysseyMeshBasedPlanar.DisplayName", "Mesh Based (Planar)" },
		{ "OdysseyMeshBasedPlanar.Name", "OdysseyMeshBasedPlanar" },
		{ "OdysseyMeshBasedSphere.DisplayName", "Mesh Based (Sphere)" },
		{ "OdysseyMeshBasedSphere.Name", "OdysseyMeshBasedSphere" },
		{ "OdysseyScreenBased.DisplayName", "Screen Based" },
		{ "OdysseyScreenBased.Name", "OdysseyScreenBased" },
		{ "OdysseyTextureBased.DisplayName", "Texture Based" },
		{ "OdysseyTextureBased.Name", "OdysseyTextureBased" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "OdysseyTextureBased", (int64)OdysseyTextureBased },
		{ "OdysseyMeshBasedPlanar", (int64)OdysseyMeshBasedPlanar },
		{ "OdysseyMeshBasedSphere", (int64)OdysseyMeshBasedSphere },
		{ "OdysseyScreenBased", (int64)OdysseyScreenBased },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyViewportDrawingEditor_EOdysseyViewportDrawingPaintingAdapterMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyViewportDrawingEditor,
	nullptr,
	"EOdysseyViewportDrawingPaintingAdapterMethod",
	"EOdysseyViewportDrawingPaintingAdapterMethod",
	Z_Construct_UEnum_OdysseyViewportDrawingEditor_EOdysseyViewportDrawingPaintingAdapterMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyViewportDrawingEditor_EOdysseyViewportDrawingPaintingAdapterMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyViewportDrawingEditor_EOdysseyViewportDrawingPaintingAdapterMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyViewportDrawingEditor_EOdysseyViewportDrawingPaintingAdapterMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyViewportDrawingEditor_EOdysseyViewportDrawingPaintingAdapterMethod()
{
	if (!Z_Registration_Info_UEnum_EOdysseyViewportDrawingPaintingAdapterMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyViewportDrawingPaintingAdapterMethod.InnerSingleton, Z_Construct_UEnum_OdysseyViewportDrawingEditor_EOdysseyViewportDrawingPaintingAdapterMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyViewportDrawingPaintingAdapterMethod.InnerSingleton;
}
// End Enum EOdysseyViewportDrawingPaintingAdapterMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyViewportDrawingEditor_Private_ViewportDrawingEditor_OdysseyViewportDrawingEditor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOdysseyViewportDrawingPaintingAdapterMethod_StaticEnum, TEXT("EOdysseyViewportDrawingPaintingAdapterMethod"), &Z_Registration_Info_UEnum_EOdysseyViewportDrawingPaintingAdapterMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4190339744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyViewportDrawingEditor_Private_ViewportDrawingEditor_OdysseyViewportDrawingEditor_h_1260854039(TEXT("/Script/OdysseyViewportDrawingEditor"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyViewportDrawingEditor_Private_ViewportDrawingEditor_OdysseyViewportDrawingEditor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyViewportDrawingEditor_Private_ViewportDrawingEditor_OdysseyViewportDrawingEditor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
