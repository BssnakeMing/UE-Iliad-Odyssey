// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FreehandShape/Smoothing/OdysseySmoothingTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ODYSSEYSHAPES_OdysseySmoothingTypes_generated_h
#error "OdysseySmoothingTypes.generated.h already included, missing '#pragma once' in OdysseySmoothingTypes.h"
#endif
#define ODYSSEYSHAPES_OdysseySmoothingTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Smoothing_OdysseySmoothingTypes_h


#define FOREACH_ENUM_EODYSSEYSMOOTHINGMETHOD(op) \
	op(EOdysseySmoothingMethod::kAverage) \
	op(EOdysseySmoothingMethod::kPull) 

enum class EOdysseySmoothingMethod : uint8;
template<> struct TIsUEnumClass<EOdysseySmoothingMethod> { enum { Value = true }; };
template<> ODYSSEYSHAPES_API UEnum* StaticEnum<EOdysseySmoothingMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
