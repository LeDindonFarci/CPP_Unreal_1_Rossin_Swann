// Copyright Epic Games, Inc. All Rights Reserved.

#include "Eval_CppGameMode.h"
#include "Eval_CppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEval_CppGameMode::AEval_CppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
