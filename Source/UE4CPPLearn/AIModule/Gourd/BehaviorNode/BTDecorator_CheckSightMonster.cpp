// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_CheckSightMonster.h"
#include "../../AIPawnTest/AIPawnTest.h"
#include "../../AICharacter/AICharacter.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionComponent.h"
#include "SubclassOf.h"
#include "Array.h"
#include "Set.h"
#include "BrainComponent.h"
#include "../Gourd.h"
#include "AIController.h"

UBTDecorator_CheckSightMonster::UBTDecorator_CheckSightMonster()
{
	//ûʲô��д��
}

bool UBTDecorator_CheckSightMonster::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{

	//��� ��Ұ������û��Monster

// 	auto Gourd = Cast<AAIPawnTest>(OwnerComp.GetAIOwner());

	//@TODO:�Ժ�Ӧ�ð�AIPawnTest������Gourd
	
// 	auto gourd = Cast<AAICharacter>(OwnerComp.GetAIOwner());

	AAIController* pawnControll = OwnerComp.GetAIOwner();

	AGourd* gourd = Cast<AGourd>(pawnControll->GetPawn());





	

	
// 	TArray<AActor*> seepawns;
//	aipercep->GetPerceivedActors(TSubclassOf<UAISenseConfig_Sight>(), seepawns);


	

	return false;

}
