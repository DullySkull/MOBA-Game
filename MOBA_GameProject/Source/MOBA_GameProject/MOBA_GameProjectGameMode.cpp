// Copyright Epic Games, Inc. All Rights Reserved.

#include "MOBA_GameProjectGameMode.h"
#include "MOBA_GameProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMOBA_GameProjectGameMode::AMOBA_GameProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
