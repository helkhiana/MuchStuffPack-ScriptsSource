class Msp_FireplaceRailing : Msp_BuildingWithFireplace 
{   
    void Msp_FireplaceRailing(){
        pickable = true;
    }
    override bool CanPutInCargo( EntityAI parent )
    {
        return pickable && IsMspInvEmpty();
    }
    
    override bool CanPutIntoHands(EntityAI parent)
	{
		return pickable && IsMspInvEmpty();		
    } 

    override bool IsDeployable() 
    {
        return true;
    }    
    
    override void OnInventoryEnter(Man player)
    {
        super.OnInventoryEnter(player);
        GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);        
    }
    
    override void OnInventoryExit(Man player)
    {
        super.OnInventoryExit(player);
        GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);        
    }

    override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionDeployObject);
	}
};