// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyRuntimeWidgets_init() {}
	ODYSSEYRUNTIMEWIDGETS_API UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature();
	ODYSSEYRUNTIMEWIDGETS_API UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature();
	ODYSSEYRUNTIMEWIDGETS_API UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature();
	ODYSSEYRUNTIMEWIDGETS_API UFunction* Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OdysseyRuntimeWidgets;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OdysseyRuntimeWidgets()
	{
		if (!Z_Registration_Info_UPackage__Script_OdysseyRuntimeWidgets.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeBrushPresetsChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimePaintToolChangedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OdysseyRuntimeWidgets_OdysseyRuntimeToolSettingsChangedSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OdysseyRuntimeWidgets",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC113B234,
				0x6681E7A2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OdysseyRuntimeWidgets.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OdysseyRuntimeWidgets.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OdysseyRuntimeWidgets(Z_Construct_UPackage__Script_OdysseyRuntimeWidgets, TEXT("/Script/OdysseyRuntimeWidgets"), Z_Registration_Info_UPackage__Script_OdysseyRuntimeWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC113B234, 0x6681E7A2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
