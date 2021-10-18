class Msp_EmptySquarePlanterBox : Msp_EmptyPlanter_Base
{
	override string Get_FullPlanter() { return "Msp_SquarePlanterBox"; }
};

class Msp_SquarePlanterBox : Msp_Planter_Base
{
	override string Get_EmptyPlanter() { return "Msp_EmptySquarePlanterBox"; }

	override int GetGardenSlotsCount()
	{
		return 1;
	}

	override void RefreshSlots()
	{
		HideSelection("SeedBase_1");
	}
};