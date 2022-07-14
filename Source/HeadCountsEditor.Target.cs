using UnrealBuildTool;
public class HeadCountsEditorTarget : TargetRules
{
    public HeadCountsEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V2;
        ExtraModuleNames.AddRange(new string[] { "HeadCountsCore" });
    }
}
