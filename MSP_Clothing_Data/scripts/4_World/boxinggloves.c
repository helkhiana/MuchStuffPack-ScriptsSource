class Msp_M_BoxingGloves_ColorBase: ItemBase 
{
    override bool CanPutIntoHands(EntityAI parent)
	{
		return true;		
    }

	override void EEInit()
	{
		super.EEInit();
        HideUnhideSelection("all_f", 0);
        HideUnhideSelection("all_g", 1);
	}

    override void OnInventoryEnter(Man player)
    {
        super.OnInventoryEnter(player);   
        HideUnhideSelection("all_f", 1);
        HideUnhideSelection("all_g", 0);        
    }
    
    override void OnInventoryExit(Man player)
    {
        super.OnInventoryExit(player);
        HideUnhideSelection("all_f", 0);
        HideUnhideSelection("all_g", 1);
    }
    
    private void HideUnhideSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selectionNames);
        int selectionId = selectionNames.Find(selectionName);
        SetSimpleHiddenSelectionState(selectionId, hide);
    }

};

class Msp_M_BoxingGloves_Black : Msp_M_BoxingGloves_ColorBase{};
class Msp_M_BoxingGloves_Red : Msp_M_BoxingGloves_ColorBase{};
class Msp_M_BoxingGloves_Blue : Msp_M_BoxingGloves_ColorBase{};
class Msp_M_BoxingGloves_Gold : Msp_M_BoxingGloves_ColorBase{};