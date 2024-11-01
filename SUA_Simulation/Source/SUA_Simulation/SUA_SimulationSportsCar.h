// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SUA_SimulationPawn.h"
#include "SUA_SimulationSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class SUA_SIMULATION_API ASUA_SimulationSportsCar : public ASUA_SimulationPawn
{
	GENERATED_BODY()
	
public:

	ASUA_SimulationSportsCar();
};
