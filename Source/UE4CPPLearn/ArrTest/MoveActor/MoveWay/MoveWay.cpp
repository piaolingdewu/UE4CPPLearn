// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveWay.h"

void UMoveWay::Run(class AMoveActor* MoveActor)
{
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 0, color, msg);

}
