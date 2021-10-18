/* modded class ActionTransferLiquidCB : ActionContinuousBaseCB
{	
	override void OnAnimationEvent(int pEventID)	
	{
		super.OnAnimationEvent( pEventID );
		
		switch (pEventID)
		{
			case UA_ANIM_EVENT:			
				if ( !GetGame().IsMultiplayer() || GetGame().IsServer() )
				{
					Bottle_Base vessel_in_hands = Bottle_Base.Cast( m_ActionData.m_Target.GetObject() );
					Msp_WaterBarrel_Stand barrel_stand = Msp_WaterBarrel_Stand.Cast(m_ActionData.m_Target.GetObject());
					if(barrel_stand)						
						vessel_in_hands = Bottle_Base.Cast(barrel_stand.FindAttachmentBySlotName("WaterBarrel1"));
					
					Param1<bool> play = new Param1<bool>( true );
					GetGame().RPCSingleParam( vessel_in_hands, SoundTypeBottle.POURING, play, true );
				}

			break;
		}
	}
	
	override void EndActionComponent()
	{
		super.EndActionComponent();
				
		if ( !GetGame().IsMultiplayer() || GetGame().IsServer() )
		{
			Bottle_Base target_vessel = Bottle_Base.Cast( m_ActionData.m_Target.GetObject());
			Msp_WaterBarrel_Stand barrel_stand = Msp_WaterBarrel_Stand.Cast(m_ActionData.m_Target.GetObject());
			if(barrel_stand)						
				target_vessel = Bottle_Base.Cast(barrel_stand.FindAttachmentBySlotName("WaterBarrel1"));
			
			Param1<bool> play = new Param1<bool>( false );
			GetGame().RPCSingleParam( target_vessel, SoundTypeBottle.POURING, play, true );
		}
	}
};

modded class ActionTransferLiquid: ActionContinuousBase
{
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		ItemBase target_item = ItemBase.Cast(target.GetObject());
		
		if ( target_item && item )
		{			
			if(target_item.IsKindOf("Msp_WaterBarrel_Stand"))
			{			
				target_item = ItemBase.Cast(target_item.FindAttachmentBySlotName("WaterBarrel1"));
			}

			bool can_drain = Liquid.CanTransfer(target_item,item);
			bool can_pour = Liquid.CanTransfer(item,target_item);
			
			if (can_drain && can_pour)
			{
				return true;
			}
			else if (!can_pour && can_drain)
			{
				if ( (!GetGame().IsMultiplayer() || GetGame().IsClient()) && !player.GetLiquidTendencyDrain() )
				{
					player.SetLiquidTendencyDrain(true);
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (!can_drain && can_pour)
			{
				if ( (!GetGame().IsMultiplayer() || GetGame().IsClient()) && player.GetLiquidTendencyDrain() )
				{
					player.SetLiquidTendencyDrain(false);
					return false;
				}
				else
				{
					return true;
				}
			}
		}
		return false;
	}
}; */