using UnrealBuildTool;

public class OdysseyRuntimePaintEngine : ModuleRules
{
    public OdysseyRuntimePaintEngine(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "OdysseyBrush",
                "OdysseyCore",
                "OdysseyRuntimeImaging",
                "OdysseyRuntimeTools",
                "OdysseyShapes",
                "ULIS",
                "ULISLoader"
            }
        );
    }
}
