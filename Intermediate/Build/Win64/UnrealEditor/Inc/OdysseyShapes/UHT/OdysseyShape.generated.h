// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OdysseyShape.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ODYSSEYSHAPES_OdysseyShape_generated_h
#error "OdysseyShape.generated.h already included, missing '#pragma once' in OdysseyShape.h"
#endif
#define ODYSSEYSHAPES_OdysseyShape_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyShape(); \
	friend struct Z_Construct_UClass_UOdysseyShape_Statics; \
public: \
	DECLARE_CLASS(UOdysseyShape, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/OdysseyShapes"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyShape)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOdysseyShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyShape(UOdysseyShape&&); \
	UOdysseyShape(const UOdysseyShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyShape); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyShape)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_21_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_24_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYSHAPES_API UClass* StaticClass<class UOdysseyShape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h


#define FOREACH_ENUM_EODYSSEYSHAPE(op) \
	op(EOdysseyShape::kNone) \
	op(EOdysseyShape::kFreehand) \
	op(EOdysseyShape::kRectangle) 

enum class EOdysseyShape : uint8;
template<> struct TIsUEnumClass<EOdysseyShape> { enum { Value = true }; };
template<> ODYSSEYSHAPES_API UEnum* StaticEnum<EOdysseyShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
