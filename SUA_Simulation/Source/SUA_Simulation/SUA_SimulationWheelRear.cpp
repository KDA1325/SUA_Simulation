// Copyright Epic Games, Inc. All Rights Reserved.

#include "SUA_SimulationWheelRear.h"
#include "UObject/ConstructorHelpers.h"

USUA_SimulationWheelRear::USUA_SimulationWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}