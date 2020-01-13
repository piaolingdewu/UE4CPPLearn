// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoveWay.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = AI, abstract, EditInlineNew, config = Game)
class UE4CPPLEARN_API UMoveWay : public UObject
{
	GENERATED_BODY()
public:
	
	virtual void Run(class AMoveActor* MoveActor) ;

	UPROPERTY(EditAnywhere, Category = DebugMsg)
		FString msg;
	UPROPERTY(EditAnywhere, Category = DebugMsg)
		FColor color;


};
