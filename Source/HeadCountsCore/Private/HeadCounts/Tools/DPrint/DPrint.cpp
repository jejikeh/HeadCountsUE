// Fill out your copyright notice in the Description page of Project Settings.


#include "HeadCounts/Tools/DPrint/DPrint.h"


void UDPrint::Info(UObject *selfObject,FString debugMessage, float timeToDisplay)
{
	#if WITH_EDITOR
	if(GEngine != nullptr && GWorld != nullptr)
		GEngine->AddOnScreenDebugMessage(-1,timeToDisplay,FColor::White,FString::Printf(TEXT("Object %s : %s"),*selfObject->GetName(),*debugMessage));
	#endif
}

void UDPrint::Warn(UObject* selfObject, FString debugMessage, float timeToDisplay)
{
	#if WITH_EDITOR
	if(GEngine != nullptr && GWorld != nullptr)
		GEngine->AddOnScreenDebugMessage(-1,timeToDisplay,FColor::Orange,FString::Printf(TEXT("Object %s : %s"),*selfObject->GetName(),*debugMessage));
	#endif
}

void UDPrint::Error(UObject* selfObject, FString debugMessage, float timeToDisplay)
{
    #if WITH_EDITOR
	if(GEngine != nullptr && GWorld != nullptr)
		GEngine->AddOnScreenDebugMessage(-1,timeToDisplay,FColor::Red,FString::Printf(TEXT("Object %s : %s"),*selfObject->GetName(),*debugMessage));
	#endif
}
