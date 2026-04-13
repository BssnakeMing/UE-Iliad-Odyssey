// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyContentBrowserExtensions/Public/SOdysseyPackageReportDialog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSOdysseyPackageReportDialog() {}

// Begin Cross Module References
ODYSSEYCONTENTBROWSEREXTENSIONS_API UEnum* Z_Construct_UEnum_OdysseyContentBrowserExtensions_EExportImageFormat();
UPackage* Z_Construct_UPackage__Script_OdysseyContentBrowserExtensions();
// End Cross Module References

// Begin Enum EExportImageFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EExportImageFormat;
static UEnum* EExportImageFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EExportImageFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EExportImageFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyContentBrowserExtensions_EExportImageFormat, (UObject*)Z_Construct_UPackage__Script_OdysseyContentBrowserExtensions(), TEXT("EExportImageFormat"));
	}
	return Z_Registration_Info_UEnum_EExportImageFormat.OuterSingleton;
}
template<> ODYSSEYCONTENTBROWSEREXTENSIONS_API UEnum* StaticEnum<EExportImageFormat>()
{
	return EExportImageFormat_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyContentBrowserExtensions_EExportImageFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ExportImageFormat_BMP.DisplayName", "BMP       Windows bitmap" },
		{ "ExportImageFormat_BMP.Name", "ExportImageFormat_BMP" },
		{ "ExportImageFormat_HDR.DisplayName", "HDR       High Dynamic Range" },
		{ "ExportImageFormat_HDR.Hidden", "" },
		{ "ExportImageFormat_HDR.Name", "ExportImageFormat_HDR" },
		{ "ExportImageFormat_JPG.DisplayName", "JPG       Joint Photographic Experts Group" },
		{ "ExportImageFormat_JPG.Name", "ExportImageFormat_JPG" },
		{ "ExportImageFormat_MAX.DisplayName", "MAX" },
		{ "ExportImageFormat_MAX.Name", "ExportImageFormat_MAX" },
		{ "ExportImageFormat_PNG.DisplayName", "PNG       Portable Network Graphics" },
		{ "ExportImageFormat_PNG.Name", "ExportImageFormat_PNG" },
		{ "ExportImageFormat_TGA.DisplayName", "TGA       Truevision Targa" },
		{ "ExportImageFormat_TGA.Name", "ExportImageFormat_TGA" },
		{ "ModuleRelativePath", "Public/SOdysseyPackageReportDialog.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ExportImageFormat_PNG", (int64)ExportImageFormat_PNG },
		{ "ExportImageFormat_BMP", (int64)ExportImageFormat_BMP },
		{ "ExportImageFormat_TGA", (int64)ExportImageFormat_TGA },
		{ "ExportImageFormat_JPG", (int64)ExportImageFormat_JPG },
		{ "ExportImageFormat_HDR", (int64)ExportImageFormat_HDR },
		{ "ExportImageFormat_MAX", (int64)ExportImageFormat_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyContentBrowserExtensions_EExportImageFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyContentBrowserExtensions,
	nullptr,
	"EExportImageFormat",
	"EExportImageFormat",
	Z_Construct_UEnum_OdysseyContentBrowserExtensions_EExportImageFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyContentBrowserExtensions_EExportImageFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyContentBrowserExtensions_EExportImageFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyContentBrowserExtensions_EExportImageFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyContentBrowserExtensions_EExportImageFormat()
{
	if (!Z_Registration_Info_UEnum_EExportImageFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EExportImageFormat.InnerSingleton, Z_Construct_UEnum_OdysseyContentBrowserExtensions_EExportImageFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EExportImageFormat.InnerSingleton;
}
// End Enum EExportImageFormat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyContentBrowserExtensions_Public_SOdysseyPackageReportDialog_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EExportImageFormat_StaticEnum, TEXT("EExportImageFormat"), &Z_Registration_Info_UEnum_EExportImageFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4044704130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyContentBrowserExtensions_Public_SOdysseyPackageReportDialog_h_2217232528(TEXT("/Script/OdysseyContentBrowserExtensions"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyContentBrowserExtensions_Public_SOdysseyPackageReportDialog_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyContentBrowserExtensions_Public_SOdysseyPackageReportDialog_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
