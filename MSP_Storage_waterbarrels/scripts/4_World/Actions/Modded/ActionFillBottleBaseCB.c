modded class ActionFillBottleBaseCB : ActionContinuousBaseCB
{	
	override void CreateActionComponent()
	{
		super.CreateActionComponent();
		Msp_WaterBarrel barrel = Msp_WaterBarrel.Cast(m_ActionData.m_MainItem);
		if(barrel)
			m_ActionData.m_ActionComponent = new CAContinuousFill(1000, m_liquid_type);
	}
};