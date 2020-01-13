// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArrTest/MoveActor/MoveWay/MoveWay.h"
#include "MoveWay_UP.generated.h"

/**
 * 
 */
UCLASS()
class UE4CPPLEARN_API UMoveWay_UP : public UMoveWay
{
	GENERATED_BODY()
	
public:
	virtual void Run(class AMoveActor* MoveActor) override;


		

};
