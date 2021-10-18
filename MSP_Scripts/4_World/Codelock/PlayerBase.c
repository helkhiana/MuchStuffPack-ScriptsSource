#ifdef CodeLock
modded class PlayerBase
{
    override void SetActions(out TInputActionMap InputActionMap)
    {
        super.SetActions(InputActionMap);
        AddAction(ActionRaidCodelockOnMSP, InputActionMap);
        
    }
};
#endif