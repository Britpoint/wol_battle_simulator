// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "WolBattleSim.h"
#include "WolBattleSimGameMode.h"
#include "WolBattleSimPlayerController.h"
#include "WolBattleSimCharacter.h"

AWolBattleSimGameMode::AWolBattleSimGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AWolBattleSimPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}