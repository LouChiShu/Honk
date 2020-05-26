// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "HonkGameMode.h"
#include "HonkPawn.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "HonkHud.h"

AHonkGameMode::AHonkGameMode()
{
	DefaultPawnClass = AHonkPawn::StaticClass();
	HUDClass = AHonkHud::StaticClass();
}

void AHonkGameMode::BeginPlay()
{
	for (int i = 0; i < PlayerCount; i++)
	{
		if (UWorld* World = GetWorld())
		{
			APlayerController* PC = UGameplayStatics::CreatePlayer(World, i, true);
		}
	}
}