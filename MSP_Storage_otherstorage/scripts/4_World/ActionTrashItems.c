class ActionTrashItemsCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( MSP_UAConstants.MSP_TimeSpent_DEFAULT_DECONSTRUCT / 2 );
	}
};

class ActionTrashItems: ActionContinuousBase
{
	void ActionTrashItems()
	{
        m_CallbackClass = ActionTrashItemsCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_CRAFTING;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
        return "Throw away trash";
	}
    
    override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
        Msp_TrashCan myItem = Msp_TrashCan.Cast( targetObject );
        if (myItem && !myItem.IsInvEmpty())
            return true; 
		return false;
	}
		
	override void OnFinishProgressServer( ActionData action_data )
	{
		Msp_TrashCan myItem = Msp_TrashCan.Cast( action_data.m_Target.GetObject() );
		if (myItem)
		{			
			if ( myItem.GetInventory().GetCargo() != NULL )
			{
				int item_count = myItem.GetInventory().GetCargo().GetItemCount();	
				while(item_count > 0)
				{
					CargoBase cargo = myItem.GetInventory().GetCargo();
					ItemBase item = ItemBase.Cast(cargo.GetItem(0));	
					if(item){
						InventoryLocation myInvLoc = new InventoryLocation;
						if (item.GetInventory().GetCurrentInventoryLocation(myInvLoc))
						{
							GetGame().ObjectDelete(myInvLoc.GetItem());
						}
					}
					item_count = myItem.GetInventory().GetCargo().GetItemCount();
				}
			}
		}	
	}
};