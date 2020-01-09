// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CheckSightMonster.generated.h"

/**
 * 
 */
UCLASS()
class UE4CPPLEARN_API UBTDecorator_CheckSightMonster : public UBTDecorator
{
	GENERATED_BODY()

public:
	UBTDecorator_CheckSightMonster();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	
	
};
