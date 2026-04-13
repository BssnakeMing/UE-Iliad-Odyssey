using UnrealBuildTool;

public class OdysseyRuntimeTools : ModuleRules
{
    public OdysseyRuntimeTools(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "OdysseyCore",
                "OdysseyShapes"
            }
        );
    }
}
