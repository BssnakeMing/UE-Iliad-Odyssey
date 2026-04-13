using UnrealBuildTool;

public class OdysseyRuntimeWidgets : ModuleRules
{
    public OdysseyRuntimeWidgets(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "Slate",
                "SlateCore",
                "UMG",
                "OdysseyBrush",
                "OdysseyCore",
                "OdysseyRuntimeImaging",
                "OdysseyRuntimePaintEngine",
                "OdysseyRuntimeTools",
                "OdysseyShapes"
            }
        );
    }
}
