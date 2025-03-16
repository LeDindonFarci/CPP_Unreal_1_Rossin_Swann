// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eval_Cpp/MovingCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingCube() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
EVAL_CPP_API UClass* Z_Construct_UClass_AMovingCube();
EVAL_CPP_API UClass* Z_Construct_UClass_AMovingCube_NoRegister();
UPackage* Z_Construct_UPackage__Script_Eval_Cpp();
// End Cross Module References

// Begin Class AMovingCube
void AMovingCube::StaticRegisterNativesAMovingCube()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingCube);
UClass* Z_Construct_UClass_AMovingCube_NoRegister()
{
	return AMovingCube::StaticClass();
}
struct Z_Construct_UClass_AMovingCube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MovingCube.h" },
		{ "ModuleRelativePath", "MovingCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovingCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovingCube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CircleRadius_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "MovingCube.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CircleRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingCube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingCube, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCube_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingCube, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCube_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingCube, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingCube_Statics::NewProp_CircleRadius = { "CircleRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMovingCube, CircleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CircleRadius_MetaData), NewProp_CircleRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCube_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCube_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCube_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingCube_Statics::NewProp_CircleRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMovingCube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Eval_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingCube_Statics::ClassParams = {
	&AMovingCube::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMovingCube_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMovingCube_Statics::Class_MetaDataParams), Z_Construct_UClass_AMovingCube_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMovingCube()
{
	if (!Z_Registration_Info_UClass_AMovingCube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingCube.OuterSingleton, Z_Construct_UClass_AMovingCube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMovingCube.OuterSingleton;
}
template<> EVAL_CPP_API UClass* StaticClass<AMovingCube>()
{
	return AMovingCube::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingCube);
AMovingCube::~AMovingCube() {}
// End Class AMovingCube

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_MovingCube_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMovingCube, AMovingCube::StaticClass, TEXT("AMovingCube"), &Z_Registration_Info_UClass_AMovingCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingCube), 2721237065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_MovingCube_h_987829998(TEXT("/Script/Eval_Cpp"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_MovingCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_MovingCube_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
