modded class ItemBase extends InventoryItem
{
    override bool CanReceiveAttachment( EntityAI attachment, int slotId )
	{
		return true;
	}
	
	override bool CanLoadAttachment( EntityAI attachment )
	{				
		return true;
	}
};