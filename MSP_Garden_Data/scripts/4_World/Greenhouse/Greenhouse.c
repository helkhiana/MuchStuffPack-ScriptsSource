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

class Msp_Greenhouse_White_Kit : Msp_Kit 
{
    override string Get_ItemName()
	{
		return "Msp_Greenhouse_White";
	}
};

class Msp_Greenhouse_White : Msp_Greenhouse_Base
{
	override int GetGardenSlotsCount()
	{
		return 12;
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
		HideSelection("SeedBase_10");
		HideSelection("SeedBase_11");
		HideSelection("SeedBase_12");
		HideSelection("slotCovered_01");
		HideSelection("slotCovered_02");
		HideSelection("slotCovered_03");
		HideSelection("slotCovered_04");
		HideSelection("slotCovered_05");
		HideSelection("slotCovered_06");
		HideSelection("slotCovered_07");
		HideSelection("slotCovered_08");
		HideSelection("slotCovered_09");
		HideSelection("slotCovered_10");
		HideSelection("slotCovered_11");
		HideSelection("slotCovered_12");
	}
	
    override string Get_KitName()
	{
		return "Msp_Greenhouse_White_Kit";
	}
};

class Msp_Greenhouse_Vanilla_Kit : Msp_Kit 
{
    override string Get_ItemName()
	{
		return "Msp_Greenhouse_Vanilla";
	}
};

class Msp_Greenhouse_Vanilla : Msp_Greenhouse_White
{
    override string Get_KitName()
	{
		return "Msp_Greenhouse_Vanilla_Kit";
	}
};