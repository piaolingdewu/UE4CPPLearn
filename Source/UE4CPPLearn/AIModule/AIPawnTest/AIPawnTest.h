// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "AIPawnTest.generated.h"

UCLASS()
class UE4CPPLEARN_API AAIPawnTest : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAIPawnTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	
	//感知组建
	UPROPERTY(VisibleDefaultsOnly, Category = AI)
		class UAIPerceptionComponent* AIPerCmp;

	
	UPROPERTY(VisibleDefaultsOnly, Category = Cmp)
		class UBoxComponent* BoxCmp;

	UPROPERTY(VisibleDefaultsOnly, Category = Cmp)
		class UStaticMeshComponent* BodyMesh;
	
	UPROPERTY(VisibleDefaultsOnly, Category = Cmp)
		class UStaticMeshComponent* FaceCmp;

	UPROPERTY(VisibleDefaultsOnly, Category = Cmp)
		class UFloatingPawnMovement* Movementcmp;

public:
	void OnSeePawn(APawn* pawn);

};
