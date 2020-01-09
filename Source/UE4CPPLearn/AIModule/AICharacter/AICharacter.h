// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AICharacter.generated.h"

UCLASS()
class UE4CPPLEARN_API AAICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAICharacter();

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
		class UStaticMeshComponent* BodyMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Cmp)
		class UStaticMeshComponent* FaceCmp;


public:
	UFUNCTION(BlueprintPure, Category = AiPer)
		TArray<AAICharacter*> GetSightPawn(TSubclassOf<AAICharacter> pawnclass);

};
