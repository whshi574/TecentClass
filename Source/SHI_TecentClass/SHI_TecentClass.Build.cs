// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SHI_TecentClass : ModuleRules
{
	public SHI_TecentClass(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
