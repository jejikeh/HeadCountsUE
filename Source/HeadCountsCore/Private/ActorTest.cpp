#include "ActorTest.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "Log.h"
AActorTest::AActorTest(const FObjectInitializer&ObjectInitializer) : Super(ObjectInitializer)
{
    RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("RootComponent"));
    Sprite = ObjectInitializer.CreateDefaultSubobject<UBillboardComponent>(this, TEXT("Sprite"));
    Sprite->SetupAttachment(RootComponent);
}
void AActorTest::BeginPlay(){
    Super::BeginPlay();
    UE_LOG(LogHeadCountsCore, Log, TEXT("Hello uempe"));
}
