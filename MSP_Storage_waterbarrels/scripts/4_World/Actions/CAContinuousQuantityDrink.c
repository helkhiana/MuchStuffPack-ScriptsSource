class CAContinuousQuantityDrink : CAContinuousQuantityRepeat
{
	protected float 	m_InitItemQuantity;
	protected float 	m_SpentQuantityTotal;
	
	void CAContinuousQuantityDrink( float quantity_used_per_second, float time_to_repeat )
	{
		m_QuantityUsedPerSecond = quantity_used_per_second;
		m_DefaultTimeToRepeat = time_to_repeat;
		m_InitItemQuantity = -1;
		m_SpentQuantityTotal = 0;
	}
	
	override void Setup( ActionData action_data )
	{
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
		Msp_WaterBarrel_Stand barrel_stand = Msp_WaterBarrel_Stand.Cast(action_data.m_Target.GetObject());
		ItemBase barrel = ItemBase.Cast(barrel_stand.FindAttachmentBySlotName("WaterBarrel1"));
		m_ItemMaxQuantity = barrel.GetQuantityMax();
		m_ItemQuantity = barrel.GetQuantity();
		if (m_InitItemQuantity < 0)
		{
			m_InitItemQuantity = barrel.GetQuantity();
		}		
	}
	
	override void CalcAndSetQuantity( ActionData action_data )
	{	
		if ( m_SpentUnits )
		{
			m_SpentUnits.param1 = m_SpentQuantity;
			SetACData(m_SpentUnits);
			
			m_SpentQuantityTotal += m_SpentQuantity;
		}
		Msp_WaterBarrel_Stand barrel_stand = Msp_WaterBarrel_Stand.Cast(action_data.m_Target.GetObject());
		ItemBase barrel = ItemBase.Cast(barrel_stand.FindAttachmentBySlotName("WaterBarrel1"));

		PlayerBase ntarget = PlayerBase.Cast(action_data.m_Player);
		if ( ntarget && GetGame().IsServer())
			ntarget.Consume(barrel, m_SpentQuantity, EConsumeType.ITEM_CONTINUOUS);
	}	
	
	override float GetProgress()
	{
		if (m_SpentQuantity > 0)
		{
			return Math.Clamp((1 - (m_InitItemQuantity - m_SpentQuantity - m_SpentQuantityTotal ) / m_InitItemQuantity), 0, 1);
		}
		else
		{
			return Math.Clamp((1 - (m_InitItemQuantity - m_SpentQuantityTotal ) / m_InitItemQuantity), 0, 1);
		}
	}
};