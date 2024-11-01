// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ChaosVehicleWheel.h"
#include "SUA_SimulationWheelFront.generated.h"

/**
 *  Base front wheel definition.
 */
UCLASS()
class USUA_SimulationWheelFront : public UChaosVehicleWheel
{
	GENERATED_BODY()

public:
	USUA_SimulationWheelFront();
};