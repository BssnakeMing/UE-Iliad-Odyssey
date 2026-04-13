// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyShapes/Public/FreehandShape/OdysseyFreehandShape.h"
#include "Editor/OdysseyShapes/Public/FreehandShape/Smoothing/OdysseySmoothingOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyFreehandShape() {}

// Begin Cross Module References
ODYSSEYSHAPES_API UClass* Z_Construct_UClass_UOdysseyFreehandShape();
ODYSSEYSHAPES_API UClass* Z_Construct_UClass_UOdysseyFreehandShape_NoRegister();
ODYSSEYSHAPES_API UClass* Z_Construct_UClass_UOdysseyShape();
ODYSSEYSHAPES_API UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType();
ODYSSEYSHAPES_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseySmoothingOptions();
UPackage* Z_Construct_UPackage__Script_OdysseyShapes();
// End Cross Module References

// Begin Class UOdysseyFreehandShape Function SetStep
struct Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics
{
	struct OdysseyFreehandShape_eventSetStep_Parms
	{
		float InStep;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Shape" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::NewProp_InStep = { "InStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyFreehandShape_eventSetStep_Parms, InStep), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::NewProp_InStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyFreehandShape, nullptr, "SetStep", nullptr, nullptr, Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::OdysseyFreehandShape_eventSetStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::OdysseyFreehandShape_eventSetStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyFreehandShape_SetStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyFreehandShape_SetStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyFreehandShape::execSetStep)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InStep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStep(Z_Param_InStep);
	P_NATIVE_END;
}
// End Class UOdysseyFreehandShape Function SetStep

// Begin Class UOdysseyFreehandShape
void UOdysseyFreehandShape::StaticRegisterNativesUOdysseyFreehandShape()
{
	UClass* Class = UOdysseyFreehandShape::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetStep", &UOdysseyFreehandShape::execSetStep },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyFreehandShape);
UClass* Z_Construct_UClass_UOdysseyFreehandShape_NoRegister()
{
	return UOdysseyFreehandShape::StaticClass();
}
struct Z_Construct_UClass_UOdysseyFreehandShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Freehand Shape" },
		{ "IncludePath", "FreehandShape/OdysseyFreehandShape.h" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Step_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "ClampMax", "200" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Should smoothing be enabled. */" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShape.h" },
		{ "SliderExponent", "1" },
		{ "ToolTip", "Should smoothing be enabled." },
		{ "UIMax", "200" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdaptativeStep_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingEnabled_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingOptions_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "DisplayName", "Smoothing" },
		{ "editcondition", "SmoothingEnabled" },
		{ "ModuleRelativePath", "Public/FreehandShape/OdysseyFreehandShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Step;
	static void NewProp_AdaptativeStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AdaptativeStep;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
	static void NewProp_SmoothingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SmoothingEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SmoothingOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyFreehandShape_SetStep, "SetStep" }, // 2250709572
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyFreehandShape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyFreehandShape, Step), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Step_MetaData), NewProp_Step_MetaData) };
void Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_AdaptativeStep_SetBit(void* Obj)
{
	((UOdysseyFreehandShape*)Obj)->AdaptativeStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_AdaptativeStep = { "AdaptativeStep", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShape), &Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_AdaptativeStep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdaptativeStep_MetaData), NewProp_AdaptativeStep_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyFreehandShape, InterpolationType), Z_Construct_UEnum_OdysseyShapes_EOdysseyInterpolationType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpolationType_MetaData), NewProp_InterpolationType_MetaData) }; // 3940167650
void Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_SmoothingEnabled_SetBit(void* Obj)
{
	((UOdysseyFreehandShape*)Obj)->SmoothingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_SmoothingEnabled = { "SmoothingEnabled", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOdysseyFreehandShape), &Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_SmoothingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingEnabled_MetaData), NewProp_SmoothingEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_SmoothingOptions = { "SmoothingOptions", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyFreehandShape, SmoothingOptions), Z_Construct_UScriptStruct_FOdysseySmoothingOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothingOptions_MetaData), NewProp_SmoothingOptions_MetaData) }; // 1665345053
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyFreehandShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_Step,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_AdaptativeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_InterpolationType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_InterpolationType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_SmoothingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyFreehandShape_Statics::NewProp_SmoothingOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyFreehandShape_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyFreehandShape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOdysseyShape,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyShapes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyFreehandShape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyFreehandShape_Statics::ClassParams = {
	&UOdysseyFreehandShape::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyFreehandShape_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyFreehandShape_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyFreehandShape_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyFreehandShape_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyFreehandShape()
{
	if (!Z_Registration_Info_UClass_UOdysseyFreehandShape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyFreehandShape.OuterSingleton, Z_Construct_UClass_UOdysseyFreehandShape_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyFreehandShape.OuterSingleton;
}
template<> ODYSSEYSHAPES_API UClass* StaticClass<UOdysseyFreehandShape>()
{
	return UOdysseyFreehandShape::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyFreehandShape);
// End Class UOdysseyFreehandShape

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_OdysseyFreehandShape_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyFreehandShape, UOdysseyFreehandShape::StaticClass, TEXT("UOdysseyFreehandShape"), &Z_Registration_Info_UClass_UOdysseyFreehandShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyFreehandShape), 26413725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_OdysseyFreehandShape_h_4219535211(TEXT("/Script/OdysseyShapes"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_OdysseyFreehandShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_OdysseyFreehandShape_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
