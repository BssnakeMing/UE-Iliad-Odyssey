using UnrealBuildTool;

public class OdysseyRuntimeImaging : ModuleRules
{
    public OdysseyRuntimeImaging(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "RHI",
                "RenderCore"
            }
        );
    }
}
