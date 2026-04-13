// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/OdysseyPainterEditor/Public/Tools/OdysseyPainterEditorTool.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOdysseyPainterEditorTool() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyPainterEditorTool();
ODYSSEYPAINTEREDITOR_API UClass* Z_Construct_UClass_UOdysseyPainterEditorTool_NoRegister();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
UPackage* Z_Construct_UPackage__Script_OdysseyPainterEditor();
// End Cross Module References

// Begin Class UOdysseyPainterEditorTool Function Activate
struct Z_Construct_UFunction_UOdysseyPainterEditorTool_Activate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "Comment", "//Activates the tool\n" },
		{ "ModuleRelativePath", "Public/Tools/OdysseyPainterEditorTool.h" },
		{ "ToolTip", "Activates the tool" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPainterEditorTool_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPainterEditorTool, nullptr, "Activate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorTool_Activate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPainterEditorTool_Activate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyPainterEditorTool_Activate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPainterEditorTool_Activate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPainterEditorTool::execActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Activate();
	P_NATIVE_END;
}
// End Class UOdysseyPainterEditorTool Function Activate

// Begin Class UOdysseyPainterEditorTool Function Inactivate
struct Z_Construct_UFunction_UOdysseyPainterEditorTool_Inactivate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "Comment", "//Inactivates the tool\n" },
		{ "ModuleRelativePath", "Public/Tools/OdysseyPainterEditorTool.h" },
		{ "ToolTip", "Inactivates the tool" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPainterEditorTool_Inactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPainterEditorTool, nullptr, "Inactivate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorTool_Inactivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPainterEditorTool_Inactivate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UOdysseyPainterEditorTool_Inactivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPainterEditorTool_Inactivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPainterEditorTool::execInactivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Inactivate();
	P_NATIVE_END;
}
// End Class UOdysseyPainterEditorTool Function Inactivate

// Begin Class UOdysseyPainterEditorTool Function IsActivable
struct Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics
{
	struct OdysseyPainterEditorTool_eventIsActivable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tools" },
		{ "Comment", "//Inactivates the tool\n" },
		{ "ModuleRelativePath", "Public/Tools/OdysseyPainterEditorTool.h" },
		{ "ToolTip", "Inactivates the tool" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OdysseyPainterEditorTool_eventIsActivable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OdysseyPainterEditorTool_eventIsActivable_Parms), &Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOdysseyPainterEditorTool, nullptr, "IsActivable", nullptr, nullptr, Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::OdysseyPainterEditorTool_eventIsActivable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::OdysseyPainterEditorTool_eventIsActivable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOdysseyPainterEditorTool::execIsActivable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActivable();
	P_NATIVE_END;
}
// End Class UOdysseyPainterEditorTool Function IsActivable

// Begin Class UOdysseyPainterEditorTool
void UOdysseyPainterEditorTool::StaticRegisterNativesUOdysseyPainterEditorTool()
{
	UClass* Class = UOdysseyPainterEditorTool::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Activate", &UOdysseyPainterEditorTool::execActivate },
		{ "Inactivate", &UOdysseyPainterEditorTool::execInactivate },
		{ "IsActivable", &UOdysseyPainterEditorTool::execIsActivable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOdysseyPainterEditorTool);
UClass* Z_Construct_UClass_UOdysseyPainterEditorTool_NoRegister()
{
	return UOdysseyPainterEditorTool::StaticClass();
}
struct Z_Construct_UClass_UOdysseyPainterEditorTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/OdysseyPainterEditorTool.h" },
		{ "ModuleRelativePath", "Public/Tools/OdysseyPainterEditorTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "Tool" },
		{ "ModuleRelativePath", "Public/Tools/OdysseyPainterEditorTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOdysseyPainterEditorTool_Activate, "Activate" }, // 20023606
		{ &Z_Construct_UFunction_UOdysseyPainterEditorTool_Inactivate, "Inactivate" }, // 4271060779
		{ &Z_Construct_UFunction_UOdysseyPainterEditorTool_IsActivable, "IsActivable" }, // 3146014133
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOdysseyPainterEditorTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOdysseyPainterEditorTool, Icon), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) }; // 1704263518
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::NewProp_Icon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OdysseyPainterEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::ClassParams = {
	&UOdysseyPainterEditorTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOdysseyPainterEditorTool()
{
	if (!Z_Registration_Info_UClass_UOdysseyPainterEditorTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOdysseyPainterEditorTool.OuterSingleton, Z_Construct_UClass_UOdysseyPainterEditorTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOdysseyPainterEditorTool.OuterSingleton;
}
template<> ODYSSEYPAINTEREDITOR_API UClass* StaticClass<UOdysseyPainterEditorTool>()
{
	return UOdysseyPainterEditorTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOdysseyPainterEditorTool);
// End Class UOdysseyPainterEditorTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_OdysseyPainterEditorTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOdysseyPainterEditorTool, UOdysseyPainterEditorTool::StaticClass, TEXT("UOdysseyPainterEditorTool"), &Z_Registration_Info_UClass_UOdysseyPainterEditorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOdysseyPainterEditorTool), 1334542458U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_OdysseyPainterEditorTool_h_3091517305(TEXT("/Script/OdysseyPainterEditor"),
	Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_OdysseyPainterEditorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pack_Plugins_Iliad_HostProject_Plugins_Iliad_Source_Editor_OdysseyPainterEditor_Public_Tools_OdysseyPainterEditorTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
