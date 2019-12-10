// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GravityGunProjectGameMode.h"
#include "GravityGunProjectHUD.h"
#include "GravityGunProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGravityGunProjectGameMode::AGravityGunProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGravityGunProjectHUD::StaticClass();
}
