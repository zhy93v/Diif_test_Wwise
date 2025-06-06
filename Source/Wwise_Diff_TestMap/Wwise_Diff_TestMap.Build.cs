// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Wwise_Diff_TestMap : ModuleRules
{
	public Wwise_Diff_TestMap(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
