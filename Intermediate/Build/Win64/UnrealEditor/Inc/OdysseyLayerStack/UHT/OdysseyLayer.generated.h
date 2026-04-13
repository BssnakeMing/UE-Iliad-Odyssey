// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OdysseyLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UOdysseyLayer;
class UOdysseyLayerStack;
enum class EGetLayerChildrenMethod : uint8;
#ifdef ODYSSEYLAYERSTACK_OdysseyLayer_generated_h
#error "OdysseyLayer.generated.h already included, missing '#pragma once' in OdysseyLayer.h"
#endif
#define ODYSSEYLAYERSTACK_OdysseyLayer_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLayerStack); \
	DECLARE_FUNCTION(execMerge); \
	DECLARE_FUNCTION(execGetMergeLayerTypesFromTypes); \
	DECLARE_FUNCTION(execGetMergeDefaultLayerTypes); \
	DECLARE_FUNCTION(execIsChildOf); \
	DECLARE_FUNCTION(execGetIndexInParent); \
	DECLARE_FUNCTION(execGetChildrenRecursively); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execGetParents); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execOnCreated);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_23_CALLBACK_WRAPPERS
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyLayer(); \
	friend struct Z_Construct_UClass_UOdysseyLayer_Statics; \
public: \
	DECLARE_CLASS(UOdysseyLayer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/OdysseyLayerStack"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyLayer) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOdysseyLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyLayer(UOdysseyLayer&&); \
	UOdysseyLayer(const UOdysseyLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyLayer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyLayer) \
	NO_API virtual ~UOdysseyLayer();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_19_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_23_CALLBACK_WRAPPERS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_23_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYLAYERSTACK_API UClass* StaticClass<class UOdysseyLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyLayerStack_Public_OdysseyLayer_h


#define FOREACH_ENUM_EGETLAYERCHILDRENMETHOD(op) \
	op(EGetLayerChildrenMethod::DepthFirst) \
	op(EGetLayerChildrenMethod::BreadthFirst) 

enum class EGetLayerChildrenMethod : uint8;
template<> struct TIsUEnumClass<EGetLayerChildrenMethod> { enum { Value = true }; };
template<> ODYSSEYLAYERSTACK_API UEnum* StaticEnum<EGetLayerChildrenMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
