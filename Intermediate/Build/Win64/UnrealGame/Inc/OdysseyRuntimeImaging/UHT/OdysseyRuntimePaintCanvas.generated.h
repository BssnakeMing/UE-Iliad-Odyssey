// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OdysseyRuntimePaintCanvas.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
struct FLinearColor;
#ifdef ODYSSEYRUNTIMEIMAGING_OdysseyRuntimePaintCanvas_generated_h
#error "OdysseyRuntimePaintCanvas.generated.h already included, missing '#pragma once' in OdysseyRuntimePaintCanvas.h"
#endif
#define ODYSSEYRUNTIMEIMAGING_OdysseyRuntimePaintCanvas_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTexture); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execGetCanvasHeight); \
	DECLARE_FUNCTION(execGetCanvasWidth); \
	DECLARE_FUNCTION(execClearCanvas); \
	DECLARE_FUNCTION(execInitializeCanvas);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyRuntimePaintCanvas(); \
	friend struct Z_Construct_UClass_UOdysseyRuntimePaintCanvas_Statics; \
public: \
	DECLARE_CLASS(UOdysseyRuntimePaintCanvas, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OdysseyRuntimeImaging"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyRuntimePaintCanvas)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOdysseyRuntimePaintCanvas(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyRuntimePaintCanvas(UOdysseyRuntimePaintCanvas&&); \
	UOdysseyRuntimePaintCanvas(const UOdysseyRuntimePaintCanvas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyRuntimePaintCanvas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyRuntimePaintCanvas); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyRuntimePaintCanvas) \
	NO_API virtual ~UOdysseyRuntimePaintCanvas();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_9_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_12_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYRUNTIMEIMAGING_API UClass* StaticClass<class UOdysseyRuntimePaintCanvas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeImaging_Public_OdysseyRuntimePaintCanvas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
