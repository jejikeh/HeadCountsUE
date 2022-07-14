// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HeadCounts/Entities/Interactable/Interactable.h"
#include "StaticSwitch.generated.h"

/**
 * 
 */
UCLASS()
class HEADCOUNTSCORE_API AStaticSwitch : public AInteractable
{
	GENERATED_BODY()
	
protected:
	
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="StaticSwitch")
	void OnSuccess();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="StaticSwitch")
	void OnFail();

public:
	AStaticSwitch();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="StaticSwitch")
	int32 DefaultState;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="StaticSwitch")
	int32 DesireState;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshObject;
	
	virtual void UnInteract_Implementation() override;
};
