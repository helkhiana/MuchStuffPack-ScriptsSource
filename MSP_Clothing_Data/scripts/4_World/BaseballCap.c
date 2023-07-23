class Msp_BaseballCap_Base : HeadGear_Base 
{    
    private bool m_IsReversed = false;

    void Msp_BaseballCap_Base()
    {
		RegisterNetSyncVariableBool("m_IsReversed");
        SetCapSelection();
    }

    void SetCapSelection()
    {
        if(m_IsReversed)
        {   
            ToggleSelection("hide_forward", 0);
            ToggleSelection("hide_backwards", 1);
        }
        else
        {   
            ToggleSelection("hide_forward", 1);
            ToggleSelection("hide_backwards", 0);  
        }
    }

    override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		SetCapSelection();
	}

    override void ToggleSelection(string selectionName, bool hide = false)
    {
        TStringArray selectionNames = new TStringArray;        
        ConfigGetTextArray("simpleHiddenSelections",selectionNames);
        int selectionId = selectionNames.Find(selectionName);
        SetSimpleHiddenSelectionState(selectionId, hide);
    }

    void RotateCap()
    {
        m_IsReversed = !m_IsReversed;
        SetSynchDirty();
    }
    
	override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );		
		ctx.Write( m_IsReversed );
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		
		if (!ctx.Read( m_IsReversed ) )
            m_IsReversed = false;

		SetCapSelection();
        SetSynchDirty();
		return true;
	}

	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionRotateCap);
	}
};