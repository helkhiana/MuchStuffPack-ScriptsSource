class WG_CampingTent : Msp_Openable_Base
{
    override void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("Doors1",1);            
            RemoveProxyPhysics("Doors1");
        }
        else
        {
            SetAnimationPhase("Doors1",0);
            AddProxyPhysics("Doors1");
        }
    }

    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionPackWithHands);
    }
};