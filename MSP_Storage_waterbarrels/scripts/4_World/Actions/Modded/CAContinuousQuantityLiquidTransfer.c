/* modded class CAContinuousQuantityLiquidTransfer : CAContinuousBase
{	
	override void Setup( ActionData action_data )
	{		
		ItemBase target_item = ItemBase.Cast(action_data.m_Target.GetObject());
		if(target_item.IsKindOf("Msp_WaterBarrel_Stand"))
			target_item = ItemBase.Cast(target_item.FindAttachmentBySlotName("WaterBarrel1"));
		
		m_TimeElpased = 0;
		m_SpentQuantity = 0;
		
		if ( !m_SpentUnits )
		{
			m_SpentUnits = new Param1<float>( 0 );
		}
		else
		{
			m_SpentUnits.param1 = 0;
		}
		
		if ( m_TendencyDrain )
		{
			if ( target_item.GetQuantity() > (action_data.m_MainItem.GetQuantityMax() - action_data.m_MainItem.GetQuantity()) )
			{
				m_ItemMaxQuantity = action_data.m_MainItem.GetQuantityMax() - action_data.m_MainItem.GetQuantity();
				m_ItemQuantity = m_ItemMaxQuantity;
			}
			else //
			{
				m_ItemMaxQuantity = target_item.GetQuantity();
				m_ItemQuantity = m_ItemMaxQuantity;
			}
		}
		else
		{
			if ( action_data.m_MainItem.GetQuantity() > (target_item.GetQuantityMax() - target_item.GetQuantity()) )
			{
				m_ItemMaxQuantity = target_item.GetQuantityMax() - target_item.GetQuantity();
				m_ItemQuantity = m_ItemMaxQuantity;
			}
			else //
			{
				m_ItemMaxQuantity = action_data.m_MainItem.GetQuantity();
				m_ItemQuantity = m_ItemMaxQuantity;
			}
		}
	}
	
	
	override int Execute( ActionData action_data  )
	{
		ItemBase target_item = ItemBase.Cast(action_data.m_Target.GetObject());
		
		if(target_item.IsKindOf("Msp_WaterBarrel_Stand"))
			target_item = ItemBase.Cast(target_item.FindAttachmentBySlotName("WaterBarrel1"));

		if ( !action_data.m_Player )
		{
			return UA_ERROR;
		}
		
		if ( m_ItemQuantity <= 0 )
		{
			return UA_FINISHED;
		}
		else
		{
			if ( m_SpentQuantity_total < m_ItemQuantity )
			{
				m_AdjustedQuantityUsedPerSecond = action_data.m_Player.GetSoftSkillsManager().AddSpecialtyBonus( m_QuantityUsedPerSecond, m_Action.GetSpecialtyWeight(), true);
				m_SpentQuantity += m_AdjustedQuantityUsedPerSecond * action_data.m_Player.GetDeltaT();
				m_TimeElpased += action_data.m_Player.GetDeltaT();
				
				if ( m_TimeElpased >= m_DefaultTimeStep )
				{
					CalcAndSetQuantity( action_data );
					m_TimeElpased = 0;					
				}
				
				return UA_PROCESSING;
			}
			else
			{
				CalcAndSetQuantity( action_data );
				OnCompletePogress(action_data);
				return UA_FINISHED;
			}
		}
	}

	override void CalcAndSetQuantity( ActionData action_data )
	{
		ItemBase target_item = ItemBase.Cast(action_data.m_Target.GetObject());
		
		if(target_item.IsKindOf("Msp_WaterBarrel_Stand"))
			target_item = ItemBase.Cast(target_item.FindAttachmentBySlotName("WaterBarrel1"));

		m_SpentQuantity_total += m_SpentQuantity;
		
		if ( GetGame().IsServer() )
		{
			if ( m_SpentUnits )
			{
				m_SpentUnits.param1 = m_SpentQuantity;
				SetACData(m_SpentUnits);
			}
			
			if ( action_data.m_Player.GetLiquidTendencyDrain() )
			{
				Liquid.Transfer(target_item, action_data.m_MainItem, m_SpentQuantity);
			}
			else
			{
				Liquid.Transfer(action_data.m_MainItem, target_item, m_SpentQuantity);
			}			
		}
		m_SpentQuantity = 0;
	}
}; */