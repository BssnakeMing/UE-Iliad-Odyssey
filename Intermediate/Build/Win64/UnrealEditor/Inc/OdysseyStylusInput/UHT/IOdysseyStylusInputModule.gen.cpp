// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyStylusInput/Public/IOdysseyStylusInputModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOdysseyStylusInputModule() {}

// Begin Cross Module References
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
ODYSSEYSTYLUSINPUT_API UClass* Z_Construct_UClass_UOdysseyStylusInputSubsystem();
ODYSSEYSTYLUSINPUT_API UClass* Z_Construct_UClass_UOdysseyStylusInputSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OdysseyStylusInput();
// End Cross Module References

// Begin Class UOdysseyStylusInputSubsystem
void UOdysseyStylusInputSubsystem::StaticRegisterNativesUOdysseyStylusInputSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyStylusInputSubsystem);
UClass* Z_Construct_UClass_UOdysseyStylusInputSubsystem_NoRegister()
{
	return UOdysseyStylusInputSubsystem::StaticClass();
}
struct Z_Construct_UClass_UOdysseyStylusInputSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IOdysseyStylusInputModule.h" },
		{ "ModuleRelativePath", "Public/IOdysseyStylusInputModule.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyStylusInputSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyStylusInputSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyStylusInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyStylusInputSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyStylusInputSubsystem_Statics::ClassParams = {
	&UOdysseyStylusInputSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyStylusInputSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyStylusInputSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyStylusInputSubsystem()
{
	if (!Z_Registration_Info_UClass_UOdysseyStylusInputSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyStylusInputSubsystem.OuterSingleton, Z_Construct_UClass_UOdysseyStylusInputSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyStylusInputSubsystem.OuterSingleton;
}
template<> ODYSSEYSTYLUSINPUT_API UClass* StaticClass<UOdysseyStylusInputSubsystem>()
{
	return UOdysseyStylusInputSubsystem::StaticClass();
}
UOdysseyStylusInputSubsystem::UOdysseyStylusInputSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyStylusInputSubsystem);
UOdysseyStylusInputSubsystem::~UOdysseyStylusInputSubsystem() {}
// End Class UOdysseyStylusInputSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_IOdysseyStylusInputModule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyStylusInputSubsystem, UOdysseyStylusInputSubsystem::StaticClass, TEXT("UOdysseyStylusInputSubsystem"), &Z_Registration_Info_UClass_UOdysseyStylusInputSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyStylusInputSubsystem), 29983571U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_IOdysseyStylusInputModule_h_130137579(TEXT("/Script/OdysseyStylusInput"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_IOdysseyStylusInputModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyStylusInput_Public_IOdysseyStylusInputModule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
