// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FreehandShape/Interpolation/OdysseyInterpolationTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ODYSSEYSHAPES_OdysseyInterpolationTypes_generated_h
#error "OdysseyInterpolationTypes.generated.h already included, missing '#pragma once' in OdysseyInterpolationTypes.h"
#endif
#define ODYSSEYSHAPES_OdysseyInterpolationTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_FreehandShape_Interpolation_OdysseyInterpolationTypes_h


#define FOREACH_ENUM_EODYSSEYINTERPOLATIONTYPE(op) \
	op(EOdysseyInterpolationType::kBezier) \
	op(EOdysseyInterpolationType::kLine) \
	op(EOdysseyInterpolationType::kCatmullRom) 

enum class EOdysseyInterpolationType : uint8;
template<> struct TIsUEnumClass<EOdysseyInterpolationType> { enum { Value = true }; };
template<> ODYSSEYSHAPES_API UEnum* StaticEnum<EOdysseyInterpolationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
