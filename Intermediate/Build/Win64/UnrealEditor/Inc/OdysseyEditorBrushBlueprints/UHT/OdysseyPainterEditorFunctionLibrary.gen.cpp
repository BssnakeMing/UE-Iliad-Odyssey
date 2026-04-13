// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyEditorBrushBlueprints/Private/PainterEditor/OdysseyPainterEditorFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyPainterEditorFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister();
ODYSSEYEDITORBRUSHBLUEPRINTS_API UClass* Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary();
ODYSSEYEDITORBRUSHBLUEPRINTS_API UClass* Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyEditorBrushBlueprints();
// End Cross Module References

// Begin Class UOdysseyPainterEditorFunctionLibrary Function GetStep
struct Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics
{
	struct OdysseyPainterEditorFunctionLibrary_eventGetStep_Parms
	{
		UOdysseyBrushAssetBase* BrushInstance;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Modifiers" },
		{ "Comment", "//Gets step from Stroke Options.\n" },
		{ "DefaultToSelf", "BrushInstance" },
		{ "DisplayName", "Get Step Modifier" },
		{ "HidePin", "BrushInstance" },
		{ "ModuleRelativePath", "Private/PainterEditor/OdysseyPainterEditorFunctionLibrary.h" },
		{ "ToolTip", "Gets step from Stroke Options." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::NewProp_BrushInstance = { "BrushInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPainterEditorFunctionLibrary_eventGetStep_Parms, BrushInstance), Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPainterEditorFunctionLibrary_eventGetStep_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::NewProp_BrushInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary, nullptr, "GetStep", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::OdysseyPainterEditorFunctionLibrary_eventGetStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::OdysseyPainterEditorFunctionLibrary_eventGetStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPainterEditorFunctionLibrary::execGetStep)
{
	P_GET_OBJECT(UOdysseyBrushAssetBase,Z_Param_BrushInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOdysseyPainterEditorFunctionLibrary::GetStep(Z_Param_BrushInstance);
	P_NATIVE_END;
}
// End Class UOdysseyPainterEditorFunctionLibrary Function GetStep

// Begin Class UOdysseyPainterEditorFunctionLibrary Function GetViewportPan
struct Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics
{
	struct OdysseyPainterEditorFunctionLibrary_eventGetViewportPan_Parms
	{
		UOdysseyBrushAssetBase* BrushInstance;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Canvas" },
		{ "Comment", "//Gets pan value from ILIAD viewport.\n" },
		{ "DefaultToSelf", "BrushInstance" },
		{ "HidePin", "BrushInstance" },
		{ "ModuleRelativePath", "Private/PainterEditor/OdysseyPainterEditorFunctionLibrary.h" },
		{ "ToolTip", "Gets pan value from ILIAD viewport." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushInstance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::NewProp_BrushInstance = { "BrushInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPainterEditorFunctionLibrary_eventGetViewportPan_Parms, BrushInstance), Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPainterEditorFunctionLibrary_eventGetViewportPan_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::NewProp_BrushInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary, nullptr, "GetViewportPan", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::OdysseyPainterEditorFunctionLibrary_eventGetViewportPan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::OdysseyPainterEditorFunctionLibrary_eventGetViewportPan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPainterEditorFunctionLibrary::execGetViewportPan)
{
	P_GET_OBJECT(UOdysseyBrushAssetBase,Z_Param_BrushInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=UOdysseyPainterEditorFunctionLibrary::GetViewportPan(Z_Param_BrushInstance);
	P_NATIVE_END;
}
// End Class UOdysseyPainterEditorFunctionLibrary Function GetViewportPan

// Begin Class UOdysseyPainterEditorFunctionLibrary Function GetViewportRotation
struct Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics
{
	struct OdysseyPainterEditorFunctionLibrary_eventGetViewportRotation_Parms
	{
		UOdysseyBrushAssetBase* BrushInstance;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Canvas" },
		{ "Comment", "//Gets rotation value from ILIAD viewport.\n" },
		{ "DefaultToSelf", "BrushInstance" },
		{ "HidePin", "BrushInstance" },
		{ "ModuleRelativePath", "Private/PainterEditor/OdysseyPainterEditorFunctionLibrary.h" },
		{ "ToolTip", "Gets rotation value from ILIAD viewport." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::NewProp_BrushInstance = { "BrushInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPainterEditorFunctionLibrary_eventGetViewportRotation_Parms, BrushInstance), Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPainterEditorFunctionLibrary_eventGetViewportRotation_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::NewProp_BrushInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary, nullptr, "GetViewportRotation", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::OdysseyPainterEditorFunctionLibrary_eventGetViewportRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::OdysseyPainterEditorFunctionLibrary_eventGetViewportRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPainterEditorFunctionLibrary::execGetViewportRotation)
{
	P_GET_OBJECT(UOdysseyBrushAssetBase,Z_Param_BrushInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOdysseyPainterEditorFunctionLibrary::GetViewportRotation(Z_Param_BrushInstance);
	P_NATIVE_END;
}
// End Class UOdysseyPainterEditorFunctionLibrary Function GetViewportRotation

// Begin Class UOdysseyPainterEditorFunctionLibrary Function GetViewportZoom
struct Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics
{
	struct OdysseyPainterEditorFunctionLibrary_eventGetViewportZoom_Parms
	{
		UOdysseyBrushAssetBase* BrushInstance;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Canvas" },
		{ "Comment", "//Gets zoom value from ILIAD viewport.\n" },
		{ "DefaultToSelf", "BrushInstance" },
		{ "HidePin", "BrushInstance" },
		{ "ModuleRelativePath", "Private/PainterEditor/OdysseyPainterEditorFunctionLibrary.h" },
		{ "ToolTip", "Gets zoom value from ILIAD viewport." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::NewProp_BrushInstance = { "BrushInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPainterEditorFunctionLibrary_eventGetViewportZoom_Parms, BrushInstance), Z_Construct_UClass_UOdysseyBrushAssetBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyPainterEditorFunctionLibrary_eventGetViewportZoom_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::NewProp_BrushInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary, nullptr, "GetViewportZoom", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::OdysseyPainterEditorFunctionLibrary_eventGetViewportZoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::OdysseyPainterEditorFunctionLibrary_eventGetViewportZoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPainterEditorFunctionLibrary::execGetViewportZoom)
{
	P_GET_OBJECT(UOdysseyBrushAssetBase,Z_Param_BrushInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UOdysseyPainterEditorFunctionLibrary::GetViewportZoom(Z_Param_BrushInstance);
	P_NATIVE_END;
}
// End Class UOdysseyPainterEditorFunctionLibrary Function GetViewportZoom

// Begin Class UOdysseyPainterEditorFunctionLibrary
void UOdysseyPainterEditorFunctionLibrary::StaticRegisterNativesUOdysseyPainterEditorFunctionLibrary()
{
	UClass* Class = UOdysseyPainterEditorFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetStep", &UOdysseyPainterEditorFunctionLibrary::execGetStep },
		{ "GetViewportPan", &UOdysseyPainterEditorFunctionLibrary::execGetViewportPan },
		{ "GetViewportRotation", &UOdysseyPainterEditorFunctionLibrary::execGetViewportRotation },
		{ "GetViewportZoom", &UOdysseyPainterEditorFunctionLibrary::execGetViewportZoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyPainterEditorFunctionLibrary);
UClass* Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary_NoRegister()
{
	return UOdysseyPainterEditorFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//---\n" },
		{ "IncludePath", "PainterEditor/OdysseyPainterEditorFunctionLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/PainterEditor/OdysseyPainterEditorFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetStep, "GetStep" }, // 1385260659
		{ &Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportPan, "GetViewportPan" }, // 4202764188
		{ &Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportRotation, "GetViewportRotation" }, // 2155740001
		{ &Z_Construct_UFunction_UOdysseyPainterEditorFunctionLibrary_GetViewportZoom, "GetViewportZoom" }, // 2173415718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyPainterEditorFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyEditorBrushBlueprints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary_Statics::ClassParams = {
	&UOdysseyPainterEditorFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOdysseyPainterEditorFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyPainterEditorFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyPainterEditorFunctionLibrary.OuterSingleton;
}
template<> ODYSSEYEDITORBRUSHBLUEPRINTS_API UClass* StaticClass<UOdysseyPainterEditorFunctionLibrary>()
{
	return UOdysseyPainterEditorFunctionLibrary::StaticClass();
}
UOdysseyPainterEditorFunctionLibrary::UOdysseyPainterEditorFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyPainterEditorFunctionLibrary);
UOdysseyPainterEditorFunctionLibrary::~UOdysseyPainterEditorFunctionLibrary() {}
// End Class UOdysseyPainterEditorFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyEditorBrushBlueprints_Private_PainterEditor_OdysseyPainterEditorFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyPainterEditorFunctionLibrary, UOdysseyPainterEditorFunctionLibrary::StaticClass, TEXT("UOdysseyPainterEditorFunctionLibrary"), &Z_Registration_Info_UClass_UOdysseyPainterEditorFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyPainterEditorFunctionLibrary), 1229982946U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyEditorBrushBlueprints_Private_PainterEditor_OdysseyPainterEditorFunctionLibrary_h_2903921409(TEXT("/Script/OdysseyEditorBrushBlueprints"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyEditorBrushBlueprints_Private_PainterEditor_OdysseyPainterEditorFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyEditorBrushBlueprints_Private_PainterEditor_OdysseyPainterEditorFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
