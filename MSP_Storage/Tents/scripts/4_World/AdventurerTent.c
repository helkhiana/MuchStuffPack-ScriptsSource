class WG_AdventurerTent : Msp_Item
{
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionPackWithHands);
    }
};