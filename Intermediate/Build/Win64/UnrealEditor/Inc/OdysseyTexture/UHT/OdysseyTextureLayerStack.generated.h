// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LayerStack/OdysseyTextureLayerStack.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef ODYSSEYTEXTURE_OdysseyTextureLayerStack_generated_h
#error "OdysseyTextureLayerStack.generated.h already included, missing '#pragma once' in OdysseyTextureLayerStack.h"
#endif
#define ODYSSEYTEXTURE_OdysseyTextureLayerStack_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTexture);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyTextureLayerStack(); \
	friend struct Z_Construct_UClass_UOdysseyTextureLayerStack_Statics; \
public: \
	DECLARE_CLASS(UOdysseyTextureLayerStack, UOdysseyLayerStack, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OdysseyTexture"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyTextureLayerStack)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyTextureLayerStack(UOdysseyTextureLayerStack&&); \
	UOdysseyTextureLayerStack(const UOdysseyTextureLayerStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyTextureLayerStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyTextureLayerStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOdysseyTextureLayerStack) \
	NO_API virtual ~UOdysseyTextureLayerStack();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_24_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_29_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYTEXTURE_API UClass* StaticClass<class UOdysseyTextureLayerStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyTexture_Public_LayerStack_OdysseyTextureLayerStack_h


#define FOREACH_ENUM_EODYSSEYTEXTURELAYERSTACKTEXTUREUPDATEMODE(op) \
	op(EOdysseyTextureLayerStackTextureUpdateMode::Manually) \
	op(EOdysseyTextureLayerStackTextureUpdateMode::OnTick) \
	op(EOdysseyTextureLayerStackTextureUpdateMode::Instantaneous) 

enum class EOdysseyTextureLayerStackTextureUpdateMode;
template<> struct TIsUEnumClass<EOdysseyTextureLayerStackTextureUpdateMode> { enum { Value = true }; };
template<> ODYSSEYTEXTURE_API UEnum* StaticEnum<EOdysseyTextureLayerStackTextureUpdateMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
