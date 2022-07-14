// Fill out your copyright notice in the Description page of Project Settings.


#include "HeadCounts/Spawners/Spawner.h"
#include "HeadCounts/Spawners/ISpawnable.h"
#include "Log.h"

// Sets default values
ASpawner::ASpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ASpawner::Spawn()
{
	for(int32 Idx = 0; Idx < spawnableObjects.Num(); Idx++)
	{
		AActor* spawnedActor = Cast<AActor>(spawnableObjects[Idx]);
		if(spawnedActor->Implements<UISpawnable>()){
    		IISpawnable::Execute_Spawn(spawnedActor);
		}
		
	}
}


void ASpawner::DeSpawn()
{
}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

