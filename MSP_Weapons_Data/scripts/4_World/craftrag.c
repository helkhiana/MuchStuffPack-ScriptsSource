modded class CraftRag extends RecipeBase	
{
	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
		ItemBase result;
		Class.CastTo(result, results.Get(0));
		ItemBase ingredient2 = ingredients[1];	
		ItemBase ingredient1 = ingredients[0];	
		int quantity = ingredient2.ConfigGetFloat("ragQuantity");
		if(ingredient1.IsKindOf("Msp_Scissors"))
			quantity+=2;

		result.SetQuantity(quantity);
	}
};
