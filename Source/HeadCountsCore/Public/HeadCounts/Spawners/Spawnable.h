// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeadCounts/Spawners/ISpawnable.h"
#include "Spawnable.generated.h"

UCLASS()
class HEADCOUNTSCORE_API ASpawnable : public AActor, public IISpawnable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	virtual void Spawn_Implementation() override;
	virtual void DeSpawn_Implementation() override;

};
