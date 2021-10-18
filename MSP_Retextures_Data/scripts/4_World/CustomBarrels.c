
class Msp_Static_Barrel_Donation: Barrel_ColorBase {    
    override bool CanPutInCargo( EntityAI parent )
    {
        return false;
    }
    
     override bool CanPutIntoHands(EntityAI parent)
	{
		return false;
		
    }
};