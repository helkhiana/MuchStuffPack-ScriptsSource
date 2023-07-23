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

    override bool IsMspInvEmpty()
	{   
		if (GetNumberOfItems() < 1)
		{
			return true;
		}
		return false;
	}
};

class Msp_TackleBox : Msp_InventoryStorage_Base 
{	
	void Msp_TackleBox()
	{
		m_AllowedMSPCargo = {"Hook",  "BoneHook","Worm", "Bait", "BoneBait", "zeroy_lure_base"};;
		m_MSPCargoTagName = "isTackleBoxCargo";
	}
};

class Msp_TackleBox_Black : Msp_TackleBox {};

class Msp_CoolerBox : Msp_InventoryStorage_Base 
{
	void Msp_CoolerBox()
	{
		m_AllowedMSPCargo = MSP_StorageRestrictions.FishCargoItems;
		m_MSPCargoTagName = "isCoolerBoxCargo";
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


class Msp_MedCase : Msp_Openable_Placeable_Base 
{
	void Msp_MedCase()
	{
		m_AllowedMSPCargo = MSP_StorageRestrictions.MedicalCargoItems;
		m_MSPCargoTagName = "isMedicalItem";
	}

	override vector Get_ItemPlacingPos()
	{
		return "0 0.2 0";
	}

	override vector Get_ItemPlacingOrientation()
	{
		return "-90 0 -90";
	}
	
	override void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("Doors1",0);
        }
        else
        {
            SetAnimationPhase("Doors1",1);
        }
    }
};