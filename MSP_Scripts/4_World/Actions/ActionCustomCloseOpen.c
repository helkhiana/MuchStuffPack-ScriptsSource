class ActionCustomCloseOpen: ActionInteractBase
{
	string m_Text = "#open";
	void ActionCustomCloseOpen()
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

		string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex());
		ItemBase building = ItemBase.Cast(target.GetObject());
		if(!selection.Contains("doors") || !building)
			return false;
		if(building.IsOpen())
		{
			m_Text = "#close";
			return true;
		}
		else
		{
			m_Text = "#open";			
			#ifdef CodeLock
			if(building.IsCodeLocked())
				return false;
			#endif
			return true;
		}
			
		return false;
	}

	override void OnStartServer( ActionData action_data )
	{
		ItemBase building = ItemBase.Cast(action_data.m_Target.GetObject());
		if(building)		
		{
			if(building.IsOpen())
				building.Close();
			else
				building.Open();
		}
	}
};