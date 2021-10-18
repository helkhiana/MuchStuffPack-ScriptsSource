class ActionFillPlanter: ActionInteractBase
{
	void ActionFillPlanter()
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
		EntityAI target_entity = EntityAI.Cast( target.GetObject() );	
		
		if ( target_entity && target_entity.GetInventory().AttachmentCount() == 0 )	
		{
			return true;
		}
		
		return false;
	}

	override string GetText()
	{
		return "Fill With Dirt";
	}
	
	override void OnStartServer( ActionData action_data )
	{
		Msp_EmptyPlanter_Base emptyPlanter = Msp_EmptyPlanter_Base.Cast( action_data.m_Target.GetObject() );

		if ( emptyPlanter )
		{
			vector pos = emptyPlanter.GetPosition();
			vector ori = emptyPlanter.GetOrientation();
			Object myPlanter = GetGame().CreateObject(emptyPlanter.Get_FullPlanter(), pos, false );
			myPlanter.SetPosition( pos );
			myPlanter.SetOrientation( ori );
            emptyPlanter.Delete();
		}
	}
};