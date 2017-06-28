// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

ATank * ATankAIController::GetAiTank() const {
	return Cast<ATank>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank() const
{

	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}

void ATankAIController::BeginPlay() {
	Super::BeginPlay();

	auto PlayerPawn = GetPlayerTank();
	auto AiTank = GetAiTank();
	
	if (PlayerPawn) {
			UE_LOG(LogTemp, Warning, TEXT("AI Controller found: %s"), *(PlayerPawn->GetName()))
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("AI has not found the Player Tank."))
	}
	//notice me senpai !!
}

