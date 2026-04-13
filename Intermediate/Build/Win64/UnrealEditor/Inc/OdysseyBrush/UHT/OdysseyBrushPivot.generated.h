// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Proxies/OdysseyBrushPivot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ODYSSEYBRUSH_OdysseyBrushPivot_generated_h
#error "OdysseyBrushPivot.generated.h already included, missing '#pragma once' in OdysseyBrushPivot.h"
#endif
#define ODYSSEYBRUSH_OdysseyBrushPivot_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushPivot_h_44_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOdysseyPivot_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<struct FOdysseyPivot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushPivot_h


#define FOREACH_ENUM_EPIVOTREFERENCE(op) \
	op(EPivotReference::kTopLeft) \
	op(EPivotReference::kTopMiddle) \
	op(EPivotReference::kTopRight) \
	op(EPivotReference::kMiddleLeft) \
	op(EPivotReference::kCenter) \
	op(EPivotReference::kMiddleRight) \
	op(EPivotReference::kBotLeft) \
	op(EPivotReference::kBotMiddle) \
	op(EPivotReference::kBotRight) 

enum class EPivotReference : uint8;
template<> struct TIsUEnumClass<EPivotReference> { enum { Value = true }; };
template<> ODYSSEYBRUSH_API UEnum* StaticEnum<EPivotReference>();

#define FOREACH_ENUM_EPIVOTOFFSETMODE(op) \
	op(EPivotOffsetMode::kRelative) \
	op(EPivotOffsetMode::kAbsolute) 

enum class EPivotOffsetMode : uint8;
template<> struct TIsUEnumClass<EPivotOffsetMode> { enum { Value = true }; };
template<> ODYSSEYBRUSH_API UEnum* StaticEnum<EPivotOffsetMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
