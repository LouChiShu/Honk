// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "UnrealMathUtility.h"

#include "HonkWeaponDrop.generated.h"

UCLASS()
class HONK_API AHonkWeaponDrop : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHonkWeaponDrop();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DropMesh = nullptr;
	UPROPERTY(EditAnywhere)
	USpotLightComponent* LightComponent = nullptr;

	UPROPERTY(EditAnywhere)	
	float speed = 1;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};