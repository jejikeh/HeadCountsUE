// Fill out your copyright notice in the Description page of Project Settings.


#include "HeadCounts/Entities/Interactable/Interactable.h"
#include "Log.h"

void AInteractable::Interact_Implementation()
{
	UE_LOG(LogHeadCountsCore, Log, TEXT("Interacting with some object"));
}

void AInteractable::UnInteract_Implementation()
{
	UE_LOG(LogHeadCountsCore, Log, TEXT("UnInteracting with some object"));
}