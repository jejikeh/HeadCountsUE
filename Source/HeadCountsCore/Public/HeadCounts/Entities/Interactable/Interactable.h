// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HeadCounts/Entities/Entity.h"
#include "HeadCounts/Entities/Interactable/I_Interactable.h"
#include "Interactable.generated.h"

/**
 * 
 */
UCLASS()
class HEADCOUNTSCORE_API AInteractable : public AEntity, public II_Interactable
{
	GENERATED_BODY()

public:
	virtual void Interact_Implementation() override;
	virtual void UnInteract_Implementation() override;
};
