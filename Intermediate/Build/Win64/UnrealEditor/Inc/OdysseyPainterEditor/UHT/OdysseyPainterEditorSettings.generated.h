// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/OdysseyPainterEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ODYSSEYPAINTEREDITOR_OdysseyPainterEditorSettings_generated_h
#error "OdysseyPainterEditorSettings.generated.h already included, missing '#pragma once' in OdysseyPainterEditorSettings.h"
#endif
#define ODYSSEYPAINTEREDITOR_OdysseyPainterEditorSettings_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBrushDefaults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ODYSSEYPAINTEREDITOR_API UScriptStruct* StaticStruct<struct FBrushDefaults>();

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUOdysseyPainterEditorSettings(); \
	friend struct Z_Construct_UClass_UOdysseyPainterEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UOdysseyPainterEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OdysseyPainterEditor"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyPainterEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOdysseyPainterEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyPainterEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyPainterEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyPainterEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyPainterEditorSettings(UOdysseyPainterEditorSettings&&); \
	UOdysseyPainterEditorSettings(const UOdysseyPainterEditorSettings&); \
public: \
	NO_API virtual ~UOdysseyPainterEditorSettings();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_49_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_53_INCLASS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYPAINTEREDITOR_API UClass* StaticClass<class UOdysseyPainterEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Settings_OdysseyPainterEditorSettings_h


#define FOREACH_ENUM_EODYSSEYPAINTEREDITORBACKGROUNDS(op) \
	op(kOdysseyPainterEditorBackground_SolidColor) \
	op(kOdysseyPainterEditorBackground_Checkered) \
	op(kOdysseyPainterEditorBackground_CheckeredFill) 
#define FOREACH_ENUM_EODYSSEYPAINTEREDITORVOLUMEVIEWMODE(op) \
	op(kOdysseyPainterEditorVolumeViewMode_DepthSlices) \
	op(kOdysseyPainterEditorVolumeViewMode_VolumeTrace) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
