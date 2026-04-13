// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OdysseyLayerFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOdysseyLayer;
#ifdef ODYSSEYLAYERSTACK_OdysseyLayerFunctionLibrary_generated_h
#error "OdysseyLayerFunctionLibrary.generated.h already included, missing '#pragma once' in OdysseyLayerFunctionLibrary.h"
#endif
#define ODYSSEYLAYERSTACK_OdysseyLayerFunctionLibrary_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsLayerLockedInStack); \
	DECLARE_FUNCTION(execIsLayerActivatedInStack);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyLayerFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOdysseyLayerFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOdysseyLayerFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OdysseyLayerStack"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyLayerFunctionLibrary)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOdysseyLayerFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyLayerFunctionLibrary(UOdysseyLayerFunctionLibrary&&); \
	UOdysseyLayerFunctionLibrary(const UOdysseyLayerFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyLayerFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyLayerFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyLayerFunctionLibrary) \
	NO_API virtual ~UOdysseyLayerFunctionLibrary();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_9_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYLAYERSTACK_API UClass* StaticClass<class UOdysseyLayerFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
