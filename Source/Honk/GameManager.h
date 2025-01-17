// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameHudWidget.h"
#include "HonkPawn.h"

#include "GameManager.generated.h"

UCLASS()
class HONK_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameHudWidget> HUD;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SpawnPlayers() const;

private:
	UPROPERTY()
	UGameHudWidget* HUDWidget = nullptr;

	TArray<AHonkPawn*> players;
};
