class ActionOpenCloseGreenhouse: ActionInteractBase
{
	//made separate action as the greenhouse inherits from GardenBase and not MSP_ItemBase
	void ActionOpenCloseGreenhouse()
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

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		if(!IsInReach(player, target, MSP_UAConstants.MSP_DISTANCE_DEFAULT)) return false;

		string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex());
		Msp_Greenhouse_Base greenhouse = Msp_Greenhouse_Base.Cast(target.GetObject());
		if(!selection.Contains("doors") || !greenhouse)
			return false;
		if(greenhouse.IsOpen())
		{
			m_Text = "#close";
			return true;
		}
		else
		{
			m_Text = "#open";			
			#ifdef CodeLock
			if(greenhouse.IsCodeLocked())
				return false;
			#endif
			return true;
		}
			
		return false;
	}

	override void OnStartServer( ActionData action_data )
	{
		Msp_Greenhouse_Base greenhouse = Msp_Greenhouse_Base.Cast(action_data.m_Target.GetObject());
		if(greenhouse)		
		{
			if(greenhouse.IsOpen())
				greenhouse.Close();
			else
				greenhouse.Open();
		}
	}
};