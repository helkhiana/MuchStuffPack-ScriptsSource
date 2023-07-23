modded class ActionTarget
{
	void SetMSPTargetObject(Object object)
	{		
		m_Object = object;
	}
};
modded class CAContinuousQuantityLiquidTransfer : CAContinuousBase
{	
	override void Setup( ActionData action_data )
	{
		ItemBase target_item = ItemBase.Cast(action_data.m_Target.GetObject());
		if(target_item.FindAttachmentBySlotName("WaterBarrel1"))
		{
			target_item = ItemBase.Cast(target_item.FindAttachmentBySlotName("WaterBarrel1"));
			action_data.m_Target.SetMSPTargetObject(target_item);
			Print("MSP Setup target_item2 " + target_item);
		}
		super.Setup(action_data);
	}
}