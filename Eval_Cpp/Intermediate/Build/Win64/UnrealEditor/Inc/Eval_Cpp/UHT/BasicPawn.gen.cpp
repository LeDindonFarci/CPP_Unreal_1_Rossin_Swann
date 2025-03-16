// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eval_Cpp/BasicPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
EVAL_CPP_API UClass* Z_Construct_UClass_ABasicPawn();
EVAL_CPP_API UClass* Z_Construct_UClass_ABasicPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_Eval_Cpp();
// End Cross Module References

// Begin Class ABasicPawn
void ABasicPawn::StaticRegisterNativesABasicPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABasicPawn);
UClass* Z_Construct_UClass_ABasicPawn_NoRegister()
{
	return ABasicPawn::StaticClass();
}
struct Z_Construct_UClass_ABasicPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BasicPawn.h" },
		{ "ModuleRelativePath", "BasicPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BasicPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BasicPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "BasicPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicPawn_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicPawn, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABasicPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicPawn, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABasicPawn_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABasicPawn, TurnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSpeed_MetaData), NewProp_TurnSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABasicPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicPawn_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicPawn_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicPawn_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABasicPawn_Statics::NewProp_TurnSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABasicPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Eval_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABasicPawn_Statics::ClassParams = {
	&ABasicPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABasicPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABasicPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABasicPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ABasicPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABasicPawn()
{
	if (!Z_Registration_Info_UClass_ABasicPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABasicPawn.OuterSingleton, Z_Construct_UClass_ABasicPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABasicPawn.OuterSingleton;
}
template<> EVAL_CPP_API UClass* StaticClass<ABasicPawn>()
{
	return ABasicPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicPawn);
ABasicPawn::~ABasicPawn() {}
// End Class ABasicPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_BasicPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABasicPawn, ABasicPawn::StaticClass, TEXT("ABasicPawn"), &Z_Registration_Info_UClass_ABasicPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABasicPawn), 3438077588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_BasicPawn_h_702623791(TEXT("/Script/Eval_Cpp"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_BasicPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_BasicPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
