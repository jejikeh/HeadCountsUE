using UnrealBuildTool;
public class HeadCountsTarget : TargetRules
{
    public HeadCountsTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange(new string[] { "HeadCountsCore" });
    }
}
