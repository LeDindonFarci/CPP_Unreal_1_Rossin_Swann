// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eval_Cpp/RPGHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
EVAL_CPP_API UClass* Z_Construct_UClass_ARPGHUD();
EVAL_CPP_API UClass* Z_Construct_UClass_ARPGHUD_NoRegister();
EVAL_CPP_API UClass* Z_Construct_UClass_UBarWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Eval_Cpp();
// End Cross Module References

// Begin Class ARPGHUD Function SetPercent
struct Z_Construct_UFunction_ARPGHUD_SetPercent_Statics
{
	struct RPGHUD_eventSetPercent_Parms
	{
		float Percent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RPGHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Percent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGHUD_eventSetPercent_Parms, Percent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Percent_MetaData), NewProp_Percent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::NewProp_Percent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARPGHUD, nullptr, "SetPercent", nullptr, nullptr, Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::RPGHUD_eventSetPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::RPGHUD_eventSetPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGHUD_SetPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGHUD_SetPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGHUD::execSetPercent)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPercent(Z_Param_Out_Percent);
	P_NATIVE_END;
}
// End Class ARPGHUD Function SetPercent

// Begin Class ARPGHUD
void ARPGHUD::StaticRegisterNativesARPGHUD()
{
	UClass* Class = ARPGHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPercent", &ARPGHUD::execSetPercent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARPGHUD);
UClass* Z_Construct_UClass_ARPGHUD_NoRegister()
{
	return ARPGHUD::StaticClass();
}
struct Z_Construct_UClass_ARPGHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "RPGHUD.h" },
		{ "ModuleRelativePath", "RPGHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// R\xef\xbf\xbd""f\xef\xbf\xbdrence du Widget Blueprint\n" },
#endif
		{ "ModuleRelativePath", "RPGHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "R\xef\xbf\xbd""f\xef\xbf\xbdrence du Widget Blueprint" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Instance du widget affich\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RPGHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instance du widget affich\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BarWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BarWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGHUD_SetPercent, "SetPercent" }, // 1130727370
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARPGHUD_Statics::NewProp_BarWidgetClass = { "BarWidgetClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGHUD, BarWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarWidgetClass_MetaData), NewProp_BarWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGHUD_Statics::NewProp_BarWidget = { "BarWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGHUD, BarWidget), Z_Construct_UClass_UBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarWidget_MetaData), NewProp_BarWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGHUD_Statics::NewProp_BarWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGHUD_Statics::NewProp_BarWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARPGHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Eval_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGHUD_Statics::ClassParams = {
	&ARPGHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARPGHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARPGHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARPGHUD()
{
	if (!Z_Registration_Info_UClass_ARPGHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGHUD.OuterSingleton, Z_Construct_UClass_ARPGHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPGHUD.OuterSingleton;
}
template<> EVAL_CPP_API UClass* StaticClass<ARPGHUD>()
{
	return ARPGHUD::StaticClass();
}
ARPGHUD::ARPGHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARPGHUD);
ARPGHUD::~ARPGHUD() {}
// End Class ARPGHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPGHUD, ARPGHUD::StaticClass, TEXT("ARPGHUD"), &Z_Registration_Info_UClass_ARPGHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGHUD), 1254030510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_1434546570(TEXT("/Script/Eval_Cpp"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
