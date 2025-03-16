// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Eval_Cpp/Eval_CppGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEval_CppGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
EVAL_CPP_API UClass* Z_Construct_UClass_AEval_CppGameMode();
EVAL_CPP_API UClass* Z_Construct_UClass_AEval_CppGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Eval_Cpp();
// End Cross Module References

// Begin Class AEval_CppGameMode
void AEval_CppGameMode::StaticRegisterNativesAEval_CppGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEval_CppGameMode);
UClass* Z_Construct_UClass_AEval_CppGameMode_NoRegister()
{
	return AEval_CppGameMode::StaticClass();
}
struct Z_Construct_UClass_AEval_CppGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Eval_CppGameMode.h" },
		{ "ModuleRelativePath", "Eval_CppGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEval_CppGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEval_CppGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Eval_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEval_CppGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEval_CppGameMode_Statics::ClassParams = {
	&AEval_CppGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEval_CppGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AEval_CppGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEval_CppGameMode()
{
	if (!Z_Registration_Info_UClass_AEval_CppGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEval_CppGameMode.OuterSingleton, Z_Construct_UClass_AEval_CppGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEval_CppGameMode.OuterSingleton;
}
template<> EVAL_CPP_API UClass* StaticClass<AEval_CppGameMode>()
{
	return AEval_CppGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEval_CppGameMode);
AEval_CppGameMode::~AEval_CppGameMode() {}
// End Class AEval_CppGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_Eval_CppGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEval_CppGameMode, AEval_CppGameMode::StaticClass, TEXT("AEval_CppGameMode"), &Z_Registration_Info_UClass_AEval_CppGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEval_CppGameMode), 1704947490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_Eval_CppGameMode_h_971391722(TEXT("/Script/Eval_Cpp"),
	Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_Eval_CppGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_Eval_CppGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
