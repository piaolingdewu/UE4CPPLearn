// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveWay_UP.h"
#include "../../MoveActor.h"

void UMoveWay_UP::Run(class AMoveActor* MoveActor)
{
	Super::Run(MoveActor);

	FVector rot = FVector(0, 0, 1);
	MoveActor->AddActorLocalOffset(rot);

}
