// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OdysseyLayerStack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOdysseyLayer;
#ifdef ODYSSEYLAYERSTACK_OdysseyLayerStack_generated_h
#error "OdysseyLayerStack.generated.h already included, missing '#pragma once' in OdysseyLayerStack.h"
#endif
#define ODYSSEYLAYERSTACK_OdysseyLayerStack_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveLayers); \
	DECLARE_FUNCTION(execMoveLayer); \
	DECLARE_FUNCTION(execCanMoveLayers); \
	DECLARE_FUNCTION(execCanMoveLayer); \
	DECLARE_FUNCTION(execFlattenLayers); \
	DECLARE_FUNCTION(execCanFlattenLayers); \
	DECLARE_FUNCTION(execFlattenLayer); \
	DECLARE_FUNCTION(execCanFlattenLayer); \
	DECLARE_FUNCTION(execMergeLayers); \
	DECLARE_FUNCTION(execCanMergeLayers); \
	DECLARE_FUNCTION(execFindLayersMergeTypes); \
	DECLARE_FUNCTION(execCopyLayers); \
	DECLARE_FUNCTION(execCopyLayer); \
	DECLARE_FUNCTION(execDuplicateLayers); \
	DECLARE_FUNCTION(execDuplicateLayer); \
	DECLARE_FUNCTION(execGetLayers); \
	DECLARE_FUNCTION(execGetRootLayers); \
	DECLARE_FUNCTION(execContainsLayer); \
	DECLARE_FUNCTION(execRemoveLayers); \
	DECLARE_FUNCTION(execRemoveLayer); \
	DECLARE_FUNCTION(execAddLayer); \
	DECLARE_FUNCTION(execSupportsLayerClass); \
	DECLARE_FUNCTION(execFindSupportedCustomLayerClasses);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyLayerStack(); \
	friend struct Z_Construct_UClass_UOdysseyLayerStack_Statics; \
public: \
	DECLARE_CLASS(UOdysseyLayerStack, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OdysseyLayerStack"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyLayerStack) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOdysseyLayerStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyLayerStack(UOdysseyLayerStack&&); \
	UOdysseyLayerStack(const UOdysseyLayerStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyLayerStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyLayerStack); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyLayerStack) \
	NO_API virtual ~UOdysseyLayerStack();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_12_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_16_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYLAYERSTACK_API UClass* StaticClass<class UOdysseyLayerStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayerStack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
