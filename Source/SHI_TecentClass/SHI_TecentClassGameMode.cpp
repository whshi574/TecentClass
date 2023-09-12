// Copyright Epic Games, Inc. All Rights Reserved.

#include "SHI_TecentClassGameMode.h"
#include "SHI_TecentClassCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASHI_TecentClassGameMode::ASHI_TecentClassGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
