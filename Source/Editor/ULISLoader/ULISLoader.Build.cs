// Copyright (c) 2018-2019 Praxinos, Inc. All Rights Reserved.
// ILIAD is subject to copyright laws and is the legal and intellectual property of Praxinos,Inc

using System.IO;
using UnrealBuildTool;

public class ULISLoader : ModuleRules
{
    public ULISLoader(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
             new string[] {
                "Core",
                "OdysseyCore",
                "ULIS"
             }
        );

        PrivateIncludePaths.AddRange(
            new string[] {
                Path.Combine(ModuleDirectory, "Private")
            }
        );
    }
}

