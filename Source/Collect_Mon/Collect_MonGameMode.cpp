// Copyright Epic Games, Inc. All Rights Reserved.

#include "Collect_MonGameMode.h"
#include "Collect_MonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACollect_MonGameMode::ACollect_MonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
