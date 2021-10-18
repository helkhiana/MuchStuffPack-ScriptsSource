class Msp_AmmoStorage_Base : Msp_Storage_Base {
	
	ref array<string> m_AllowedCargo = {"Box_Base","Ammunition_Base"};
	override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		foreach( string allowedCargo : m_AllowedCargo )
		{
			if(item.IsKindOf(allowedCargo) && item.GetType().Contains("Ammo"))
				return true;
		}
		
		return false;
	}
	
	override bool CanSwapItemInCargo (EntityAI child_entity, EntityAI new_entity)
	{
		foreach( string allowedCargo : m_AllowedCargo )
		{		
			if(child_entity.IsKindOf(allowedCargo) && child_entity.GetType().Contains("Ammo") && new_entity.IsKindOf(allowedCargo) && new_entity.GetType().Contains("Ammo"))
				return true;
		}		
		return false;		
	}
};