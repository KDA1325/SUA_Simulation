// Copyright Epic Games, Inc. All Rights Reserved.

#include "SUA_SimulationWheelFront.h"
#include "UObject/ConstructorHelpers.h"

USUA_SimulationWheelFront::USUA_SimulationWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}