// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "I_Interactable.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class HEADCOUNTSCORE_API UI_Interactable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class HEADCOUNTSCORE_API II_Interactable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Interactable")
	void Interact();
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category="Interactable")
	void UnInteract();
};
