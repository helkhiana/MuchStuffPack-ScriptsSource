class ActionDrinkFromWaterBarrelCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousQuantityDrink( 130, MSP_UAConstants.MSP_TimeSpent_DEFAULT);
	}
};

class ActionDrinkFromWaterBarrel: ActionContinuousBase
{
	void ActionDrinkFromWaterBarrel()
	{
		m_CallbackClass = ActionDrinkFromWaterBarrelCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DRINKWELL;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
	}

	override string GetText()
	{
		return "#drink";
	}
	
	override bool IsDrink()
	{
		return true;
	}
	
	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Msp_WaterBarrel_Stand targetObject = Msp_WaterBarrel_Stand.Cast( target.GetObject() );
		if(targetObject)
		{
			string selection = targetObject.GetActionComponentName(target.GetComponentIndex());
			if (selection && selection == "valve")
			{				
				ItemBase barrel = ItemBase.Cast(targetObject.FindAttachmentBySlotName("WaterBarrel1"));				
				ItemBase valve = ItemBase.Cast(targetObject.FindAttachmentBySlotName("Valve"));
				if(valve && barrel && barrel.GetQuantity() > 0)
					return true;
			}
		}
		
		return false;
	}

	override void OnStartClient(ActionData action_data)
	{
		action_data.m_Player.GetItemAccessor().HideItemInHands(true);
	}
	
	override void OnStartServer(ActionData action_data)
	{
		action_data.m_Player.GetItemAccessor().HideItemInHands(true);
	}

	override void OnEndClient(ActionData action_data)
	{
		action_data.m_Player.GetItemAccessor().HideItemInHands(false);
	}
	
	override void OnEndServer( ActionData action_data )
	{
		OnFinishProgressServer(action_data);
		action_data.m_Player.GetItemAccessor().HideItemInHands(false);
	}
};
