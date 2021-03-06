class Msp_WaterBarrel_Stand : Msp_Storage_Base 
{
    string m_DisplayName = "Water Barrel Stand";

    override void EEItemAttached( EntityAI item, string slot_name )
    {
        super.EEItemAttached( item, slot_name );

        if (Msp_WaterBarrel.Cast(item))
        {
            m_DisplayName = "Water Barrel";
        }
    }

    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);
                
        if (Msp_WaterBarrel.Cast(item))
        {            
            m_DisplayName = "Water Barrel Stand";
        }
    }

    override string GetDisplayName()
	{
		return m_DisplayName;
	}

    override vector Get_ItemPlacingOrientation()
	{
		return "90 0 0";
	}
    
    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionDrinkFromWaterBarrel);
    }
};

class Msp_WaterBarrel : Bottle_Base 
{   
    override bool IsOpen(){return true;}
    
    override bool CanDetachAttachment(EntityAI parent) {
        if (parent.FindAttachmentBySlotName("Valve"))
            return false;

        return super.CanDetachAttachment(parent);
    }      

    override void SetActions()
    {
        super.SetActions();
        RemoveAction(ActionDrink);
    }
};

class Msp_WaterBarrel_Valve : ItemBase 
{   
    override bool CanPutAsAttachment( EntityAI parent )
    {
        if (parent.FindAttachmentBySlotName("WaterBarrel1") != NULL)
            return parent.FindAttachmentBySlotName("WaterBarrel1").IsKindOf("Msp_WaterBarrel");
        return false;        
    }
};