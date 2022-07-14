#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorTest.generated.h"
UCLASS()
class AActorTest : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "Components")
    class UBillboardComponent* Sprite;

public:
	AActorTest(const FObjectInitializer& ObjectInitializer);
	virtual void BeginPlay() override;
};
