// Copyright Epic Games, Inc. All Rights Reserved.

#include "GMTKGameJamGameMode.h"
#include "GMTKGameJamPlayerController.h"
#include "GMTKGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGMTKGameJamGameMode::AGMTKGameJamGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGMTKGameJamPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}