modded class PlayerBase extends ManBase
{	
	override void EEItemAttached(EntityAI item, string slot_name)
	{
		super.EEItemAttached(item, slot_name);

		ChangeWaistPackStrap(true, slot_name, item);
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{
		super.EEItemDetached(item, slot_name);

		ChangeWaistPackStrap(false, slot_name, item);
	}

    void ChangeWaistPackStrap(bool attach = false, string slot_name = "", EntityAI item = NULL)
    {
        if (slot_name != "Body" && slot_name != "Hips") return;

        Msp_WaistPack_Base belt;
        if (!Class.CastTo(belt, FindAttachmentBySlotName("Hips"))) return;

        Clothing top;
        if (!Class.CastTo(top, FindAttachmentBySlotName("Body")))
        {
            belt.ToggleSelection("w_small");
        }
        else if (top.GetType().Contains("MedicalScrubs") || top.GetType().Contains("TacticalShirt"))
        {
            belt.ToggleSelection("w_large");
        }
        else if (top.GetType().Contains("Shirt"))
        {
            belt.ToggleSelection("w_small");
        }
        else
        {
            belt.ToggleSelection("w_large");
        }
    }
};