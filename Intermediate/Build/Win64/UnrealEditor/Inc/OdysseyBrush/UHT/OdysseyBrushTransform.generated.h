// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Proxies/OdysseyBrushTransform.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EResamplingMethod : uint8;
struct FOdysseyBlockProxy;
struct FOdysseyBrushRect;
struct FOdysseyMatrix;
#ifdef ODYSSEYBRUSH_OdysseyBrushTransform_generated_h
#error "OdysseyBrushTransform.generated.h already included, missing '#pragma once' in OdysseyBrushTransform.h"
#endif
#define ODYSSEYBRUSH_OdysseyBrushTransform_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOdysseyMatrix_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<struct FOdysseyMatrix>();

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPerspective); \
	DECLARE_FUNCTION(execFlipXY); \
	DECLARE_FUNCTION(execFlipY); \
	DECLARE_FUNCTION(execFlipX); \
	DECLARE_FUNCTION(execResize); \
	DECLARE_FUNCTION(execResizeUniform); \
	DECLARE_FUNCTION(execShear); \
	DECLARE_FUNCTION(execScaleXY); \
	DECLARE_FUNCTION(execScaleUniform); \
	DECLARE_FUNCTION(execRotate); \
	DECLARE_FUNCTION(execTransform); \
	DECLARE_FUNCTION(execGetPerspectiveMatrixResultRect); \
	DECLARE_FUNCTION(execGetMatrixResultRect); \
	DECLARE_FUNCTION(execComposeMatrix); \
	DECLARE_FUNCTION(execMakePerspectiveMatrix); \
	DECLARE_FUNCTION(execMakeShearMatrix); \
	DECLARE_FUNCTION(execMakeScaleMatrix); \
	DECLARE_FUNCTION(execMakeRotationMatrix); \
	DECLARE_FUNCTION(execMakeTranslationMatrix); \
	DECLARE_FUNCTION(execMakeIdentityMatrix);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyTransformProxyLibrary(); \
	friend struct Z_Construct_UClass_UOdysseyTransformProxyLibrary_Statics; \
public: \
	DECLARE_CLASS(UOdysseyTransformProxyLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OdysseyBrush"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyTransformProxyLibrary)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOdysseyTransformProxyLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyTransformProxyLibrary(UOdysseyTransformProxyLibrary&&); \
	UOdysseyTransformProxyLibrary(const UOdysseyTransformProxyLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyTransformProxyLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyTransformProxyLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyTransformProxyLibrary) \
	NO_API virtual ~UOdysseyTransformProxyLibrary();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_40_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_43_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYBRUSH_API UClass* StaticClass<class UOdysseyTransformProxyLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushTransform_h


#define FOREACH_ENUM_ERESAMPLINGMETHOD(op) \
	op(EResamplingMethod::kNearestNeighbour) \
	op(EResamplingMethod::kBilinear) \
	op(EResamplingMethod::kBicubic) \
	op(EResamplingMethod::kArea) 

enum class EResamplingMethod : uint8;
template<> struct TIsUEnumClass<EResamplingMethod> { enum { Value = true }; };
template<> ODYSSEYBRUSH_API UEnum* StaticEnum<EResamplingMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
