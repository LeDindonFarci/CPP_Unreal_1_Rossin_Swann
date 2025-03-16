// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EVAL_CPP_RPGHUD_generated_h
#error "RPGHUD.generated.h already included, missing '#pragma once' in RPGHUD.h"
#endif
#define EVAL_CPP_RPGHUD_generated_h

#define FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetPercent);


#define FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGHUD(); \
	friend struct Z_Construct_UClass_ARPGHUD_Statics; \
public: \
	DECLARE_CLASS(ARPGHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Eval_Cpp"), NO_API) \
	DECLARE_SERIALIZER(ARPGHUD)


#define FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARPGHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPGHUD(ARPGHUD&&); \
	ARPGHUD(const ARPGHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARPGHUD) \
	NO_API virtual ~ARPGHUD();


#define FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_13_PROLOG
#define FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EVAL_CPP_API UClass* StaticClass<class ARPGHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_swous_Documents_Unreal_Eval_Cpp_Source_Eval_Cpp_RPGHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
