class ActionOpenCloseFridge: ActionInteractBase
{
	private string m_Text = "#close";
	void ActionOpenCloseFridge()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.CloseDoors;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return m_Text;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		if(!IsInReach(player, target, MSP_UAConstants.MSP_DISTANCE_DEFAULT)) return false;			
		
		Msp_Fridge_Base fridge = Msp_Fridge_Base.Cast(target.GetObject());
		if(fridge && fridge.IsOpenable())
		{
			if(fridge.IsOpen())
				m_Text = "#close";
			else
				m_Text = "#open";
			return true;
		}
		return false;
	}

	override void OnStartServer( ActionData action_data )
	{
		ItemBase item = ItemBase.Cast(action_data.m_Target.GetObject());
		if(item.IsOpen())
			item.Close();
		else
			item.Open();
	}
};