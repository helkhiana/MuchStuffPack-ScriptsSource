modded class ActionCreateIndoorFireplace: ActionSingleUseBase
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (!IsInReach(player, target, UAMaxDistances.DEFAULT))
			return false;
		if(MSP_Fireplace_Helper.CanAddFireplaceIndoor(player, target))
		{
			return true;
		}
		
		return super.ActionCondition(player, target, item);
	}	
}