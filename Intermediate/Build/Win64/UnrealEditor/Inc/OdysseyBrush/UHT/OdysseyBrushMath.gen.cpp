// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushMath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushMath() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushMathLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushMathLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin Class UOdysseyBrushMathLibrary Function ConvertCartesianToPolarCoordinates
struct Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics
{
	struct OdysseyBrushMathLibrary_eventConvertCartesianToPolarCoordinates_Parms
	{
		float DeltaX;
		float DeltaY;
		float AngleRad;
		float Radius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Math" },
		{ "Comment", "//Node that converts cartesian coordinates (x,y) to polar coordinates (radius,angle).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushMath.h" },
		{ "ToolTip", "Node that converts cartesian coordinates (x,y) to polar coordinates (radius,angle)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaX_MetaData[] = {
		{ "DisplayName", "X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaY_MetaData[] = {
		{ "DisplayName", "Y" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleRad_MetaData[] = {
		{ "DisplayName", "Angle (Radians)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Radius" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleRad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushMathLibrary_eventConvertCartesianToPolarCoordinates_Parms, DeltaX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaX_MetaData), NewProp_DeltaX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::NewProp_DeltaY = { "DeltaY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushMathLibrary_eventConvertCartesianToPolarCoordinates_Parms, DeltaY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaY_MetaData), NewProp_DeltaY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::NewProp_AngleRad = { "AngleRad", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushMathLibrary_eventConvertCartesianToPolarCoordinates_Parms, AngleRad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRad_MetaData), NewProp_AngleRad_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushMathLibrary_eventConvertCartesianToPolarCoordinates_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::NewProp_DeltaX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::NewProp_DeltaY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::NewProp_AngleRad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushMathLibrary, nullptr, "ConvertCartesianToPolarCoordinates", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::OdysseyBrushMathLibrary_eventConvertCartesianToPolarCoordinates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::OdysseyBrushMathLibrary_eventConvertCartesianToPolarCoordinates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushMathLibrary::execConvertCartesianToPolarCoordinates)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaY);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AngleRad);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushMathLibrary::ConvertCartesianToPolarCoordinates(Z_Param_DeltaX,Z_Param_DeltaY,Z_Param_Out_AngleRad,Z_Param_Out_Radius);
	P_NATIVE_END;
}
// End Class UOdysseyBrushMathLibrary Function ConvertCartesianToPolarCoordinates

// Begin Class UOdysseyBrushMathLibrary Function ConvertPolarToCartesianCoordinates
struct Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics
{
	struct OdysseyBrushMathLibrary_eventConvertPolarToCartesianCoordinates_Parms
	{
		float AngleRad;
		float Radius;
		float DeltaX;
		float DeltaY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Math" },
		{ "Comment", "//Node that converts polar coordinates (radius,angle) to cartesian coordinates (x,y).\n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushMath.h" },
		{ "ToolTip", "Node that converts polar coordinates (radius,angle) to cartesian coordinates (x,y)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngleRad_MetaData[] = {
		{ "DisplayName", "Angle (Radians)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaX_MetaData[] = {
		{ "DisplayName", "X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaY_MetaData[] = {
		{ "DisplayName", "Y" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleRad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::NewProp_AngleRad = { "AngleRad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushMathLibrary_eventConvertPolarToCartesianCoordinates_Parms, AngleRad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngleRad_MetaData), NewProp_AngleRad_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushMathLibrary_eventConvertPolarToCartesianCoordinates_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushMathLibrary_eventConvertPolarToCartesianCoordinates_Parms, DeltaX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaX_MetaData), NewProp_DeltaX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::NewProp_DeltaY = { "DeltaY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushMathLibrary_eventConvertPolarToCartesianCoordinates_Parms, DeltaY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaY_MetaData), NewProp_DeltaY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::NewProp_AngleRad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::NewProp_DeltaX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::NewProp_DeltaY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushMathLibrary, nullptr, "ConvertPolarToCartesianCoordinates", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::OdysseyBrushMathLibrary_eventConvertPolarToCartesianCoordinates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::OdysseyBrushMathLibrary_eventConvertPolarToCartesianCoordinates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushMathLibrary::execConvertPolarToCartesianCoordinates)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngleRad);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaX);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaY);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushMathLibrary::ConvertPolarToCartesianCoordinates(Z_Param_AngleRad,Z_Param_Radius,Z_Param_Out_DeltaX,Z_Param_Out_DeltaY);
	P_NATIVE_END;
}
// End Class UOdysseyBrushMathLibrary Function ConvertPolarToCartesianCoordinates

// Begin Class UOdysseyBrushMathLibrary
void UOdysseyBrushMathLibrary::StaticRegisterNativesUOdysseyBrushMathLibrary()
{
	UClass* Class = UOdysseyBrushMathLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertCartesianToPolarCoordinates", &UOdysseyBrushMathLibrary::execConvertCartesianToPolarCoordinates },
		{ "ConvertPolarToCartesianCoordinates", &UOdysseyBrushMathLibrary::execConvertPolarToCartesianCoordinates },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrushMathLibrary);
UClass* Z_Construct_UClass_UOdysseyBrushMathLibrary_NoRegister()
{
	return UOdysseyBrushMathLibrary::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrushMathLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Proxies/OdysseyBrushMath.h" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushMath.h" },
		{ "ScriptName", "OdysseyBrushMathLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertCartesianToPolarCoordinates, "ConvertCartesianToPolarCoordinates" }, // 3477655542
		{ &Z_Construct_UFunction_UOdysseyBrushMathLibrary_ConvertPolarToCartesianCoordinates, "ConvertPolarToCartesianCoordinates" }, // 2172320942
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrushMathLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyBrushMathLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushMathLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrushMathLibrary_Statics::ClassParams = {
	&UOdysseyBrushMathLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushMathLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrushMathLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrushMathLibrary()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrushMathLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrushMathLibrary.OuterSingleton, Z_Construct_UClass_UOdysseyBrushMathLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrushMathLibrary.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UClass* StaticClass<UOdysseyBrushMathLibrary>()
{
	return UOdysseyBrushMathLibrary::StaticClass();
}
UOdysseyBrushMathLibrary::UOdysseyBrushMathLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrushMathLibrary);
UOdysseyBrushMathLibrary::~UOdysseyBrushMathLibrary() {}
// End Class UOdysseyBrushMathLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushMath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrushMathLibrary, UOdysseyBrushMathLibrary::StaticClass, TEXT("UOdysseyBrushMathLibrary"), &Z_Registration_Info_UClass_UOdysseyBrushMathLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrushMathLibrary), 1452719416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushMath_h_3428151431(TEXT("/Script/OdysseyBrush"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushMath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushMath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
