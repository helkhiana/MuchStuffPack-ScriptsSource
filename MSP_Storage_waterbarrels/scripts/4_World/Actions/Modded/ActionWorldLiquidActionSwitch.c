/* modded class ActionWorldLiquidActionSwitch: ActionSingleUseBase
{	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		ItemBase target_item = ItemBase.Cast(target.GetObject());
		if (Barrel_ColorBase.Cast(target_item) && !target_item.IsOpen())
			return false;

		if(target_item && target_item.IsKindOf("Msp_WaterBarrel_Stand"))		
			target_item = ItemBase.Cast(target_item.FindAttachmentBySlotName("WaterBarrel1"));
		
		if ( target_item && item && Liquid.CanFillContainer( item, target_item.GetLiquidType(),true ) && Liquid.CanFillContainer( target_item, item.GetLiquidType(), true ) && !GetGame().IsInventoryOpen() ) //TODO find better condition than IsKindOf
		{
			if ( target_item.GetQuantity() > target_item.GetQuantityMin() && item.GetQuantity() < item.GetQuantityMax() && !player.GetLiquidTendencyDrain() && Liquid.CanFillContainer( item, target_item.GetLiquidType() ) )
			{
				if ( Liquid.CanFillContainer( target_item, item.GetLiquidType() ) )
				{
					m_switch_to = 0;//"#liquid_drain";
					return true;
				}
				else
				{
					player.SetLiquidTendencyDrain(true);
					return false;
				}
			}
			if ( item.GetQuantity() > item.GetQuantityMin() && target_item.GetQuantity() < target_item.GetQuantityMax() && player.GetLiquidTendencyDrain() && Liquid.CanFillContainer( target_item, item.GetLiquidType() ) )
			{
				if ( Liquid.CanFillContainer( item, target_item.GetLiquidType() ) )
				{
					m_switch_to = 1;//"#liquid_pour";
					return true;
				}
				else
				{
					player.SetLiquidTendencyDrain(false);
					return false;
				}
			}
		}
		return false;
	}
}; */