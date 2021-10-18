class Msp_EmptyPlanterPot : Msp_EmptyPlanter_Base
{
	override string Get_FullPlanter() { return "Msp_PlanterPot"; }
};

class Msp_PlanterPot : Msp_Planter_Base
{
	override string Get_EmptyPlanter() { return "Msp_EmptyPlanterPot"; }

	override int GetGardenSlotsCount()
	{
		return 1;
	}

	override void RefreshSlots()
	{
		HideSelection("SeedBase_1");
	}
};