// Copyright Epic Games, Inc. All Rights Reserved.

#include "SHI_TecentClassGameMode.h"
#include "SHI_TecentClassCharacter.h"
#include "GameFramework/HUD.h"
#include "UObject/ConstructorHelpers.h"

ASHI_TecentClassGameMode::ASHI_TecentClassGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	static ConstructorHelpers::FClassFinder<AHUD> PlayerHUDBPClass(TEXT("/Game/SHIWEIHAO/Core/GameModes/HUD_Main"));
	
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
		UE_LOG(LogTemp, Warning, TEXT("FindPawn") );
	}
	
	if (PlayerHUDBPClass.Class != NULL)
	{
		HUDClass = PlayerHUDBPClass.Class;
		UE_LOG(LogTemp, Warning, TEXT("FindHUD") );
	}
	
}
