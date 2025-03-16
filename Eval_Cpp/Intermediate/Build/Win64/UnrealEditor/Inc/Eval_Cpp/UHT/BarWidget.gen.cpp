// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eval_Cpp/BarWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarWidget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
EVAL_CPP_API UClass* Z_Construct_UClass_UBarWidget();
EVAL_CPP_API UClass* Z_Construct_UClass_UBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Eval_Cpp();
// End Cross Module References

// Begin Class UBarWidget Function SetPercent
struct Z_Construct_UFunction_UBarWidget_SetPercent_Statics
{
	struct BarWidget_eventSetPercent_Parms
	{
		float Percent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Percent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBarWidget_SetPercent_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BarWidget_eventSetPercent_Parms, Percent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Percent_MetaData), NewProp_Percent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBarWidget_SetPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBarWidget_SetPercent_Statics::NewProp_Percent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBarWidget_SetPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBarWidget_SetPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBarWidget, nullptr, "SetPercent", nullptr, nullptr, Z_Construct_UFunction_UBarWidget_SetPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBarWidget_SetPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBarWidget_SetPercent_Statics::BarWidget_eventSetPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBarWidget_SetPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBarWidget_SetPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBarWidget_SetPercent_Statics::BarWidget_eventSetPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBarWidget_SetPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBarWidget_SetPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBarWidget::execSetPercent)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Percent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPercent(Z_Param_Out_Percent);
	P_NATIVE_END;
}
// End Class UBarWidget Function SetPercent

// Begin Class UBarWidget
void UBarWidget::StaticRegisterNativesUBarWidget()
{
	UClass* Class = UBarWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPercent", &UBarWidget::execSetPercent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBarWidget);
UClass* Z_Construct_UClass_UBarWidget_NoRegister()
{
	return UBarWidget::StaticClass();
}
struct Z_Construct_UClass_UBarWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BarWidget.h" },
		{ "ModuleRelativePath", "BarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BarWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorCurve_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "BarWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBarWidget_SetPercent, "SetPercent" }, // 2348361801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBarWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBarWidget_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBarWidget, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProgressBar_MetaData), NewProp_ProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBarWidget_Statics::NewProp_ColorCurve = { "ColorCurve", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBarWidget, ColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorCurve_MetaData), NewProp_ColorCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBarWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBarWidget_Statics::NewProp_ProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBarWidget_Statics::NewProp_ColorCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBarWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBarWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Eval_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBarWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBarWidget_Statics::ClassParams = {
	&UBarWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBarWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBarWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBarWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBarWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBarWidget()
{
	if (!Z_Registration_Info_UClass_UBarWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBarWidget.OuterSingleton, Z_Construct_UClass_UBarWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBarWidget.OuterSingleton;
}
template<> EVAL_CPP_API UClass* StaticClass<UBarWidget>()
{
	return UBarWidget::StaticClass();
}
UBarWidget::UBarWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBarWidget);
UBarWidget::~UBarWidget() {}
// End Class UBarWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_BarWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBarWidget, UBarWidget::StaticClass, TEXT("UBarWidget"), &Z_Registration_Info_UClass_UBarWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBarWidget), 4200482598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_BarWidget_h_802187341(TEXT("/Script/Eval_Cpp"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_BarWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_BarWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
