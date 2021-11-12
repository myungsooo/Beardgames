// Copyright Epic Games, Inc. All Rights Reserved.

#include "BasicsTutorialGameMode.h"
#include "BasicsTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABasicsTutorialGameMode::ABasicsTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
