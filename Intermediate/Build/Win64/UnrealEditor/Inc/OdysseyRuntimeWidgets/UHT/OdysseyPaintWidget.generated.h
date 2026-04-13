// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OdysseyPaintWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOdysseyRuntimePaintViewModel;
class UTextureRenderTarget2D;
enum class EOdysseyRuntimePaintTool : uint8;
struct FLinearColor;
struct FOdysseyRuntimeToolSettings;
#ifdef ODYSSEYRUNTIMEWIDGETS_OdysseyPaintWidget_generated_h
#error "OdysseyPaintWidget.generated.h already included, missing '#pragma once' in OdysseyPaintWidget.h"
#endif
#define ODYSSEYRUNTIMEWIDGETS_OdysseyPaintWidget_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPaintTexture); \
	DECLARE_FUNCTION(execGetPaintTexture); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execClear); \
	DECLARE_FUNCTION(execEndStroke); \
	DECLARE_FUNCTION(execUpdateStroke); \
	DECLARE_FUNCTION(execBeginStroke); \
	DECLARE_FUNCTION(execGetViewModel); \
	DECLARE_FUNCTION(execSetViewModel); \
	DECLARE_FUNCTION(execSetToolSettings); \
	DECLARE_FUNCTION(execSetTool); \
	DECLARE_FUNCTION(execInitializeCanvas);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyPaintWidget(); \
	friend struct Z_Construct_UClass_UOdysseyPaintWidget_Statics; \
public: \
	DECLARE_CLASS(UOdysseyPaintWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OdysseyRuntimeWidgets"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyPaintWidget)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyPaintWidget(UOdysseyPaintWidget&&); \
	UOdysseyPaintWidget(const UOdysseyPaintWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyPaintWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyPaintWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOdysseyPaintWidget) \
	NO_API virtual ~UOdysseyPaintWidget();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_14_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_17_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYRUNTIMEWIDGETS_API UClass* StaticClass<class UOdysseyPaintWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyPaintWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
