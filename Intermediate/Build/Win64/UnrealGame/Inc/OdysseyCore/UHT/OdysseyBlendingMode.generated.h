// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Image/OdysseyBlendingMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ODYSSEYCORE_OdysseyBlendingMode_generated_h
#error "OdysseyBlendingMode.generated.h already included, missing '#pragma once' in OdysseyBlendingMode.h"
#endif
#define ODYSSEYCORE_OdysseyBlendingMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Runtime_OdysseyCore_Public_Image_OdysseyBlendingMode_h


#define FOREACH_ENUM_EODYSSEYBLENDINGMODE(op) \
	op(EOdysseyBlendingMode::kNormal) \
	op(EOdysseyBlendingMode::kTop) \
	op(EOdysseyBlendingMode::kBack) \
	op(EOdysseyBlendingMode::kBehind) \
	op(EOdysseyBlendingMode::kDissolve) \
	op(EOdysseyBlendingMode::kBayerDither8x8) \
	op(EOdysseyBlendingMode::kDarken) \
	op(EOdysseyBlendingMode::kMultiply) \
	op(EOdysseyBlendingMode::kColorBurn) \
	op(EOdysseyBlendingMode::kLinearBurn) \
	op(EOdysseyBlendingMode::kDarkerColor) \
	op(EOdysseyBlendingMode::kLighten) \
	op(EOdysseyBlendingMode::kScreen) \
	op(EOdysseyBlendingMode::kColorDodge) \
	op(EOdysseyBlendingMode::kLinearDodge) \
	op(EOdysseyBlendingMode::kLighterColor) \
	op(EOdysseyBlendingMode::kOverlay) \
	op(EOdysseyBlendingMode::kSoftLight) \
	op(EOdysseyBlendingMode::kHardLight) \
	op(EOdysseyBlendingMode::kVividLight) \
	op(EOdysseyBlendingMode::kLinearLight) \
	op(EOdysseyBlendingMode::kPinLight) \
	op(EOdysseyBlendingMode::kHardMix) \
	op(EOdysseyBlendingMode::kPhoenix) \
	op(EOdysseyBlendingMode::kReflect) \
	op(EOdysseyBlendingMode::kGlow) \
	op(EOdysseyBlendingMode::kDifference) \
	op(EOdysseyBlendingMode::kExclusion) \
	op(EOdysseyBlendingMode::kAdd) \
	op(EOdysseyBlendingMode::kSubstract) \
	op(EOdysseyBlendingMode::kDivide) \
	op(EOdysseyBlendingMode::kAverage) \
	op(EOdysseyBlendingMode::kNegation) \
	op(EOdysseyBlendingMode::kHue) \
	op(EOdysseyBlendingMode::kSaturation) \
	op(EOdysseyBlendingMode::kColor) \
	op(EOdysseyBlendingMode::kLuminosity) \
	op(EOdysseyBlendingMode::kPartialDerivative) \
	op(EOdysseyBlendingMode::kWhiteOut) \
	op(EOdysseyBlendingMode::kAngleCorrected) 

enum class EOdysseyBlendingMode : uint8;
template<> struct TIsUEnumClass<EOdysseyBlendingMode> { enum { Value = true }; };
template<> ODYSSEYCORE_API UEnum* StaticEnum<EOdysseyBlendingMode>();

#define FOREACH_ENUM_EODYSSEYALPHAMODE(op) \
	op(EOdysseyAlphaMode::kNormal) \
	op(EOdysseyAlphaMode::kErase) \
	op(EOdysseyAlphaMode::kTop) \
	op(EOdysseyAlphaMode::kBack) \
	op(EOdysseyAlphaMode::kSub) \
	op(EOdysseyAlphaMode::kAdd) \
	op(EOdysseyAlphaMode::kMul) \
	op(EOdysseyAlphaMode::kMin) \
	op(EOdysseyAlphaMode::kMax) 

enum class EOdysseyAlphaMode : uint8;
template<> struct TIsUEnumClass<EOdysseyAlphaMode> { enum { Value = true }; };
template<> ODYSSEYCORE_API UEnum* StaticEnum<EOdysseyAlphaMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
