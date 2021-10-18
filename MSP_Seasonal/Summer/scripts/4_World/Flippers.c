class Msp_Flippers : Clothing
{
	override void OnWasAttached ( EntityAI parent, int slot_id )
	{
		super.OnWasAttached(parent, slot_id);
		EntityAI slot = GetInventory().FindPlaceholderForSlot( slot_id );
	}
};