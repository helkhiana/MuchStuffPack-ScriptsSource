class Msp_AmericanAppleCrate : Msp_Storage_Base {};
class Msp_AppleCrate : Msp_Storage_Base {};

class Msp_MilitaryCrate_Base : Msp_Openable_Placeable_Base 
{    
	void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("Doors1",0);
        }
        else
        {
            SetAnimationPhase("Doors1",1);
        }
    }
};