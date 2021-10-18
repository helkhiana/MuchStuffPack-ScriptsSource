class Msp_Greenhouse_Kit : Msp_Kit 
{
    override string Get_ItemName()
	{
		return "Msp_Greenhouse";
	}
};

class Msp_Greenhouse : Msp_Greenhouse_Base
{
	override int GetGardenSlotsCount()
	{
		return 9;
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
		HideSelection("SeedBase_9");
	}
	
    override string Get_KitName()
	{
		return "Msp_Greenhouse_Kit";
	}
};