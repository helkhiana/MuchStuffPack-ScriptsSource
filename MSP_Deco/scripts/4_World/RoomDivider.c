class Msp_RoomDivider_Kit : Msp_Kit 
{    
	override string Get_ItemName()
	{
		return "Msp_RoomDivider";
	}
};
class Msp_RoomDivider : Msp_Item 
{    
    int GetDividerState()
    {
        return 1;
    }

	override string Get_KitName()
	{
		return "Msp_RoomDivider_Kit";
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionChangeDivider);
	}
};
class Msp_RoomDivider_Flat : Msp_RoomDivider 
{    
	override int GetDividerState()
    {
        return 2;
    }
};