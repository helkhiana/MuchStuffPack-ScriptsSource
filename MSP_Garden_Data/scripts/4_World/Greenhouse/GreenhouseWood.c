class Msp_GreenhouseWood_Kit : Msp_Kit 	
{	
    override string Get_ItemName()	
	{	
		return "Msp_GreenhouseWood";	
	}	
};

class Msp_GreenhouseWood : Msp_Greenhouse_Base
{
	override int GetGardenSlotsCount()
	{
		return 8;
	}

	override void RefreshSlots()
	{
		HideSelection("SeedBase_1");
		HideSelection("SeedBase_2");
		HideSelection("SeedBase_3");
		HideSelection("SeedBase_4");
		HideSelection("SeedBase_5");
		HideSelection("SeedBase_6");
		HideSelection("SeedBase_7");
		HideSelection("SeedBase_8");
	}
	
    override string Get_KitName()
	{
		return "Msp_GreenhouseWood_Kit";
	}
};