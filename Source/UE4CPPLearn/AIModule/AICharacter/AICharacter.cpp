// Fill out your copyright notice in the Description page of Project Settings.


#include "AICharacter.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "SubclassOf.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AAICharacter::AAICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMeshCmp"));

	FaceCmp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FaceMeshCmp"));


	AIPerCmp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerComp"));



	BodyMesh->SetupAttachment(RootComponent);

	FaceCmp->SetupAttachment(RootComponent);

	this->GetCapsuleComponent()->SetCapsuleHalfHeight(24);
	this->GetCapsuleComponent()->SetCapsuleRadius(23);

}

// Called when the game starts or when spawned
void AAICharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

TArray<AAICharacter*> AAICharacter::GetSightPawn(TSubclassOf<AAICharacter> pawnclass)
{
	//返回 在AICharacter视野当中的指定的AICharacter类型
	//
	TArray<AAICharacter*> re;

	TArray<AActor*> all;
	AIPerCmp->GetCurrentlyPerceivedActors(TSubclassOf<UAISense_Sight>(), all);



	for (auto l : all)
	{
		
		if (l->GetClass() == pawnclass->GetClass())

			if (Cast<AAICharacter>(l) != nullptr)
				re.Add(Cast<AAICharacter>(l));

	}

	return re;

}

