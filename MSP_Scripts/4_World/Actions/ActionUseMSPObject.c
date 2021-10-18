class ActionUseMSPObject: ActionInteractBase
{
	string m_Text;
	EmoteCB					m_Callback;
	protected int 			m_LastMask;
	void ActionUseMSPObject()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.CloseDoors;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.BASEBUILDING );
	}
	
	override string GetText()
	{		
		return m_Text;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		Object targetObject = target.GetObject();
		if (targetObject)
		{
			Msp_Foldable_Item foldable_item = Msp_Foldable_Item.Cast( targetObject );
			string selection = target.GetObject().GetActionComponentName(target.GetComponentIndex());
			if (foldable_item.IsKindOf("Msp_SleepingBag_Base") && selection && selection == "sleep" && !foldable_item.IsFolded())
			{
				m_Text = "Sleep";
				return true;
			}
		}
		return false;
	}
	
	override void OnExecuteServer( ActionData action_data )
	{	
		PlayerBase player = PlayerBase.Cast(action_data.m_Player);
		if (player.GetEmoteManager() && !player.IsRestrained() && !player.IsUnconscious()) 
		{
			vector BedPosOffset = "0 0.6 0";
			vector BeddirOffset = "0 90 0";
			ItemBase targetItemBase = ItemBase.Cast( action_data.m_Target.GetObject());
			if (targetItemBase.IsKindOf("Msp_SleepingBag_Base") )
			{
				vector BedPosition = targetItemBase.GetPosition();
				vector BedDirection = targetItemBase.GetDirection();
				//DeveloperTeleport.SetPlayerPosition( action_data.m_Player, BedPosition);
				//DeveloperTeleport.SetPlayerDirection( action_data.m_Player, BedDirection + BeddirOffset);
				player.GetEmoteManager().CreateEmoteCBFromMenu(EmoteConstants.ID_EMOTE_SITA);
			}
		}
	}

	override void OnExecuteClient( ActionData action_data )
	{	
		PlayerBase player = PlayerBase.Cast(action_data.m_Player);
		if (player.GetEmoteManager() && !player.IsRestrained() && !player.IsUnconscious()) 
		{
			vector BedPosOffset = "0 0.6 0";
			vector BeddirOffset = "0 90 0";
			ItemBase targetItemBase = ItemBase.Cast( action_data.m_Target.GetObject());
			if (targetItemBase.IsKindOf("Msp_SleepingBag_Base") )
			{
				vector BedPosition = targetItemBase.GetPosition();
				vector BedDirection = targetItemBase.GetDirection();
				//DeveloperTeleport.SetPlayerPosition( action_data.m_Player, BedPosition);
				//DeveloperTeleport.SetPlayerDirection( action_data.m_Player, BedDirection + BeddirOffset);
				Print("trying to play emote: " + EmoteConstants.ID_EMOTE_SITA);
				player.GetEmoteManager().CreateEmoteCBFromMenu(EmoteConstants.ID_EMOTE_SITA);				
			}
		}
	}
}
