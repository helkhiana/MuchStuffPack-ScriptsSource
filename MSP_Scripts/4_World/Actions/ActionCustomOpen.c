class ActionCustomOpen: ActionInteractBase
{
	void ActionCustomOpen()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.OpenDoors;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "#open";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		if(!IsInReach(player, target, MSP_UAConstants.MSP_DISTANCE_DEFAULT)) return false;

		string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex());
		if(selection && selection == "lever")
			return false;	
		ItemBase building = ItemBase.Cast(target.GetObject());
		if(building)
		{
			if(building.IsKindOf("Msp_MedievalGibbet") && !building.IsFacingPlayer(player))
				return false;
			
			#ifdef CodeLock
				if(building.IsCodeLocked())
					return false;
			#endif
			
			return !building.IsOpen();
		}
		return false;
	}
	
	override void OnStartServer( ActionData action_data )
	{
		ItemBase building = ItemBase.Cast(action_data.m_Target.GetObject());
		if(building)
		{	
			building.Open();
			return;
		}
	}
};