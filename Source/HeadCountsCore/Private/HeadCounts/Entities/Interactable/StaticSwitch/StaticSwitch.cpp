// Fill out your copyright notice in the Description page of Project Settings.


#include "HeadCounts/Entities/Interactable/StaticSwitch/StaticSwitch.h"


AStaticSwitch::AStaticSwitch()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultState = 0;
	DesireState = 100;
	MeshObject = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshObject"));
}

void AStaticSwitch::UnInteract_Implementation()
{
	Super::UnInteract_Implementation();
	if(DefaultState < DesireState)
	{
		OnFail();
	}else
	{
		OnSuccess();
	}
}
