class ActionRotateCap : ActionSingleUseBase
{
	void ActionRotateCap ()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
	}

	override void CreateConditionComponents ()
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return "Rotate Cap";
	}

	override bool HasTarget () { return false; }

	override bool ActionCondition ( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (item)
			return true;
		return false;
	}

	override bool ActionConditionContinue ( ActionData action_data ) { return true; }

	override void OnExecuteClient ( ActionData action_data )
	{
		ClearInventoryReservationEx(action_data);
	}

	override void OnExecuteServer ( ActionData action_data )
	{
		if ( !GetGame().IsMultiplayer() )
			ClearInventoryReservationEx(action_data);

		Msp_BaseballCap_Base cap = Msp_BaseballCap_Base.Cast(action_data.m_Player.GetItemInHands());
		cap.RotateCap();
		cap.SetCapSelection();
	}
};
