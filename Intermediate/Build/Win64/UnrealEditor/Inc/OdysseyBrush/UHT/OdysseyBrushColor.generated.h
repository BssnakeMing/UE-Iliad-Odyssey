// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Proxies/OdysseyBrushColor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOdysseyChannelDepth : uint8;
enum class EOdysseyColorModel : uint8;
struct FOdysseyBrushColor;
#ifdef ODYSSEYBRUSH_OdysseyBrushColor_generated_h
#error "OdysseyBrushColor.generated.h already included, missing '#pragma once' in OdysseyBrushColor.h"
#endif
#define ODYSSEYBRUSH_OdysseyBrushColor_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOdysseyBrushColor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<struct FOdysseyBrushColor>();

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_40_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoLabF); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoCMYKF); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoHSLF); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoHSVF); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoGreyF); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoRGBF); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoLabA); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoCMYK); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoHSL); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoHSV); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoGrey); \
	DECLARE_FUNCTION(execBreakOdysseyBrushColorIntoRGB); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromLabF); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromCMYKF); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromHSLF); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromHSVF); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromGreyF); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromRGBF); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromLab); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromCMYK); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromHSL); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromHSV); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromGrey); \
	DECLARE_FUNCTION(execMakeOdysseyBrushColorFromRGB); \
	DECLARE_FUNCTION(execConvertToFormat); \
	DECLARE_FUNCTION(execLerp); \
	DECLARE_FUNCTION(execGetAlpha); \
	DECLARE_FUNCTION(execSetAlpha); \
	DECLARE_FUNCTION(execGetChannelDepth); \
	DECLARE_FUNCTION(execGetColorModel); \
	DECLARE_FUNCTION(execMakeDebugColor);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUOdysseyBrushColorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOdysseyBrushColorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOdysseyBrushColorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OdysseyBrush"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyBrushColorFunctionLibrary)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOdysseyBrushColorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyBrushColorFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyBrushColorFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyBrushColorFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyBrushColorFunctionLibrary(UOdysseyBrushColorFunctionLibrary&&); \
	UOdysseyBrushColorFunctionLibrary(const UOdysseyBrushColorFunctionLibrary&); \
public: \
	NO_API virtual ~UOdysseyBrushColorFunctionLibrary();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_37_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_40_RPC_WRAPPERS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_40_INCLASS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYBRUSH_API UClass* StaticClass<class UOdysseyBrushColorFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushColor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
