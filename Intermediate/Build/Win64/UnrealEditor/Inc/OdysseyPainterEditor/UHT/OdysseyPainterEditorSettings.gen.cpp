// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyPainterEditor/Public/Settings/OdysseyPainterEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyPainterEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrush_NoRegister();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyPainterEditorSettings();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyPainterEditorSettings_NoRegister();
ODYSSEYPAINTEREDITOR_API UEnum* Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds();
ODYSSEYPAINTEREDITOR_API UEnum* Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode();
ODYSSEYPAINTEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FBrushDefaults();
UPackage* Z_Construct_UPackage__Script_OdysseyPainterEditor();
// End Cross Module References

// Begin Enum EOdysseyPainterEditorBackgrounds
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyPainterEditorBackgrounds;
static UEnum* EOdysseyPainterEditorBackgrounds_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyPainterEditorBackgrounds.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyPainterEditorBackgrounds.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds, (UObject*)Z_Construct_UPackage__Script_OdysseyPainterEditor(), TEXT("EOdysseyPainterEditorBackgrounds"));
	}
	return Z_Registration_Info_UEnum_EOdysseyPainterEditorBackgrounds.OuterSingleton;
}
template<> ODYSSEYPAINTEREDITOR_API UEnum* StaticEnum<EOdysseyPainterEditorBackgrounds>()
{
	return EOdysseyPainterEditorBackgrounds_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates background for the texture editor view port.\n */" },
		{ "kOdysseyPainterEditorBackground_Checkered.DisplayName", "Checkered" },
		{ "kOdysseyPainterEditorBackground_Checkered.Name", "kOdysseyPainterEditorBackground_Checkered" },
		{ "kOdysseyPainterEditorBackground_CheckeredFill.DisplayName", "Checkered (Fill)" },
		{ "kOdysseyPainterEditorBackground_CheckeredFill.Name", "kOdysseyPainterEditorBackground_CheckeredFill" },
		{ "kOdysseyPainterEditorBackground_SolidColor.DisplayName", "Solid Color" },
		{ "kOdysseyPainterEditorBackground_SolidColor.Name", "kOdysseyPainterEditorBackground_SolidColor" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "Enumerates background for the texture editor view port." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "kOdysseyPainterEditorBackground_SolidColor", (int64)kOdysseyPainterEditorBackground_SolidColor },
		{ "kOdysseyPainterEditorBackground_Checkered", (int64)kOdysseyPainterEditorBackground_Checkered },
		{ "kOdysseyPainterEditorBackground_CheckeredFill", (int64)kOdysseyPainterEditorBackground_CheckeredFill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyPainterEditor,
	nullptr,
	"EOdysseyPainterEditorBackgrounds",
	"EOdysseyPainterEditorBackgrounds",
	Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds()
{
	if (!Z_Registration_Info_UEnum_EOdysseyPainterEditorBackgrounds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyPainterEditorBackgrounds.InnerSingleton, Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyPainterEditorBackgrounds.InnerSingleton;
}
// End Enum EOdysseyPainterEditorBackgrounds

// Begin Enum EOdysseyPainterEditorVolumeViewMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyPainterEditorVolumeViewMode;
static UEnum* EOdysseyPainterEditorVolumeViewMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyPainterEditorVolumeViewMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyPainterEditorVolumeViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode, (UObject*)Z_Construct_UPackage__Script_OdysseyPainterEditor(), TEXT("EOdysseyPainterEditorVolumeViewMode"));
	}
	return Z_Registration_Info_UEnum_EOdysseyPainterEditorVolumeViewMode.OuterSingleton;
}
template<> ODYSSEYPAINTEREDITOR_API UEnum* StaticEnum<EOdysseyPainterEditorVolumeViewMode>()
{
	return EOdysseyPainterEditorVolumeViewMode_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "kOdysseyPainterEditorVolumeViewMode_DepthSlices.DisplayName", "Depth Slices" },
		{ "kOdysseyPainterEditorVolumeViewMode_DepthSlices.Name", "kOdysseyPainterEditorVolumeViewMode_DepthSlices" },
		{ "kOdysseyPainterEditorVolumeViewMode_VolumeTrace.DisplayName", "Trace Into Volume" },
		{ "kOdysseyPainterEditorVolumeViewMode_VolumeTrace.Name", "kOdysseyPainterEditorVolumeViewMode_VolumeTrace" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "kOdysseyPainterEditorVolumeViewMode_DepthSlices", (int64)kOdysseyPainterEditorVolumeViewMode_DepthSlices },
		{ "kOdysseyPainterEditorVolumeViewMode_VolumeTrace", (int64)kOdysseyPainterEditorVolumeViewMode_VolumeTrace },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyPainterEditor,
	nullptr,
	"EOdysseyPainterEditorVolumeViewMode",
	"EOdysseyPainterEditorVolumeViewMode",
	Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode()
{
	if (!Z_Registration_Info_UEnum_EOdysseyPainterEditorVolumeViewMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyPainterEditorVolumeViewMode.InnerSingleton, Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyPainterEditorVolumeViewMode.InnerSingleton;
}
// End Enum EOdysseyPainterEditorVolumeViewMode

// Begin ScriptStruct FBrushDefaults
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrushDefaults;
class UScriptStruct* FBrushDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrushDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrushDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrushDefaults, (UObject*)Z_Construct_UPackage__Script_OdysseyPainterEditor(), TEXT("BrushDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_BrushDefaults.OuterSingleton;
}
template<> ODYSSEYPAINTEREDITOR_API UScriptStruct* StaticStruct<FBrushDefaults>()
{
	return FBrushDefaults::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBrushDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBrush_MetaData[] = {
		{ "AllowedClasses", "OdysseyBrush" },
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Brush" },
		{ "DisplayName", "Default Brush" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrushDefaults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBrushDefaults_Statics::NewProp_DefaultBrush = { "DefaultBrush", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrushDefaults, DefaultBrush), Z_Construct_UClass_UOdysseyBrush_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBrush_MetaData), NewProp_DefaultBrush_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrushDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrushDefaults_Statics::NewProp_DefaultBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrushDefaults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyPainterEditor,
	nullptr,
	&NewStructOps,
	"BrushDefaults",
	Z_Construct_UScriptStruct_FBrushDefaults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushDefaults_Statics::PropPointers),
	sizeof(FBrushDefaults),
	alignof(FBrushDefaults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrushDefaults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBrushDefaults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBrushDefaults()
{
	if (!Z_Registration_Info_UScriptStruct_BrushDefaults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrushDefaults.InnerSingleton, Z_Construct_UScriptStruct_FBrushDefaults_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BrushDefaults.InnerSingleton;
}
// End ScriptStruct FBrushDefaults

// Begin Class UOdysseyPainterEditorSettings
void UOdysseyPainterEditorSettings::StaticRegisterNativesUOdysseyPainterEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyPainterEditorSettings);
UClass* Z_Construct_UClass_UOdysseyPainterEditorSettings_NoRegister()
{
	return UOdysseyPainterEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the Editor's user settings.\n */" },
		{ "IncludePath", "Settings/OdysseyPainterEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "Implements the Editor's user settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "Comment", "/** The type of background to draw in the texture editor view port. */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "The type of background to draw in the texture editor view port." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeViewMode_MetaData[] = {
		{ "Comment", "/** The type of display when viewing volume textures. */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "The type of display when viewing volume textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Background and foreground color used by Texture preview view ports. */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "Background and foreground color used by Texture preview view ports." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerColorOne_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** The first color of the checkered background. */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "The first color of the checkered background." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerColorTwo_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** The second color of the checkered background. */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "The second color of the checkered background." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerSize_MetaData[] = {
		{ "Category", "Background" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The size of the checkered background tiles. */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "The size of the checkered background tiles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitToViewport_MetaData[] = {
		{ "Comment", "/** Whether the texture should scale to fit the view port. */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "Whether the texture should scale to fit the view port." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureBorderColor_MetaData[] = {
		{ "Category", "TextureBorder" },
		{ "Comment", "/** Color to use for the texture border, if enabled. */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "Color to use for the texture border, if enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureBorderEnabled_MetaData[] = {
		{ "Comment", "/** If true, displays a border around the texture. */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "If true, displays a border around the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushDefaults_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** Defines the defaults values of the brush being used when opening the editor */" },
		{ "ModuleRelativePath", "Public/Settings/OdysseyPainterEditorSettings.h" },
		{ "ToolTip", "Defines the defaults values of the brush being used when opening the editor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Background;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VolumeViewMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckerColorOne;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckerColorTwo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheckerSize;
	static void NewProp_FitToViewport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FitToViewport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureBorderColor;
	static void NewProp_TextureBorderEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TextureBorderEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BrushDefaults;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyPainterEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorSettings, Background), Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorBackgrounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) }; // 2859383021
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_VolumeViewMode = { "VolumeViewMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorSettings, VolumeViewMode), Z_Construct_UEnum_OdysseyPainterEditor_EOdysseyPainterEditorVolumeViewMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeViewMode_MetaData), NewProp_VolumeViewMode_MetaData) }; // 56153759
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorSettings, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_CheckerColorOne = { "CheckerColorOne", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorSettings, CheckerColorOne), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerColorOne_MetaData), NewProp_CheckerColorOne_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_CheckerColorTwo = { "CheckerColorTwo", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorSettings, CheckerColorTwo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerColorTwo_MetaData), NewProp_CheckerColorTwo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_CheckerSize = { "CheckerSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorSettings, CheckerSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerSize_MetaData), NewProp_CheckerSize_MetaData) };
void Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_FitToViewport_SetBit(void* Obj)
{
	((UOdysseyPainterEditorSettings*)Obj)->FitToViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_FitToViewport = { "FitToViewport", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyPainterEditorSettings), &Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_FitToViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitToViewport_MetaData), NewProp_FitToViewport_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_TextureBorderColor = { "TextureBorderColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorSettings, TextureBorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureBorderColor_MetaData), NewProp_TextureBorderColor_MetaData) };
void Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_TextureBorderEnabled_SetBit(void* Obj)
{
	((UOdysseyPainterEditorSettings*)Obj)->TextureBorderEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_TextureBorderEnabled = { "TextureBorderEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyPainterEditorSettings), &Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_TextureBorderEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureBorderEnabled_MetaData), NewProp_TextureBorderEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_BrushDefaults = { "BrushDefaults", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorSettings, BrushDefaults), Z_Construct_UScriptStruct_FBrushDefaults, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushDefaults_MetaData), NewProp_BrushDefaults_MetaData) }; // 2423651714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_VolumeViewMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_CheckerColorOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_CheckerColorTwo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_CheckerSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_FitToViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_TextureBorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_TextureBorderEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::NewProp_BrushDefaults,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyPainterEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::ClassParams = {
	&UOdysseyPainterEditorSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyPainterEditorSettings()
{
	if (!Z_Registration_Info_UClass_UOdysseyPainterEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyPainterEditorSettings.OuterSingleton, Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyPainterEditorSettings.OuterSingleton;
}
template<> ODYSSEYPAINTEREDITOR_API UClass* StaticClass<UOdysseyPainterEditorSettings>()
{
	return UOdysseyPainterEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyPainterEditorSettings);
UOdysseyPainterEditorSettings::~UOdysseyPainterEditorSettings() {}
// End Class UOdysseyPainterEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOdysseyPainterEditorBackgrounds_StaticEnum, TEXT("EOdysseyPainterEditorBackgrounds"), &Z_Registration_Info_UEnum_EOdysseyPainterEditorBackgrounds, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2859383021U) },
		{ EOdysseyPainterEditorVolumeViewMode_StaticEnum, TEXT("EOdysseyPainterEditorVolumeViewMode"), &Z_Registration_Info_UEnum_EOdysseyPainterEditorVolumeViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 56153759U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBrushDefaults::StaticStruct, Z_Construct_UScriptStruct_FBrushDefaults_Statics::NewStructOps, TEXT("BrushDefaults"), &Z_Registration_Info_UScriptStruct_BrushDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrushDefaults), 2423651714U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyPainterEditorSettings, UOdysseyPainterEditorSettings::StaticClass, TEXT("UOdysseyPainterEditorSettings"), &Z_Registration_Info_UClass_UOdysseyPainterEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyPainterEditorSettings), 2817103566U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_3823380491(TEXT("/Script/OdysseyPainterEditor"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
