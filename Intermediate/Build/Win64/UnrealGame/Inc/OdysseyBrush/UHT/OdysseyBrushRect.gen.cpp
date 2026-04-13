// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyBrush/Classes/Proxies/OdysseyBrushRect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyBrushRect() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary();
ODYSSEYBRUSH_API UClass* Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary_NoRegister();
ODYSSEYBRUSH_API UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBrushRect();
UPackage* Z_Construct_UPackage__Script_OdysseyBrush();
// End Cross Module References

// Begin ScriptStruct FOdysseyBrushRect
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OdysseyBrushRect;
class UScriptStruct* FOdysseyBrushRect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyBrushRect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OdysseyBrushRect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOdysseyBrushRect, (UObject*)Z_Construct_UPackage__Script_OdysseyBrush(), TEXT("OdysseyBrushRect"));
	}
	return Z_Registration_Info_UScriptStruct_OdysseyBrushRect.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UScriptStruct* StaticStruct<FOdysseyBrushRect>()
{
	return FOdysseyBrushRect::StaticStruct();
}
struct Z_Construct_UScriptStruct_FOdysseyBrushRect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/////////////////////////////////////////////////////\n// Odyssey Brush Rectangle\n" },
		{ "DisplayName", "Odyssey Rectangle" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushRect.h" },
		{ "ToolTip", "Odyssey Brush Rectangle" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOdysseyBrushRect>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOdysseyBrushRect_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
	nullptr,
	&NewStructOps,
	"OdysseyBrushRect",
	nullptr,
	0,
	sizeof(FOdysseyBrushRect),
	alignof(FOdysseyBrushRect),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOdysseyBrushRect_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOdysseyBrushRect_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOdysseyBrushRect()
{
	if (!Z_Registration_Info_UScriptStruct_OdysseyBrushRect.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OdysseyBrushRect.InnerSingleton, Z_Construct_UScriptStruct_FOdysseyBrushRect_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_OdysseyBrushRect.InnerSingleton;
}
// End ScriptStruct FOdysseyBrushRect

// Begin Class UOdysseyBrushRectFunctionLibrary Function BreakToXYWH
struct Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics
{
	struct OdysseyBrushRectFunctionLibrary_eventBreakToXYWH_Parms
	{
		FOdysseyBrushRect Rectangle;
		int32 X;
		int32 Y;
		int32 Width;
		int32 Height;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Math" },
		{ "Comment", "//Create an Odyssey Rectangle from its X, Y, W and H components.\n" },
		{ "DisplayName", "Break Odyssey Rectangle" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushRect.h" },
		{ "ToolTip", "Create an Odyssey Rectangle from its X, Y, W and H components." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rectangle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::NewProp_Rectangle = { "Rectangle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushRectFunctionLibrary_eventBreakToXYWH_Parms, Rectangle), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushRectFunctionLibrary_eventBreakToXYWH_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushRectFunctionLibrary_eventBreakToXYWH_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushRectFunctionLibrary_eventBreakToXYWH_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushRectFunctionLibrary_eventBreakToXYWH_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::NewProp_Rectangle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary, nullptr, "BreakToXYWH", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::OdysseyBrushRectFunctionLibrary_eventBreakToXYWH_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::OdysseyBrushRectFunctionLibrary_eventBreakToXYWH_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushRectFunctionLibrary::execBreakToXYWH)
{
	P_GET_STRUCT(FOdysseyBrushRect,Z_Param_Rectangle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_X);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Y);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Width);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	UOdysseyBrushRectFunctionLibrary::BreakToXYWH(Z_Param_Rectangle,Z_Param_Out_X,Z_Param_Out_Y,Z_Param_Out_Width,Z_Param_Out_Height);
	P_NATIVE_END;
}
// End Class UOdysseyBrushRectFunctionLibrary Function BreakToXYWH

// Begin Class UOdysseyBrushRectFunctionLibrary Function MakeFromXYWH
struct Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics
{
	struct OdysseyBrushRectFunctionLibrary_eventMakeFromXYWH_Parms
	{
		int32 X;
		int32 Y;
		int32 Width;
		int32 Height;
		FOdysseyBrushRect ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Odyssey|Math" },
		{ "Comment", "//Create an Odyssey Rectangle from its X, Y, W and H components.\n" },
		{ "DisplayName", "Make Odyssey Rectangle" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushRect.h" },
		{ "ToolTip", "Create an Odyssey Rectangle from its X, Y, W and H components." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushRectFunctionLibrary_eventMakeFromXYWH_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushRectFunctionLibrary_eventMakeFromXYWH_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushRectFunctionLibrary_eventMakeFromXYWH_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushRectFunctionLibrary_eventMakeFromXYWH_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OdysseyBrushRectFunctionLibrary_eventMakeFromXYWH_Parms, ReturnValue), Z_Construct_UScriptStruct_FOdysseyBrushRect, METADATA_PARAMS(0, nullptr) }; // 816871960
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary, nullptr, "MakeFromXYWH", nullptr, nullptr, Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::OdysseyBrushRectFunctionLibrary_eventMakeFromXYWH_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::OdysseyBrushRectFunctionLibrary_eventMakeFromXYWH_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyBrushRectFunctionLibrary::execMakeFromXYWH)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FOdysseyBrushRect*)Z_Param__Result=UOdysseyBrushRectFunctionLibrary::MakeFromXYWH(Z_Param_X,Z_Param_Y,Z_Param_Width,Z_Param_Height);
	P_NATIVE_END;
}
// End Class UOdysseyBrushRectFunctionLibrary Function MakeFromXYWH

// Begin Class UOdysseyBrushRectFunctionLibrary
void UOdysseyBrushRectFunctionLibrary::StaticRegisterNativesUOdysseyBrushRectFunctionLibrary()
{
	UClass* Class = UOdysseyBrushRectFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BreakToXYWH", &UOdysseyBrushRectFunctionLibrary::execBreakToXYWH },
		{ "MakeFromXYWH", &UOdysseyBrushRectFunctionLibrary::execMakeFromXYWH },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyBrushRectFunctionLibrary);
UClass* Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary_NoRegister()
{
	return UOdysseyBrushRectFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/////////////////////////////////////////////////////\n// UOdysseyBrushRectFunctionLibrary\n" },
		{ "IncludePath", "Proxies/OdysseyBrushRect.h" },
		{ "ModuleRelativePath", "Classes/Proxies/OdysseyBrushRect.h" },
		{ "ScriptName", "OdysseyBrushRectLibrary" },
		{ "ToolTip", "UOdysseyBrushRectFunctionLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_BreakToXYWH, "BreakToXYWH" }, // 2038943739
		{ &Z_Construct_UFunction_UOdysseyBrushRectFunctionLibrary_MakeFromXYWH, "MakeFromXYWH" }, // 2545796454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyBrushRectFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary_Statics::ClassParams = {
	&UOdysseyBrushRectFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UOdysseyBrushRectFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyBrushRectFunctionLibrary.OuterSingleton, Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyBrushRectFunctionLibrary.OuterSingleton;
}
template<> ODYSSEYBRUSH_API UClass* StaticClass<UOdysseyBrushRectFunctionLibrary>()
{
	return UOdysseyBrushRectFunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyBrushRectFunctionLibrary);
UOdysseyBrushRectFunctionLibrary::~UOdysseyBrushRectFunctionLibrary() {}
// End Class UOdysseyBrushRectFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushRect_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOdysseyBrushRect::StaticStruct, Z_Construct_UScriptStruct_FOdysseyBrushRect_Statics::NewStructOps, TEXT("OdysseyBrushRect"), &Z_Registration_Info_UScriptStruct_OdysseyBrushRect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOdysseyBrushRect), 816871960U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyBrushRectFunctionLibrary, UOdysseyBrushRectFunctionLibrary::StaticClass, TEXT("UOdysseyBrushRectFunctionLibrary"), &Z_Registration_Info_UClass_UOdysseyBrushRectFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyBrushRectFunctionLibrary), 3920962779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushRect_h_1952790695(TEXT("/Script/OdysseyBrush"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushRect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushRect_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushRect_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyBrush_Classes_Proxies_OdysseyBrushRect_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
