// Fill out your copyright notice in the Description page of Project Settings.


#include "HeadCounts/Spawners/Spawnable.h"
#include "Log.h"

// Sets default values
ASpawnable::ASpawnable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpawnable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpawnable::Spawn_Implementation()
{
	UE_LOG(LogHeadCountsCore, Log, TEXT("Spawned"));
}

void ASpawnable::DeSpawn_Implementation()
{
	UE_LOG(LogHeadCountsCore, Log, TEXT("DeSpawned"));
}

