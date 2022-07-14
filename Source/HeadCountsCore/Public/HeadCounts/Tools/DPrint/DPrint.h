// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DPrint.generated.h"

/**
 * 
 */
UCLASS()
class HEADCOUNTSCORE_API UDPrint : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category="DPrint")
	static void Info(UObject *selfObject,FString debugMessage, float timeToDisplay = 5);

	UFUNCTION(BlueprintCallable, Category="DPrint")
	static void Warn(UObject *selfObject,FString debugMessage, float timeToDisplay = 10);

	UFUNCTION(BlueprintCallable, Category="DPrint")
	static void Error(UObject *selfObject,FString debugMessage, float timeToDisplay = 15);
};
