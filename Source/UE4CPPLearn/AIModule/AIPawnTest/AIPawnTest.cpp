// Fill out your copyright notice in the Description page of Project Settings.


#include "AIPawnTest.h"
#include "Perception/PawnSensingComponent.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Perception/AIPerceptionComponent.h"

// Sets default values
AAIPawnTest::AAIPawnTest()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	BoxCmp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCmp"));

	BodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMeshCmp"));

	FaceCmp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FaceMeshCmp"));

	Movementcmp = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementCmp"));

	AIPerCmp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerComp"));


	RootComponent = BoxCmp;

	BodyMesh->SetupAttachment(BoxCmp);

	FaceCmp->SetupAttachment(BoxCmp);





}

// Called when the game starts or when spawned
void AAIPawnTest::BeginPlay()
{
	Super::BeginPlay();

	//只是告诉你可以这样加入事件
//  	PawnSensing->OnSeePawn.AddDynamic(this, &AAIPawnTest::OnSeePawn);


}

// Called every frame
void AAIPawnTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAIPawnTest::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAIPawnTest::OnSeePawn(APawn* pawn)
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Blue, FString("Find Pawn"));

}

