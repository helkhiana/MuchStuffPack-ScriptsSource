class Msp_TrashCan : Msp_Openable_Placeable_Base 
{
	override vector Get_ItemPlacingOrientation()
	{
		return "90 0 0";
	}

	override void SetActions()
	{
		super.SetActions();
        AddAction(ActionTrashItems);
	}
};

class Msp_Static_TrashCan : Msp_TrashCan 
{
	
	override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    
    override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
    } 
};