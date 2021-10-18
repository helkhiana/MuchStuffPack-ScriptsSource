class Msp_EmptyPlanterBox : Msp_EmptyPlanter_Base
{
	override string Get_FullPlanter() { return "Msp_PlanterBox"; }
};

class Msp_PlanterBox : Msp_Planter_Base
{
	override string Get_EmptyPlanter() { return "Msp_EmptyPlanterBox"; }

	override int GetGardenSlotsCount()
	{
		return 3;
	}

	override void RefreshSlots()
	{
		HideSelection("SeedBase_1");
		HideSelection("SeedBase_2");
		HideSelection("SeedBase_3");
	}
};