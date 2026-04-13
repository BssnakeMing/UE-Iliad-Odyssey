// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Proxies/OdysseyBrushBlock.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UFont;
class UTexture2D;
enum class EOdysseyAlphaMode : uint8;
enum class EOdysseyBlendingMode : uint8;
enum class EOdysseyChannelDepth : uint8;
enum class EOdysseyColorModel : uint8;
struct FOdysseyBlockProxy;
struct FOdysseyBrushColor;
struct FOdysseyBrushRect;
struct FOdysseyFontCharacter;
#ifdef ODYSSEYBRUSH_OdysseyBrushBlock_generated_h
#error "OdysseyBrushBlock.generated.h already included, missing '#pragma once' in OdysseyBrushBlock.h"
#endif
#define ODYSSEYBRUSH_OdysseyBrushBlock_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOdysseyBlockProxy_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<struct FOdysseyBlockProxy>();

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOdysseyFontCharacter_Statics; \
	ODYSSEYBRUSH_API static class UScriptStruct* StaticStruct();


template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<struct FOdysseyFontCharacter>();

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestIsValid); \
	DECLARE_FUNCTION(execGetRect); \
	DECLARE_FUNCTION(execGetChannelDepth); \
	DECLARE_FUNCTION(execGetColorModel); \
	DECLARE_FUNCTION(execGetColorAtPosition); \
	DECLARE_FUNCTION(execGetCharactersSize); \
	DECLARE_FUNCTION(execGetFontCharacterInfo); \
	DECLARE_FUNCTION(execGetFontBlocks); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth); \
	DECLARE_FUNCTION(execAdjustLabA); \
	DECLARE_FUNCTION(execAdjustCMYKA); \
	DECLARE_FUNCTION(execAdjustHSLA); \
	DECLARE_FUNCTION(execAdjustHSVA); \
	DECLARE_FUNCTION(execAdjustGreyA); \
	DECLARE_FUNCTION(execAdjustRGBA); \
	DECLARE_FUNCTION(execAdjustAlpha); \
	DECLARE_FUNCTION(execBlend); \
	DECLARE_FUNCTION(execCropBlock); \
	DECLARE_FUNCTION(execCreateBlock); \
	DECLARE_FUNCTION(execFill); \
	DECLARE_FUNCTION(execBlendColor); \
	DECLARE_FUNCTION(execFillPreserveAlpha); \
	DECLARE_FUNCTION(execConvertToFormat); \
	DECLARE_FUNCTION(execConv_TextureToOdysseyBlockProxy);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyBlockProxyFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOdysseyBlockProxyFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOdysseyBlockProxyFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OdysseyBrush"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyBlockProxyFunctionLibrary)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_100_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOdysseyBlockProxyFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyBlockProxyFunctionLibrary(UOdysseyBlockProxyFunctionLibrary&&); \
	UOdysseyBlockProxyFunctionLibrary(const UOdysseyBlockProxyFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyBlockProxyFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyBlockProxyFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyBlockProxyFunctionLibrary) \
	NO_API virtual ~UOdysseyBlockProxyFunctionLibrary();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_96_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_100_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYBRUSH_API UClass* StaticClass<class UOdysseyBlockProxyFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushBlock_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
