// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyShapes/Public/OdysseyShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyShape() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ODYSSEYSHAPES_API UClass* Z_Construct_UClass_UOdysseyShape();
ODYSSEYSHAPES_API UClass* Z_Construct_UClass_UOdysseyShape_NoRegister();
ODYSSEYSHAPES_API UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseyShape();
UPackage* Z_Construct_UPackage__Script_OdysseyShapes();
// End Cross Module References

// Begin Enum EOdysseyShape
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOdysseyShape;
static UEnum* EOdysseyShape_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOdysseyShape.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOdysseyShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OdysseyShapes_EOdysseyShape, (UObject*)Z_Construct_UPackage__Script_OdysseyShapes(), TEXT("EOdysseyShape"));
	}
	return Z_Registration_Info_UEnum_EOdysseyShape.OuterSingleton;
}
template<> ODYSSEYSHAPES_API UEnum* StaticEnum<EOdysseyShape>()
{
	return EOdysseyShape_StaticEnum();
}
struct Z_Construct_UEnum_OdysseyShapes_EOdysseyShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "kFreehand.DisplayName", "Freehand" },
		{ "kFreehand.Name", "EOdysseyShape::kFreehand" },
		{ "kNone.DisplayName", "None" },
		{ "kNone.Name", "EOdysseyShape::kNone" },
		{ "kRectangle.DisplayName", "Rectangle" },
		{ "kRectangle.Name", "EOdysseyShape::kRectangle" },
		{ "ModuleRelativePath", "Public/OdysseyShape.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOdysseyShape::kNone", (int64)EOdysseyShape::kNone },
		{ "EOdysseyShape::kFreehand", (int64)EOdysseyShape::kFreehand },
		{ "EOdysseyShape::kRectangle", (int64)EOdysseyShape::kRectangle },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OdysseyShapes_EOdysseyShape_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_OdysseyShapes,
	nullptr,
	"EOdysseyShape",
	"EOdysseyShape",
	Z_Construct_UEnum_OdysseyShapes_EOdysseyShape_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyShapes_EOdysseyShape_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OdysseyShapes_EOdysseyShape_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OdysseyShapes_EOdysseyShape_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_OdysseyShapes_EOdysseyShape()
{
	if (!Z_Registration_Info_UEnum_EOdysseyShape.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOdysseyShape.InnerSingleton, Z_Construct_UEnum_OdysseyShapes_EOdysseyShape_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOdysseyShape.InnerSingleton;
}
// End Enum EOdysseyShape

// Begin Class UOdysseyShape
void UOdysseyShape::StaticRegisterNativesUOdysseyShape()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyShape);
UClass* Z_Construct_UClass_UOdysseyShape_NoRegister()
{
	return UOdysseyShape::StaticClass();
}
struct Z_Construct_UClass_UOdysseyShape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OdysseyShape.h" },
		{ "ModuleRelativePath", "Public/OdysseyShape.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyShape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyShape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyShapes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyShape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyShape_Statics::ClassParams = {
	&UOdysseyShape::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyShape_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyShape_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyShape()
{
	if (!Z_Registration_Info_UClass_UOdysseyShape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyShape.OuterSingleton, Z_Construct_UClass_UOdysseyShape_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyShape.OuterSingleton;
}
template<> ODYSSEYSHAPES_API UClass* StaticClass<UOdysseyShape>()
{
	return UOdysseyShape::StaticClass();
}
UOdysseyShape::UOdysseyShape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyShape);
// End Class UOdysseyShape

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOdysseyShape_StaticEnum, TEXT("EOdysseyShape"), &Z_Registration_Info_UEnum_EOdysseyShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 793889286U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyShape, UOdysseyShape::StaticClass, TEXT("UOdysseyShape"), &Z_Registration_Info_UClass_UOdysseyShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyShape), 837899176U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_1399915306(TEXT("/Script/OdysseyShapes"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyShapes_Public_OdysseyShape_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
