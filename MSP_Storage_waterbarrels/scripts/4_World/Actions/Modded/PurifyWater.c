modded class PurifyWater extends RecipeBase
{	
	override void Init()
	{
		InsertIngredient(1,"Msp_WaterBarrel_Stand");
		InsertIngredient(1,"Msp_WaterBarrel");
		super.Init();
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)
	{
		ItemBase ingredient2 = ingredients[1];
		ingredient2.RemoveAllAgents();
		if(ingredient2.IsKindOf("Msp_WaterBarrel_Stand"))
		{			
			ItemBase target_item = ItemBase.Cast(ingredient2.FindAttachmentBySlotName("WaterBarrel1"));
			target_item.RemoveAllAgents();
		}
	}
};
