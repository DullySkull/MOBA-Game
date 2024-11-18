// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MOBA_GameProject : ModuleRules
{
	public MOBA_GameProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
