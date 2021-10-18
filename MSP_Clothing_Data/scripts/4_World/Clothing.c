modded class Clothing
{
    void ToggleSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections", selectionNames);
        for (int i = 0; i < selectionNames.Count(); i++)
        {
            if (selectionNames[i] == selectionName)
                hide = true;
            else
                hide = false;            
            SetSimpleHiddenSelectionState(i, hide);
        }
    }
};