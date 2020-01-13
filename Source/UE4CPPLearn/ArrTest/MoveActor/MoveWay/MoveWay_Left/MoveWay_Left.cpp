// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveWay_Left.h"
#include "../../MoveActor.h"


void UMoveWay_Left::Run(class AMoveActor* MoveActor)
{
	Super::Run(MoveActor);
	FVector rot = FVector(0, 1, 0);
	MoveActor->AddActorLocalOffset(rot);


}
