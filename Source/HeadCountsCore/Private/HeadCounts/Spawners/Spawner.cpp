// Fill out your copyright notice in the Description page of Project Settings.


#include "HeadCounts/Spawners/Spawner.h"
#include "HeadCounts/Spawners/ISpawnable.h"

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
		FVector SpawnLocation = GetActorLocation();
		FRotator SpawnRotation = GetActorRotation();
		// Spawn actor at the same point as Spawner Actor
		AActor* spawnedActor = GetWorld()->SpawnActor<AActor>(spawnableObjects[Idx],SpawnLocation,SpawnRotation);
		// If object implement ISpawnable interface, then Spawner Actor keep them in array 
		if(spawnedActor->Implements<UISpawnable>())
		{
			_spawnedSpawnableActors.Add(spawnedActor);
			IISpawnable::Execute_Spawn(spawnedActor);
		}
	}
}


// For all ISpawnable object stop track them
void ASpawner::StopTracking()
{
	// Clear array
	_spawnedSpawnableActors.Empty();
}

void ASpawner::DeSpawn(){
	for(int32 Idx = 0; Idx < _spawnedSpawnableActors.Num(); Idx++)
	{
		if(_spawnedSpawnableActors[Idx]->Implements<UISpawnable>())
		{
			IISpawnable::Execute_DeSpawn(_spawnedSpawnableActors[Idx]);
		}
	}
}

void ASpawner::DeSpawnAndStopTracking()
{
	DeSpawn();
	StopTracking();
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

