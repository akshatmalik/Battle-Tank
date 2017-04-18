// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"




void ATankPlayerController::BeginPlay()
{
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possessed"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possessed: %s"), *ControlledTank->GetName());
	}
}


ATank * ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

