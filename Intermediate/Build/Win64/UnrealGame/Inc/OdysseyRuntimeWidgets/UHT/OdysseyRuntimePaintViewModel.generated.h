// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OdysseyRuntimePaintViewModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOdysseyBrushAssetBase;
enum class EOdysseyRuntimePaintTool : uint8;
struct FLinearColor;
struct FOdysseyRuntimeToolSettings;
#ifdef ODYSSEYRUNTIMEWIDGETS_OdysseyRuntimePaintViewModel_generated_h
#error "OdysseyRuntimePaintViewModel.generated.h already included, missing '#pragma once' in OdysseyRuntimePaintViewModel.h"
#endif
#define ODYSSEYRUNTIMEWIDGETS_OdysseyRuntimePaintViewModel_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_10_DELEGATE \
ODYSSEYRUNTIMEWIDGETS_API void FOdysseyRuntimePaintToolChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OdysseyRuntimePaintToolChangedSignature, EOdysseyRuntimePaintTool NewTool);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_11_DELEGATE \
ODYSSEYRUNTIMEWIDGETS_API void FOdysseyRuntimeToolSettingsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OdysseyRuntimeToolSettingsChangedSignature, FOdysseyRuntimeToolSettings NewSettings);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_12_DELEGATE \
ODYSSEYRUNTIMEWIDGETS_API void FOdysseyRuntimeBrushPresetChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OdysseyRuntimeBrushPresetChangedSignature, FName PresetId, int32 PresetIndex);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_13_DELEGATE \
ODYSSEYRUNTIMEWIDGETS_API void FOdysseyRuntimeBrushPresetsChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OdysseyRuntimeBrushPresetsChangedSignature);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelectedBrushAsset); \
	DECLARE_FUNCTION(execGetBrushPresetsCopy); \
	DECLARE_FUNCTION(execSetBrushPresets); \
	DECLARE_FUNCTION(execSelectBrushPresetByIndex); \
	DECLARE_FUNCTION(execSelectBrushPresetById); \
	DECLARE_FUNCTION(execGetSelectedBrushPresetIndex); \
	DECLARE_FUNCTION(execGetSelectedBrushPresetId); \
	DECLARE_FUNCTION(execSetFreehandStep); \
	DECLARE_FUNCTION(execSetTolerance); \
	DECLARE_FUNCTION(execSetHardness); \
	DECLARE_FUNCTION(execSetOpacity); \
	DECLARE_FUNCTION(execSetSize); \
	DECLARE_FUNCTION(execSetColor); \
	DECLARE_FUNCTION(execSetToolSettings); \
	DECLARE_FUNCTION(execGetToolSettings); \
	DECLARE_FUNCTION(execSetActiveTool); \
	DECLARE_FUNCTION(execGetActiveTool);


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOdysseyRuntimePaintViewModel(); \
	friend struct Z_Construct_UClass_UOdysseyRuntimePaintViewModel_Statics; \
public: \
	DECLARE_CLASS(UOdysseyRuntimePaintViewModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OdysseyRuntimeWidgets"), NO_API) \
	DECLARE_SERIALIZER(UOdysseyRuntimePaintViewModel)


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOdysseyRuntimePaintViewModel(UOdysseyRuntimePaintViewModel&&); \
	UOdysseyRuntimePaintViewModel(const UOdysseyRuntimePaintViewModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOdysseyRuntimePaintViewModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOdysseyRuntimePaintViewModel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOdysseyRuntimePaintViewModel) \
	NO_API virtual ~UOdysseyRuntimePaintViewModel();


#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_20_PROLOG
#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_23_INCLASS_NO_PURE_DECLS \
	FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ODYSSEYRUNTIMEWIDGETS_API UClass* StaticClass<class UOdysseyRuntimePaintViewModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeWidgets_Public_OdysseyRuntimePaintViewModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
