class ActionRaiseLowerLever: ActionInteractBase
{
	private string m_LeverText;
	void ActionRaiseLowerLever()
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
		return m_LeverText;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		if(!IsInReach(player, target, MSP_UAConstants.MSP_DISTANCE_DEFAULT)) return false;
		
		Msp_Mailbox mailbox = Msp_Mailbox.Cast(target.GetObject());
		string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex());
		if(mailbox && selection && selection == "lever")
		{
			switch( mailbox.GetLeverState() )
			{
				case 0:
					m_LeverText = "Lower lever";
					break;
				case 1:
					m_LeverText = "Raise lever";
					break;
			}

			return true;		
		}
			
		return false;
	}

	override void OnStartServer( ActionData action_data )
	{		
		Msp_Mailbox mailbox = Msp_Mailbox.Cast(action_data.m_Target.GetObject());
		if(mailbox)
		{
			switch( mailbox.GetLeverState() )
			{
				case 0:
					mailbox.LowerLever();
					break;
				case 1:
					mailbox.RaiseLever();
					break;
			}
		}
	}
};