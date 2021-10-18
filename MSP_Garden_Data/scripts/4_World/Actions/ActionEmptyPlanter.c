class ActionEmptyPlanter: ActionInteractBase
{
	void ActionEmptyPlanter()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Msp_Planter_Base target_entity = Msp_Planter_Base.Cast( target.GetObject() );	

		if ( target_entity && target_entity.GetInventory().AttachmentCount() == 0 )	
		{
			return true;
		}
		
		return false;
	}

	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}

	override string GetText()
	{
		return "Empty planter box";
	}
	
	override void OnStartServer( ActionData action_data )
	{
		Msp_Planter_Base fullPlanter = Msp_Planter_Base.Cast( action_data.m_Target.GetObject() );

		if ( fullPlanter )
		{
			vector pos = fullPlanter.GetPosition();
			vector ori = fullPlanter.GetOrientation();
			Object myPlanter = GetGame().CreateObject(fullPlanter.Get_EmptyPlanter(), pos, false );
			myPlanter.SetPosition( pos );
			myPlanter.SetOrientation( ori );
            fullPlanter.Delete();
		}
	}
};