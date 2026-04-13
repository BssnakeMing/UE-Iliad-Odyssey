// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyShapes/Public/FreehandShape/OdysseyFreehandShapeOverrides.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyFreehandShapeOverrides() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ODYSSEYSHAPES_API UClass* Z_Construct_UClass_UOdysseyFreehandShapeOverrides();
ODYSSEYSHAPES_API UClass* Z_Construct_UClass_UOdysseyFreehandShapeOverrides_NoRegister();
ODYSSEYSHAPES_API UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType();
ODYSSEYSHAPES_API UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod();
UPackage* Z_Construct_UPackage__Script_OdysseyShapes();
// End Cross Module References

// Begin Class UOdysseyFreehandShapeOverrides
void UOdysseyFreehandShapeOverrides::StaticRegisterNativesUOdysseyFreehandShapeOverrides()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyFreehandShapeOverrides);
UClass* Z_Construct_UClass_UOdysseyFreehandShapeOverrides_NoRegister()
{
	return UOdysseyFreehandShapeOverrides::StaticClass();
}
struct Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// FOdysseyFreehandShapeOverrides\n" },
		{ "DisplayName", "Freehand Shape" },
		{ "IncludePath", "FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "FOdysseyFreehandShapeOverrides" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SmoothingMethod_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Enable Smoohting Method Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Enable Smoohting Method Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SmoothingStrength_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Enable Smoothing Strength Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Enable Smoothing Strength Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SmoothingEnabled_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Enable Smoothing Enabled Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Enable Smoothing Enabled Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SmoothingRealTime_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Enable Smoothing RealTime Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Enable Smoothing RealTime Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_SmoothingCatchUp_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Enable Smoothing CatchUp Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Enable Smoothing CatchUp Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Step_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Enable Stroke Step Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Enable Stroke Step Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_AdaptativeStep_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Enable Stroke Adaptative Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Enable Stroke Adaptative Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_InterpolationType_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Enable Interpolation Type Override. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Enable Interpolation Type Override." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingMethod_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Smoohting Method Override Value. */" },
		{ "editcondition", "bOverride_SmoothingMethod" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Smoohting Method Override Value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingStrength_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Smoothing Strength Override Value. */" },
		{ "editcondition", "bOverride_SmoothingStrength" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "SliderExponent", "1" },
		{ "ToolTip", "Smoothing Strength Override Value." },
		{ "UIMax", "200" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingEnabled_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Smoothing Enabled Override Value. */" },
		{ "editcondition", "bOverride_SmoothingEnabled" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Smoothing Enabled Override Value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingRealTime_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Smoothing RealTime Override Value. */" },
		{ "editcondition", "bOverride_SmoothingRealTime" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Smoothing RealTime Override Value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingCatchUp_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Smoothing CatchUp Override Value. */" },
		{ "editcondition", "bOverride_SmoothingCatchUp" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Smoothing CatchUp Override Value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Stroke Step Override Value. */" },
		{ "editcondition", "bOverride_Step" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "SliderExponent", "1" },
		{ "ToolTip", "Stroke Step Override Value." },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdaptativeStep_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Stroke Size Adaptative Override Value. */" },
		{ "editcondition", "bOverride_AdaptativeStep" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Stroke Size Adaptative Override Value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Interpolation Type Override Value. */" },
		{ "editcondition", "bOverride_InterpolationType" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShapeOverrides.h" },
		{ "ToolTip", "Interpolation Type Override Value." },
	};
#endif // WITH_METADATA
	static void NewProp_bOverride_SmoothingMethod_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SmoothingMethod;
	static void NewProp_bOverride_SmoothingStrength_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SmoothingStrength;
	static void NewProp_bOverride_SmoothingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SmoothingEnabled;
	static void NewProp_bOverride_SmoothingRealTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SmoothingRealTime;
	static void NewProp_bOverride_SmoothingCatchUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_SmoothingCatchUp;
	static void NewProp_bOverride_Step_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Step;
	static void NewProp_bOverride_AdaptativeStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_AdaptativeStep;
	static void NewProp_bOverride_InterpolationType_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_InterpolationType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SmoothingMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SmoothingMethod;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SmoothingStrength;
	static void NewProp_SmoothingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SmoothingEnabled;
	static void NewProp_SmoothingRealTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SmoothingRealTime;
	static void NewProp_SmoothingCatchUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SmoothingCatchUp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
	static void NewProp_AdaptativeStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AdaptativeStep;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyFreehandShapeOverrides>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingMethod_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->bOverride_SmoothingMethod = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingMethod = { "bOverride_SmoothingMethod", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingMethod_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_SmoothingMethod_MetaData), NewProp_bOverride_SmoothingMethod_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingStrength_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->bOverride_SmoothingStrength = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingStrength = { "bOverride_SmoothingStrength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingStrength_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_SmoothingStrength_MetaData), NewProp_bOverride_SmoothingStrength_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingEnabled_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->bOverride_SmoothingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingEnabled = { "bOverride_SmoothingEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_SmoothingEnabled_MetaData), NewProp_bOverride_SmoothingEnabled_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingRealTime_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->bOverride_SmoothingRealTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingRealTime = { "bOverride_SmoothingRealTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingRealTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_SmoothingRealTime_MetaData), NewProp_bOverride_SmoothingRealTime_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingCatchUp_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->bOverride_SmoothingCatchUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingCatchUp = { "bOverride_SmoothingCatchUp", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingCatchUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_SmoothingCatchUp_MetaData), NewProp_bOverride_SmoothingCatchUp_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_Step_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->bOverride_Step = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_Step = { "bOverride_Step", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_Step_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_Step_MetaData), NewProp_bOverride_Step_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_AdaptativeStep_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->bOverride_AdaptativeStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_AdaptativeStep = { "bOverride_AdaptativeStep", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_AdaptativeStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_AdaptativeStep_MetaData), NewProp_bOverride_AdaptativeStep_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_InterpolationType_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->bOverride_InterpolationType = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_InterpolationType = { "bOverride_InterpolationType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_InterpolationType_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_InterpolationType_MetaData), NewProp_bOverride_InterpolationType_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingMethod = { "SmoothingMethod", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyFreehandShapeOverrides, SmoothingMethod), Z_Construct_UEnum_OdysseyShapes_EOdysseySmoothingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingMethod_MetaData), NewProp_SmoothingMethod_MetaData) }; // 2715927013
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingStrength = { "SmoothingStrength", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyFreehandShapeOverrides, SmoothingStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingStrength_MetaData), NewProp_SmoothingStrength_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingEnabled_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->SmoothingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingEnabled = { "SmoothingEnabled", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingEnabled_MetaData), NewProp_SmoothingEnabled_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingRealTime_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->SmoothingRealTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingRealTime = { "SmoothingRealTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingRealTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingRealTime_MetaData), NewProp_SmoothingRealTime_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingCatchUp_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->SmoothingCatchUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingCatchUp = { "SmoothingCatchUp", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingCatchUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingCatchUp_MetaData), NewProp_SmoothingCatchUp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyFreehandShapeOverrides, Step), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Step_MetaData), NewProp_Step_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_AdaptativeStep_SetBit(void* Obj)
{
	((UOdysseyFreehandShapeOverrides*)Obj)->AdaptativeStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_AdaptativeStep = { "AdaptativeStep", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShapeOverrides), &Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_AdaptativeStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdaptativeStep_MetaData), NewProp_AdaptativeStep_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyFreehandShapeOverrides, InterpolationType), Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationType_MetaData), NewProp_InterpolationType_MetaData) }; // 3940167650
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingRealTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_SmoothingCatchUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_Step,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_AdaptativeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_bOverride_InterpolationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingRealTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_SmoothingCatchUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_Step,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_AdaptativeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_InterpolationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::NewProp_InterpolationType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyShapes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::ClassParams = {
	&UOdysseyFreehandShapeOverrides::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyFreehandShapeOverrides()
{
	if (!Z_Registration_Info_UClass_UOdysseyFreehandShapeOverrides.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyFreehandShapeOverrides.OuterSingleton, Z_Construct_UClass_UOdysseyFreehandShapeOverrides_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyFreehandShapeOverrides.OuterSingleton;
}
template<> ODYSSEYSHAPES_API UClass* StaticClass<UOdysseyFreehandShapeOverrides>()
{
	return UOdysseyFreehandShapeOverrides::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyFreehandShapeOverrides);
UOdysseyFreehandShapeOverrides::~UOdysseyFreehandShapeOverrides() {}
// End Class UOdysseyFreehandShapeOverrides

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_OdysseyFreehandShapeOverrides_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyFreehandShapeOverrides, UOdysseyFreehandShapeOverrides::StaticClass, TEXT("UOdysseyFreehandShapeOverrides"), &Z_Registration_Info_UClass_UOdysseyFreehandShapeOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyFreehandShapeOverrides), 3536816853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_OdysseyFreehandShapeOverrides_h_897035310(TEXT("/Script/OdysseyShapes"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_OdysseyFreehandShapeOverrides_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_OdysseyFreehandShapeOverrides_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
