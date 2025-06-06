// Copyright Epic Games, Inc. All Rights Reserved.

#include "Wwise_Diff_TestMapGameMode.h"
#include "Wwise_Diff_TestMapCharacter.h"
#include "UObject/ConstructorHelpers.h"

AWwise_Diff_TestMapGameMode::AWwise_Diff_TestMapGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
