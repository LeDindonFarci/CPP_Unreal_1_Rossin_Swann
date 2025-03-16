// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Eval_Cpp : ModuleRules
{
	public Eval_Cpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
