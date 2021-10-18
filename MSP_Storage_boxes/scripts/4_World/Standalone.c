class Msp_LargeAmmoBox : Msp_AmmoStorage_Base 
{   
    override vector Get_ItemPlacingPos()
	{
		return "0 0.15 0";
	}
};

class Msp_GrenadeBox : Msp_Openable_Placeable_Base 
{
    override vector Get_ItemPlacingOrientation()
	{
		return "-90 -90 0";
	}

    override vector Get_ItemPlacingPos()
	{
		return "0 0.08 0";
	}

    override bool IsInvEmpty()
	{   
		if (GetNumberOfItems() < 1)
		{
			return true;
		}
		return false;
	}
};

class Msp_TackleBox : Msp_Storage_Base {

	ref array<string> m_AllowedCargo = {"Hook","BoneHook","Worm","Bait","BoneBait", "zeroy_lure_base"};

	override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		foreach( string allowedCargo : m_AllowedCargo )
		{
			if(item.IsKindOf(allowedCargo))
				return true;
		}
		
		return false;
	}
	
	override bool CanSwapItemInCargo (EntityAI child_entity, EntityAI new_entity)
	{
		foreach( string allowedCargo : m_AllowedCargo )
		{		
			if(child_entity.IsKindOf(allowedCargo) && new_entity.IsKindOf(allowedCargo))
				return true;
		}		
		return false;		
	}
};

class Msp_TackleBox_Black : Msp_TackleBox {};

class Msp_CoolerBox : Msp_Storage_Base {

	ref array<string> m_AllowedCargo = {"Carp","Sardines","Mackerel","CarpFilletMeat","MackerelFilletMeat","zeroy_chub","zeroy_cod","zeroy_pike","zeroy_shell","CodFilletMeat","PikeFilletMeat"};

	override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		foreach( string allowedCargo : m_AllowedCargo )
		{
			if(item.IsKindOf(allowedCargo))
				return true;
		}
		
		return false;
	}
	
	override bool CanSwapItemInCargo (EntityAI child_entity, EntityAI new_entity)
	{
		foreach( string allowedCargo : m_AllowedCargo )
		{		
			if(child_entity.IsKindOf(allowedCargo) && new_entity.IsKindOf(allowedCargo))
				return true;
		}		
		return false;		
	}
};

class Msp_CoolerBox_Black : Msp_CoolerBox {};

class Msp_Basket_Rectangular : Msp_Openable_Placeable_Base 
{
	override void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("Lid0",0);
            SetAnimationPhase("Lid1",1);
        }
        else
        {
            SetAnimationPhase("Lid0",1);
            SetAnimationPhase("Lid1",0);
        }
    }
};
class Msp_Basket_Wicker : Msp_Openable_Placeable_Base 
{
	override void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("Doors1",1);
            SetAnimationPhase("Doors2",1);
        }
        else
        {
            SetAnimationPhase("Doors1",0);
            SetAnimationPhase("Doors2",0);
        }
    }
};