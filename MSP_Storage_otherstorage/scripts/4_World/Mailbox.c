class Msp_Mailbox : Msp_Openable_Placeable_Base {

    private int m_LeverState = 0;

    void Msp_Mailbox()
    {        
		RegisterNetSyncVariableInt("m_LeverState", 0, 61);
    }

	override vector Get_ItemPlacingPos()
	{
		return "0 0.5 0";
	}

	override vector Get_ItemPlacingOrientation()
	{
		return "180 -10 90";
	}

    void RaiseLever()
    {
        m_LeverState = 0;
        UpdateLeverState();
        Synchronize();
    }

    void LowerLever()
    {
        m_LeverState = 1;
        UpdateLeverState();     
        Synchronize();
    }

    void UpdateLeverState()
    {        
        SetAnimationPhase("Lever", m_LeverState);
    }

    int GetLeverState()
    {
        return m_LeverState;
    }

    void Synchronize() {
        if (!GetGame().IsServer() || !GetGame().IsMultiplayer()) { return; }

        SetSynchDirty();
    }

    override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );
        ctx.Write(m_LeverState);
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
        
        if (!ctx.Read(m_LeverState))
            m_LeverState = 0;
            
        Synchronize();
		
		return true;
	}

	override void SetActions()
	{
        AddAction(ActionRaiseLowerLever);
		super.SetActions();
	}
};