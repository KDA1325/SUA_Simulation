// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SUA_Simulation : ModuleRules
{
	public SUA_Simulation(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "ChaosVehicles", "PhysicsCore" });
	}
}
