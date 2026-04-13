// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OdysseyRuntimePaintToolTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ODYSSEYRUNTIMETOOLS_OdysseyRuntimePaintToolTypes_generated_h
#error "OdysseyRuntimePaintToolTypes.generated.h already included, missing '#pragma once' in OdysseyRuntimePaintToolTypes.h"
#endif
#define ODYSSEYRUNTIMETOOLS_OdysseyRuntimePaintToolTypes_generated_h

#define FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeTools_Public_OdysseyRuntimePaintToolTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOdysseyRuntimeToolSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ODYSSEYRUNTIMETOOLS_API UScriptStruct* StaticStruct<struct FOdysseyRuntimeToolSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyRuntimeTools_Public_OdysseyRuntimePaintToolTypes_h


#define FOREACH_ENUM_EODYSSEYRUNTIMEPAINTTOOL(op) \
	op(EOdysseyRuntimePaintTool::Brush) \
	op(EOdysseyRuntimePaintTool::Eraser) \
	op(EOdysseyRuntimePaintTool::Bucket) 

enum class EOdysseyRuntimePaintTool : uint8;
template<> struct TIsUEnumClass<EOdysseyRuntimePaintTool> { enum { Value = true }; };
template<> ODYSSEYRUNTIMETOOLS_API UEnum* StaticEnum<EOdysseyRuntimePaintTool>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
