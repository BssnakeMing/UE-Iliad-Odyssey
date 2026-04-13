// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Proxies/OdysseyBrushShape.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ODYSSEYBRUSH_OdysseyBrushShape_generated_h
#error "OdysseyBrushShape.generated.h already included, missing '#pragma once' in OdysseyBrushShape.h"
#endif
#define ODYSSEYBRUSH_OdysseyBrushShape_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGeneratePolygonPoints); \
	DECLARE_FUNCTION(execGenerateRectanglePoints); \
	DECLARE_FUNCTION(execGenerateQuadraticBezierPoints); \
	DECLARE_FUNCTION(execGenerateEllipsePoints); \
	DECLARE_FUNCTION(execGenerateCirclePoints); \
	DECLARE_FUNCTION(execGenerateArcPoints); \
	DECLARE_FUNCTION(execGenerateLinePoints);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyBrushShape(); \
	friend struct Z_Construct_UClass_UOdysseyBrushShape_Statics; \
public: \
	DECLARE_CLASS(UOdysseyBrushShape, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OdysseyBrush"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyBrushShape)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOdysseyBrushShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyBrushShape(UOdysseyBrushShape&&); \
	UOdysseyBrushShape(const UOdysseyBrushShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyBrushShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyBrushShape); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyBrushShape) \
	NO_API virtual ~UOdysseyBrushShape();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_11_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_14_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYBRUSH_API UClass* StaticClass<class UOdysseyBrushShape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushShape_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
