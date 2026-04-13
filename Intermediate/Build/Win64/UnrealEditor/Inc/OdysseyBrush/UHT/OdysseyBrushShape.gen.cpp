// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushShape() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushShape();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushShape_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin Class UOdysseyBrushShape Function GenerateArcPoints
struct Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics
{
	struct OdysseyBrushShape_eventGenerateArcPoints_Parms
	{
		FVector2D Center;
		int32 Radius;
		int32 StartDegree;
		int32 EndDegree;
		TArray<FVector2D> GeneratedPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Shape" },
		{ "Comment", "//Node \n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushShape.h" },
		{ "ToolTip", "Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "DisplayName", "Center" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDegree_MetaData[] = {
		{ "DisplayName", "Start Angle (Degree)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndDegree_MetaData[] = {
		{ "DisplayName", "End Angle (Degree)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPoints_MetaData[] = {
		{ "DisplayName", "Generated Points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartDegree;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndDegree;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateArcPoints_Parms, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateArcPoints_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_StartDegree = { "StartDegree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateArcPoints_Parms, StartDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDegree_MetaData), NewProp_StartDegree_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_EndDegree = { "EndDegree", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateArcPoints_Parms, EndDegree), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndDegree_MetaData), NewProp_EndDegree_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_GeneratedPoints_Inner = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_GeneratedPoints = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateArcPoints_Parms, GeneratedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedPoints_MetaData), NewProp_GeneratedPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_StartDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_EndDegree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_GeneratedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::NewProp_GeneratedPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushShape, nullptr, "GenerateArcPoints", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::OdysseyBrushShape_eventGenerateArcPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::OdysseyBrushShape_eventGenerateArcPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushShape::execGenerateArcPoints)
{
	P_GET_STRUCT(FVector2D,Z_Param_Center);
	P_GET_PROPERTY(FIntProperty,Z_Param_Radius);
	P_GET_PROPERTY(FIntProperty,Z_Param_StartDegree);
	P_GET_PROPERTY(FIntProperty,Z_Param_EndDegree);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_GeneratedPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushShape::GenerateArcPoints(Z_Param_Center,Z_Param_Radius,Z_Param_StartDegree,Z_Param_EndDegree,Z_Param_Out_GeneratedPoints);
	P_NATIVE_END;
}
// End Class UOdysseyBrushShape Function GenerateArcPoints

// Begin Class UOdysseyBrushShape Function GenerateCirclePoints
struct Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics
{
	struct OdysseyBrushShape_eventGenerateCirclePoints_Parms
	{
		FVector2D Center;
		int32 Radius;
		TArray<FVector2D> GeneratedPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Shape" },
		{ "Comment", "//Node \n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushShape.h" },
		{ "ToolTip", "Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "DisplayName", "Center" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "DisplayName", "Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPoints_MetaData[] = {
		{ "DisplayName", "Generated Points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateCirclePoints_Parms, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateCirclePoints_Parms, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::NewProp_GeneratedPoints_Inner = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::NewProp_GeneratedPoints = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateCirclePoints_Parms, GeneratedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedPoints_MetaData), NewProp_GeneratedPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::NewProp_GeneratedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::NewProp_GeneratedPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushShape, nullptr, "GenerateCirclePoints", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::OdysseyBrushShape_eventGenerateCirclePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::OdysseyBrushShape_eventGenerateCirclePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushShape::execGenerateCirclePoints)
{
	P_GET_STRUCT(FVector2D,Z_Param_Center);
	P_GET_PROPERTY(FIntProperty,Z_Param_Radius);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_GeneratedPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushShape::GenerateCirclePoints(Z_Param_Center,Z_Param_Radius,Z_Param_Out_GeneratedPoints);
	P_NATIVE_END;
}
// End Class UOdysseyBrushShape Function GenerateCirclePoints

// Begin Class UOdysseyBrushShape Function GenerateEllipsePoints
struct Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics
{
	struct OdysseyBrushShape_eventGenerateEllipsePoints_Parms
	{
		FVector2D Center;
		int32 A;
		int32 B;
		int32 Rotation;
		TArray<FVector2D> GeneratedPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Shape" },
		{ "Comment", "//Node \n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushShape.h" },
		{ "ToolTip", "Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "DisplayName", "Center" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "DisplayName", "A Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "DisplayName", "B Radius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "DisplayName", "Rotation (degrees)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPoints_MetaData[] = {
		{ "DisplayName", "Generated Points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateEllipsePoints_Parms, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateEllipsePoints_Parms, A), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateEllipsePoints_Parms, B), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateEllipsePoints_Parms, Rotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_GeneratedPoints_Inner = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_GeneratedPoints = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateEllipsePoints_Parms, GeneratedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedPoints_MetaData), NewProp_GeneratedPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_GeneratedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::NewProp_GeneratedPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushShape, nullptr, "GenerateEllipsePoints", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::OdysseyBrushShape_eventGenerateEllipsePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::OdysseyBrushShape_eventGenerateEllipsePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushShape::execGenerateEllipsePoints)
{
	P_GET_STRUCT(FVector2D,Z_Param_Center);
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_GET_PROPERTY(FIntProperty,Z_Param_Rotation);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_GeneratedPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushShape::GenerateEllipsePoints(Z_Param_Center,Z_Param_A,Z_Param_B,Z_Param_Rotation,Z_Param_Out_GeneratedPoints);
	P_NATIVE_END;
}
// End Class UOdysseyBrushShape Function GenerateEllipsePoints

// Begin Class UOdysseyBrushShape Function GenerateLinePoints
struct Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics
{
	struct OdysseyBrushShape_eventGenerateLinePoints_Parms
	{
		FVector2D StartPoint;
		FVector2D EndPoint;
		TArray<FVector2D> GeneratedPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Shape" },
		{ "Comment", "//Node \n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushShape.h" },
		{ "ToolTip", "Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "DisplayName", "Start" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "DisplayName", "End" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPoints_MetaData[] = {
		{ "DisplayName", "Generated Points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateLinePoints_Parms, StartPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateLinePoints_Parms, EndPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::NewProp_GeneratedPoints_Inner = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::NewProp_GeneratedPoints = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateLinePoints_Parms, GeneratedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedPoints_MetaData), NewProp_GeneratedPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::NewProp_GeneratedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::NewProp_GeneratedPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushShape, nullptr, "GenerateLinePoints", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::OdysseyBrushShape_eventGenerateLinePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::OdysseyBrushShape_eventGenerateLinePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushShape::execGenerateLinePoints)
{
	P_GET_STRUCT(FVector2D,Z_Param_StartPoint);
	P_GET_STRUCT(FVector2D,Z_Param_EndPoint);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_GeneratedPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushShape::GenerateLinePoints(Z_Param_StartPoint,Z_Param_EndPoint,Z_Param_Out_GeneratedPoints);
	P_NATIVE_END;
}
// End Class UOdysseyBrushShape Function GenerateLinePoints

// Begin Class UOdysseyBrushShape Function GeneratePolygonPoints
struct Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics
{
	struct OdysseyBrushShape_eventGeneratePolygonPoints_Parms
	{
		TArray<FVector2D> PolygonPoints;
		TArray<FVector2D> GeneratedPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Shape" },
		{ "Comment", "//Node \n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushShape.h" },
		{ "ToolTip", "Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygonPoints_MetaData[] = {
		{ "DisplayName", "Polygon Points" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPoints_MetaData[] = {
		{ "DisplayName", "Generated Points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PolygonPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PolygonPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::NewProp_PolygonPoints_Inner = { "PolygonPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::NewProp_PolygonPoints = { "PolygonPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGeneratePolygonPoints_Parms, PolygonPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygonPoints_MetaData), NewProp_PolygonPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::NewProp_GeneratedPoints_Inner = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::NewProp_GeneratedPoints = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGeneratePolygonPoints_Parms, GeneratedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedPoints_MetaData), NewProp_GeneratedPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::NewProp_PolygonPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::NewProp_PolygonPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::NewProp_GeneratedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::NewProp_GeneratedPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushShape, nullptr, "GeneratePolygonPoints", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::OdysseyBrushShape_eventGeneratePolygonPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::OdysseyBrushShape_eventGeneratePolygonPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushShape::execGeneratePolygonPoints)
{
	P_GET_TARRAY(FVector2D,Z_Param_PolygonPoints);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_GeneratedPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushShape::GeneratePolygonPoints(Z_Param_PolygonPoints,Z_Param_Out_GeneratedPoints);
	P_NATIVE_END;
}
// End Class UOdysseyBrushShape Function GeneratePolygonPoints

// Begin Class UOdysseyBrushShape Function GenerateQuadraticBezierPoints
struct Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics
{
	struct OdysseyBrushShape_eventGenerateQuadraticBezierPoints_Parms
	{
		FVector2D Start;
		FVector2D ControlPoint;
		FVector2D End;
		float iWeight;
		TArray<FVector2D> GeneratedPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Shape" },
		{ "Comment", "//Node \n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushShape.h" },
		{ "ToolTip", "Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "DisplayName", "Start" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoint_MetaData[] = {
		{ "DisplayName", "Control Point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "DisplayName", "End" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_iWeight_MetaData[] = {
		{ "DisplayName", "Weight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPoints_MetaData[] = {
		{ "DisplayName", "Generated Points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_iWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateQuadraticBezierPoints_Parms, Start), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_ControlPoint = { "ControlPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateQuadraticBezierPoints_Parms, ControlPoint), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoint_MetaData), NewProp_ControlPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateQuadraticBezierPoints_Parms, End), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_iWeight = { "iWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateQuadraticBezierPoints_Parms, iWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_iWeight_MetaData), NewProp_iWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_GeneratedPoints_Inner = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_GeneratedPoints = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateQuadraticBezierPoints_Parms, GeneratedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedPoints_MetaData), NewProp_GeneratedPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_ControlPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_iWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_GeneratedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::NewProp_GeneratedPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushShape, nullptr, "GenerateQuadraticBezierPoints", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::OdysseyBrushShape_eventGenerateQuadraticBezierPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::OdysseyBrushShape_eventGenerateQuadraticBezierPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushShape::execGenerateQuadraticBezierPoints)
{
	P_GET_STRUCT(FVector2D,Z_Param_Start);
	P_GET_STRUCT(FVector2D,Z_Param_ControlPoint);
	P_GET_STRUCT(FVector2D,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_iWeight);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_GeneratedPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushShape::GenerateQuadraticBezierPoints(Z_Param_Start,Z_Param_ControlPoint,Z_Param_End,Z_Param_iWeight,Z_Param_Out_GeneratedPoints);
	P_NATIVE_END;
}
// End Class UOdysseyBrushShape Function GenerateQuadraticBezierPoints

// Begin Class UOdysseyBrushShape Function GenerateRectanglePoints
struct Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics
{
	struct OdysseyBrushShape_eventGenerateRectanglePoints_Parms
	{
		FVector2D TopLeft;
		FVector2D BottomRight;
		TArray<FVector2D> GeneratedPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Shape" },
		{ "Comment", "//Node \n" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushShape.h" },
		{ "ToolTip", "Node" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopLeft_MetaData[] = {
		{ "DisplayName", "Top Left Corner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomRight_MetaData[] = {
		{ "DisplayName", "Bottom Right Corner" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedPoints_MetaData[] = {
		{ "DisplayName", "Generated Points" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TopLeft;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BottomRight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::NewProp_TopLeft = { "TopLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateRectanglePoints_Parms, TopLeft), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopLeft_MetaData), NewProp_TopLeft_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::NewProp_BottomRight = { "BottomRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateRectanglePoints_Parms, BottomRight), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomRight_MetaData), NewProp_BottomRight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::NewProp_GeneratedPoints_Inner = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::NewProp_GeneratedPoints = { "GeneratedPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushShape_eventGenerateRectanglePoints_Parms, GeneratedPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeneratedPoints_MetaData), NewProp_GeneratedPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::NewProp_TopLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::NewProp_BottomRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::NewProp_GeneratedPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::NewProp_GeneratedPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushShape, nullptr, "GenerateRectanglePoints", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::OdysseyBrushShape_eventGenerateRectanglePoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::OdysseyBrushShape_eventGenerateRectanglePoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushShape::execGenerateRectanglePoints)
{
	P_GET_STRUCT(FVector2D,Z_Param_TopLeft);
	P_GET_STRUCT(FVector2D,Z_Param_BottomRight);
	P_GET_TARRAY_REF(FVector2D,Z_Param_Out_GeneratedPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushShape::GenerateRectanglePoints(Z_Param_TopLeft,Z_Param_BottomRight,Z_Param_Out_GeneratedPoints);
	P_NATIVE_END;
}
// End Class UOdysseyBrushShape Function GenerateRectanglePoints

// Begin Class UOdysseyBrushShape
void UOdysseyBrushShape::StaticRegisterNativesUOdysseyBrushShape()
{
	UClass* Class = UOdysseyBrushShape::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateArcPoints", &UOdysseyBrushShape::execGenerateArcPoints },
		{ "GenerateCirclePoints", &UOdysseyBrushShape::execGenerateCirclePoints },
		{ "GenerateEllipsePoints", &UOdysseyBrushShape::execGenerateEllipsePoints },
		{ "GenerateLinePoints", &UOdysseyBrushShape::execGenerateLinePoints },
		{ "GeneratePolygonPoints", &UOdysseyBrushShape::execGeneratePolygonPoints },
		{ "GenerateQuadraticBezierPoints", &UOdysseyBrushShape::execGenerateQuadraticBezierPoints },
		{ "GenerateRectanglePoints", &UOdysseyBrushShape::execGenerateRectanglePoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrushShape);
UClass* Z_Construct_UClass_UOdysseyBrushShape_NoRegister()
{
	return UOdysseyBrushShape::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrushShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Proxies/OdysseyBrushShape.h" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushShape.h" },
		{ "ScriptName", "OdysseyBrushShape" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyBrushShape_GenerateArcPoints, "GenerateArcPoints" }, // 1217828851
		{ &Z_Construct_UFunction_UOdysseyBrushShape_GenerateCirclePoints, "GenerateCirclePoints" }, // 1129211874
		{ &Z_Construct_UFunction_UOdysseyBrushShape_GenerateEllipsePoints, "GenerateEllipsePoints" }, // 878230735
		{ &Z_Construct_UFunction_UOdysseyBrushShape_GenerateLinePoints, "GenerateLinePoints" }, // 2742004215
		{ &Z_Construct_UFunction_UOdysseyBrushShape_GeneratePolygonPoints, "GeneratePolygonPoints" }, // 4168110122
		{ &Z_Construct_UFunction_UOdysseyBrushShape_GenerateQuadraticBezierPoints, "GenerateQuadraticBezierPoints" }, // 3508009184
		{ &Z_Construct_UFunction_UOdysseyBrushShape_GenerateRectanglePoints, "GenerateRectanglePoints" }, // 1496462832
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrushShape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyBrushShape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushShape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrushShape_Statics::ClassParams = {
	&UOdysseyBrushShape::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushShape_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrushShape_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrushShape()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrushShape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrushShape.OuterSingleton, Z_Construct_UClass_UOdysseyBrushShape_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrushShape.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UClass* StaticClass<UOdysseyBrushShape>()
{
	return UOdysseyBrushShape::StaticClass();
}
UOdysseyBrushShape::UOdysseyBrushShape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrushShape);
UOdysseyBrushShape::~UOdysseyBrushShape() {}
// End Class UOdysseyBrushShape

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrushShape, UOdysseyBrushShape::StaticClass, TEXT("UOdysseyBrushShape"), &Z_Registration_Info_UClass_UOdysseyBrushShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrushShape), 3735970301U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_1656540023(TEXT("/Script/OdysseyBrush"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
