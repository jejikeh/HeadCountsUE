// Fill out your copyright notice in the Description page of Project Settings.


#include "HeadCounts/Entities/Entity.h"
#include "Log.h"

// Sets default values
AEntity::AEntity()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
 void AEntity::BeginPlay()
{
	Super::BeginPlay();
	Born();
}

void AEntity::Born()
{
	UE_LOG(LogHeadCountsCore, Log, TEXT("Entity was Born"));
}

void AEntity::Die()
{
	UE_LOG(LogHeadCountsCore, Log, TEXT("Entity was Died"));
}

// Called every frame
void AEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEntity::Destroyed()
{
	Super::Destroyed();
	Die();
}

