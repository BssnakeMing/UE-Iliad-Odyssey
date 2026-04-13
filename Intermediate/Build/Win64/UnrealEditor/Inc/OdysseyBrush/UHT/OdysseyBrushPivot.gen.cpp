// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushPivot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushPivot() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode();
ODYSSEYBRUSH_API UEnum* Z_Construct_UEnum_OdysseyBrush_EPivotReference();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyPivot();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin Enum EPivotReference
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPivotReference;
static UEnum* EPivotReference_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPivotReference.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPivotReference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyBrush_EPivotReference, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("EPivotReference"));
	}
	return Z_Registration_Info_UEnum_EPivotReference.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UEnum* StaticEnum<EPivotReference>()
{
	return EPivotReference_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyBrush_EPivotReference_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////\n// Pivot Enum\n" },
		{ "DisplayName", "EOdysseyHandlePositionReference" },
		{ "kBotLeft.DisplayName", "Bot Left" },
		{ "kBotLeft.Name", "EPivotReference::kBotLeft" },
		{ "kBotMiddle.DisplayName", "Bot Middle" },
		{ "kBotMiddle.Name", "EPivotReference::kBotMiddle" },
		{ "kBotRight.DisplayName", "Bot Right" },
		{ "kBotRight.Name", "EPivotReference::kBotRight" },
		{ "kCenter.DisplayName", "Center" },
		{ "kCenter.Name", "EPivotReference::kCenter" },
		{ "kMiddleLeft.DisplayName", "Middle Left" },
		{ "kMiddleLeft.Name", "EPivotReference::kMiddleLeft" },
		{ "kMiddleRight.DisplayName", "Middle Right" },
		{ "kMiddleRight.Name", "EPivotReference::kMiddleRight" },
		{ "kTopLeft.DisplayName", "Top Left" },
		{ "kTopLeft.Name", "EPivotReference::kTopLeft" },
		{ "kTopMiddle.DisplayName", "Top Middle" },
		{ "kTopMiddle.Name", "EPivotReference::kTopMiddle" },
		{ "kTopRight.DisplayName", "Top Right" },
		{ "kTopRight.Name", "EPivotReference::kTopRight" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushPivot.h" },
		{ "ToolTip", "Pivot Enum" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPivotReference::kTopLeft", (int64)EPivotReference::kTopLeft },
		{ "EPivotReference::kTopMiddle", (int64)EPivotReference::kTopMiddle },
		{ "EPivotReference::kTopRight", (int64)EPivotReference::kTopRight },
		{ "EPivotReference::kMiddleLeft", (int64)EPivotReference::kMiddleLeft },
		{ "EPivotReference::kCenter", (int64)EPivotReference::kCenter },
		{ "EPivotReference::kMiddleRight", (int64)EPivotReference::kMiddleRight },
		{ "EPivotReference::kBotLeft", (int64)EPivotReference::kBotLeft },
		{ "EPivotReference::kBotMiddle", (int64)EPivotReference::kBotMiddle },
		{ "EPivotReference::kBotRight", (int64)EPivotReference::kBotRight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyBrush_EPivotReference_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	"EPivotReference",
	"EPivotReference",
	Z_Construct_UEnum_OdysseyBrush_EPivotReference_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyBrush_EPivotReference_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyBrush_EPivotReference_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyBrush_EPivotReference_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyBrush_EPivotReference()
{
	if (!Z_Registration_Info_UEnum_EPivotReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPivotReference.InnerSingleton, Z_Construct_UEnum_OdysseyBrush_EPivotReference_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPivotReference.InnerSingleton;
}
// End Enum EPivotReference

// Begin Enum EPivotOffsetMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPivotOffsetMode;
static UEnum* EPivotOffsetMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPivotOffsetMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPivotOffsetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("EPivotOffsetMode"));
	}
	return Z_Registration_Info_UEnum_EPivotOffsetMode.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UEnum* StaticEnum<EPivotOffsetMode>()
{
	return EPivotOffsetMode_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////\n// Pivot Enum\n" },
		{ "DisplayName", "EOdysseyHandlePositionOffsetMode" },
		{ "kAbsolute.DisplayName", "Absolute pixel" },
		{ "kAbsolute.Name", "EPivotOffsetMode::kAbsolute" },
		{ "kRelative.DisplayName", "Relative fraction" },
		{ "kRelative.Name", "EPivotOffsetMode::kRelative" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushPivot.h" },
		{ "ToolTip", "Pivot Enum" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPivotOffsetMode::kRelative", (int64)EPivotOffsetMode::kRelative },
		{ "EPivotOffsetMode::kAbsolute", (int64)EPivotOffsetMode::kAbsolute },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	"EPivotOffsetMode",
	"EPivotOffsetMode",
	Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode()
{
	if (!Z_Registration_Info_UEnum_EPivotOffsetMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPivotOffsetMode.InnerSingleton, Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPivotOffsetMode.InnerSingleton;
}
// End Enum EPivotOffsetMode

// Begin ScriptStruct FOdysseyPivot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OdysseyPivot;
class UScriptStruct* FOdysseyPivot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyPivot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OdysseyPivot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOdysseyPivot, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("OdysseyPivot"));
	}
	return Z_Registration_Info_UScriptStruct_OdysseyPivot.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<FOdysseyPivot>()
{
	return FOdysseyPivot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOdysseyPivot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////\n// Odyssey Brush Pivot\n" },
		{ "DisplayName", "FHandlePosition" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushPivot.h" },
		{ "ToolTip", "Odyssey Brush Pivot" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reference_MetaData[] = {
		{ "Category", "OdysseyHandlePositionReference" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushPivot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetMode_MetaData[] = {
		{ "Category", "OdysseyHandlePositionReference" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushPivot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "OdysseyHandlePositionReference" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushPivot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reference_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Reference;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OffsetMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOdysseyPivot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewProp_Reference_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyPivot, Reference), Z_Construct_UEnum_OdysseyBrush_EPivotReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reference_MetaData), NewProp_Reference_MetaData) }; // 2005388253
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewProp_OffsetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewProp_OffsetMode = { "OffsetMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyPivot, OffsetMode), Z_Construct_UEnum_OdysseyBrush_EPivotOffsetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetMode_MetaData), NewProp_OffsetMode_MetaData) }; // 241626843
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOdysseyPivot, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOdysseyPivot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewProp_Reference_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewProp_Reference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewProp_OffsetMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewProp_OffsetMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyPivot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOdysseyPivot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	&NewStructOps,
	"OdysseyPivot",
	Z_Construct_UScriptStruct_FOdysseyPivot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyPivot_Statics::PropPointers),
	sizeof(FOdysseyPivot),
	alignof(FOdysseyPivot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyPivot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOdysseyPivot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOdysseyPivot()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyPivot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OdysseyPivot.InnerSingleton, Z_Construct_UScriptStruct_FOdysseyPivot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OdysseyPivot.InnerSingleton;
}
// End ScriptStruct FOdysseyPivot

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushPivot_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPivotReference_StaticEnum, TEXT("EPivotReference"), &Z_Registration_Info_UEnum_EPivotReference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2005388253U) },
		{ EPivotOffsetMode_StaticEnum, TEXT("EPivotOffsetMode"), &Z_Registration_Info_UEnum_EPivotOffsetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 241626843U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOdysseyPivot::StaticStruct, Z_Construct_UScriptStruct_FOdysseyPivot_Statics::NewStructOps, TEXT("OdysseyPivot"), &Z_Registration_Info_UScriptStruct_OdysseyPivot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOdysseyPivot), 2453957441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushPivot_h_2638261044(TEXT("/Script/OdysseyBrush"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushPivot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushPivot_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushPivot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushPivot_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
