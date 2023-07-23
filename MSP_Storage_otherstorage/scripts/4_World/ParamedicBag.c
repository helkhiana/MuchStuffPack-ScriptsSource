class Msp_ParamedicBag_ColorBase : Msp_InventoryStorage_Base 
{
	void Msp_ParamedicBag_ColorBase()
	{
		m_AllowedMSPCargo = MSP_StorageRestrictions.MedicalCargoItems;
		m_MSPCargoTagName = "isMedicalItem";
	}

	override vector Get_ItemPlacingOrientation()
	{
		return "-90 0 0";
	}
	
    override bool CanReceiveAttachment(EntityAI attachment, int slotId)
	{		
		GameInventory attachmentInv = attachment.GetInventory();
		if (attachmentInv && attachmentInv.GetCargo() && attachmentInv.GetCargo().GetItemCount() > 0)
		{
			return false;
		}
		
		return super.CanReceiveAttachment(attachment, slotId);
	}

    override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);			
		if (item.GetInventory())
		{
            item.GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);		
		if (item.GetInventory())
		{
            item.GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		}
	}
};
class Msp_ParamedicBag_Red : Msp_ParamedicBag_ColorBase {};
class Msp_ParamedicBag_Green : Msp_ParamedicBag_ColorBase {};
class Msp_ParamedicBag_Blue : Msp_ParamedicBag_ColorBase {};
class Msp_ParamedicBag_NBC : Msp_ParamedicBag_ColorBase {};