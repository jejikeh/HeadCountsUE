// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeadCounts/Spawners/Spawnable.h"
#include "Spawner.generated.h"

UCLASS()
class HEADCOUNTSCORE_API ASpawner : public AActor
{
private:
	GENERATED_BODY()
	TArray<AActor*> _spawnedSpawnableActors;
	
public:	
	// Sets default values for this actor's properties
	ASpawner();

	UFUNCTION(BlueprintCallable, Category="Spawner")
	void Spawn();

	UFUNCTION(BlueprintCallable, Category="Spawner")
	void StopTracking();

	UFUNCTION(BlueprintCallable, Category="Spawner")
	void DeSpawn();

	UFUNCTION(BlueprintCallable, Category="Spawner")
	void DeSpawnAndStopTracking();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spawner")
	TArray<TSubclassOf<AActor>> spawnableObjects;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
