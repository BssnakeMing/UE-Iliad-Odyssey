// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Proxies/OdysseyBrushFormat.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ODYSSEYBRUSH_OdysseyBrushFormat_generated_h
#error "OdysseyBrushFormat.generated.h already included, missing '#pragma once' in OdysseyBrushFormat.h"
#endif
#define ODYSSEYBRUSH_OdysseyBrushFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushFormat_h


#define FOREACH_ENUM_EODYSSEYCOLORMODEL(op) \
	op(EOdysseyColorModel::kUninitializedColorModel) \
	op(EOdysseyColorModel::kRGB) \
	op(EOdysseyColorModel::kRGBA) \
	op(EOdysseyColorModel::kGrey) \
	op(EOdysseyColorModel::kGreyA) \
	op(EOdysseyColorModel::kHSL) \
	op(EOdysseyColorModel::kHSLA) \
	op(EOdysseyColorModel::kHSV) \
	op(EOdysseyColorModel::kHSVA) \
	op(EOdysseyColorModel::kCMYK) \
	op(EOdysseyColorModel::kCMYKA) \
	op(EOdysseyColorModel::kLab) \
	op(EOdysseyColorModel::kLabA) 

enum class EOdysseyColorModel : uint8;
template<> struct TIsUEnumClass<EOdysseyColorModel> { enum { Value = true }; };
template<> ODYSSEYBRUSH_API UEnum* StaticEnum<EOdysseyColorModel>();

#define FOREACH_ENUM_EODYSSEYCHANNELDEPTH(op) \
	op(EOdysseyChannelDepth::kUninitializedChannelDepth) \
	op(EOdysseyChannelDepth::k8) \
	op(EOdysseyChannelDepth::k16) \
	op(EOdysseyChannelDepth::kFloat) 

enum class EOdysseyChannelDepth : uint8;
template<> struct TIsUEnumClass<EOdysseyChannelDepth> { enum { Value = true }; };
template<> ODYSSEYBRUSH_API UEnum* StaticEnum<EOdysseyChannelDepth>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
