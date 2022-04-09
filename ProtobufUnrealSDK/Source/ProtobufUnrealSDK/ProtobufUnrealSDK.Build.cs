// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class ProtobufUnrealSDK : ModuleRules
{
	public ProtobufUnrealSDK(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] { "GoogleProtobuf" });

		/*PublicIncludePaths.AddRange(new string[]
		{
			Path.Combine(ModuleDirectory,"../../Plugins/GoogleProtobuf/Source/GoogleProtobuf/Public")
		});*/

		//PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "../../Plugins/GoogleProtobuf/Intermediate/Build/Win64/UE4Editor/Development/GoogleProtobuf/UE4Editor-GoogleProtobuf.lib"));

		//PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "../../Plugins/GoogleProtobuf"));

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
