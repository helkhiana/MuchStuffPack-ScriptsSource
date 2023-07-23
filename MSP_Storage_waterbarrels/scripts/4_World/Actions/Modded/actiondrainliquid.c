modded class ActionDrainLiquid: ActionContinuousBase
{	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		ItemBase target_item = ItemBase.Cast(target.GetObject());
		
		if ( target_item && item )
		{
			if(target_item.IsKindOf("Msp_WaterBarrel_Stand"))
			{	
				string selection = target_item.GetActionComponentName(target.GetComponentIndex());
				if (selection && selection == "valve")
				{		
					target_item = ItemBase.Cast(target_item.FindAttachmentBySlotName("WaterBarrel1"));
					if(target_item)
					{					
						return Liquid.CanTransfer(target_item,item);
					}
				}
			}			
		}
		return super.ActionCondition(player, target, item);
	}
};