// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAICont.h"



void ATankAICont::BeginPlay()
{
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAICont not possessed"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ATankAICont possessed: %s"), *ControlledTank->GetName());
	}
}


ATank * ATankAICont::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
