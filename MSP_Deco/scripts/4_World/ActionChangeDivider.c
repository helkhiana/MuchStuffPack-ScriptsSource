class ActionChangeDivider: ActionInteractBase
{
	void ActionChangeDivider()
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
		return "Change divider state";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object targetObject = target.GetObject();
		if ( targetObject && targetObject.IsInherited(Msp_RoomDivider) && player)
		{
			return true;
		}

		return false;
	}

	override void OnExecuteServer( ActionData action_data )
	{
		Object targetObject = action_data.m_Target.GetObject();
		PlayerBase player = PlayerBase.Cast(action_data.m_Player);
		Msp_RoomDivider divider = Msp_RoomDivider.Cast( targetObject );
		if(divider)
		{
			int dividerState = divider.GetDividerState();
			vector dividerPos = divider.GetPosition();
			vector dividerOrientation = divider.GetOrientation();
			string name = "Msp_RoomDivider";
			if(dividerState == 1)
				name = "Msp_RoomDivider_Flat";
				
			Msp_RoomDivider newDivider = Msp_RoomDivider.Cast(GetGame().CreateObject(name, dividerPos));
			newDivider.SetPosition(dividerPos);
			newDivider.SetOrientation(dividerOrientation);
			if(newDivider)
				divider.Delete();
		}
	}
};