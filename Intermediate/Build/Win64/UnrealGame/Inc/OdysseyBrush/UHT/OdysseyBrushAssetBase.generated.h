// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OdysseyBrushAssetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOdysseyAlphaMode : uint8;
enum class EOdysseyBlendingMode : uint8;
enum class EOdysseyChannelDepth : uint8;
enum class EOdysseyColorModel : uint8;
struct FKey;
struct FOdysseyBlockProxy;
struct FOdysseyBrushColor;
struct FOdysseyBrushRect;
struct FOdysseyPivot;
#ifdef ODYSSEYBRUSH_OdysseyBrushAssetBase_generated_h
#error "OdysseyBrushAssetBase.generated.h already included, missing '#pragma once' in OdysseyBrushAssetBase.h"
#endif
#define ODYSSEYBRUSH_OdysseyBrushAssetBase_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnSubStrokeEnd_Implementation(); \
	virtual void OnSubStrokeBegin_Implementation(); \
	virtual void OnStrokeEnd_Implementation(); \
	virtual void OnStrokeBegin_Implementation(); \
	virtual void OnStateChanged_Implementation(); \
	virtual void OnStep_Implementation(); \
	virtual void OnTick_Implementation(); \
	virtual void OnSelected_Implementation(); \
	DECLARE_FUNCTION(execOnSubStrokeEnd); \
	DECLARE_FUNCTION(execOnSubStrokeBegin); \
	DECLARE_FUNCTION(execOnStrokeEnd); \
	DECLARE_FUNCTION(execOnStrokeBegin); \
	DECLARE_FUNCTION(execOnStateChanged); \
	DECLARE_FUNCTION(execOnStep); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execOnSelected); \
	DECLARE_FUNCTION(execStamp); \
	DECLARE_FUNCTION(execDebugStamp); \
	DECLARE_FUNCTION(execGetStrokeBlock); \
	DECLARE_FUNCTION(execGetCanvasRect); \
	DECLARE_FUNCTION(execGetCanvasChannelDepth); \
	DECLARE_FUNCTION(execGetCanvasColorModel); \
	DECLARE_FUNCTION(execGetCanvasHeight); \
	DECLARE_FUNCTION(execGetCanvasWidth); \
	DECLARE_FUNCTION(execGetCurrentStrokePointIndex); \
	DECLARE_FUNCTION(execGetFlowModifier); \
	DECLARE_FUNCTION(execGetSizeModifier); \
	DECLARE_FUNCTION(execGetColor); \
	DECLARE_FUNCTION(execGetKeysDown); \
	DECLARE_FUNCTION(execGetDeltaTime); \
	DECLARE_FUNCTION(execGetDeltaPosition); \
	DECLARE_FUNCTION(execGetJolt); \
	DECLARE_FUNCTION(execGetAcceleration); \
	DECLARE_FUNCTION(execGetSpeed); \
	DECLARE_FUNCTION(execGetDirectionAngleNormalDeg); \
	DECLARE_FUNCTION(execGetDirectionAngleTangentDeg); \
	DECLARE_FUNCTION(execGetDirectionVectorNormal); \
	DECLARE_FUNCTION(execGetDirectionVectorTangent); \
	DECLARE_FUNCTION(execGetDistanceAlongStroke); \
	DECLARE_FUNCTION(execGetTwistNormalized); \
	DECLARE_FUNCTION(execGetTwist); \
	DECLARE_FUNCTION(execGetAzimuthNormalized); \
	DECLARE_FUNCTION(execGetAzimuth); \
	DECLARE_FUNCTION(execGetAltitudeNormalized); \
	DECLARE_FUNCTION(execGetAltitude); \
	DECLARE_FUNCTION(execGetPressure); \
	DECLARE_FUNCTION(execGetY); \
	DECLARE_FUNCTION(execGetX);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_45_CALLBACK_WRAPPERS
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyBrushAssetBase(); \
	friend struct Z_Construct_UClass_UOdysseyBrushAssetBase_Statics; \
public: \
	DECLARE_CLASS(UOdysseyBrushAssetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OdysseyBrush"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyBrushAssetBase)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_45_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyBrushAssetBase(UOdysseyBrushAssetBase&&); \
	UOdysseyBrushAssetBase(const UOdysseyBrushAssetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyBrushAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyBrushAssetBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UOdysseyBrushAssetBase)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_42_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_45_CALLBACK_WRAPPERS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_45_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYBRUSH_API UClass* StaticClass<class UOdysseyBrushAssetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_OdysseyBrushAssetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
