class Msp_Planter_Base : GardenBase
{
	string Get_EmptyPlanter() { return ""; }

	void Msp_Planter_Base()
	{
		SetBaseFertility(0.5);
	}

	override bool IsInventoryVisible()
	{
		return true;
	}
    
	void RefreshSlots()
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

    override void OnPlacementStarted( Man player )
	{
		RefreshSlots();
	}
	
	override void OnHologramBeingPlaced( Man player )
	{
		RefreshSlots();
	}

	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionEmptyPlanter);
	}
};