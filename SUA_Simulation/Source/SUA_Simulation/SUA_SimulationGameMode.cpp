// Copyright Epic Games, Inc. All Rights Reserved.

#include "SUA_SimulationGameMode.h"
#include "SUA_SimulationPlayerController.h"

ASUA_SimulationGameMode::ASUA_SimulationGameMode()
{
	PlayerControllerClass = ASUA_SimulationPlayerController::StaticClass();
}
