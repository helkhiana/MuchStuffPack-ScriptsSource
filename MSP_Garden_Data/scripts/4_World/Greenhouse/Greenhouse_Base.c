class Msp_Greenhouse_Base : GardenBase
{
	protected bool m_IsOpened;
	protected bool m_IsOpenedLocal;
    
	string GetOpenSoundSet(){ return "MSP_doorWoodGreenhouseOpen_SoundSet"; }
	string GetCloseSoundSet(){ return "MSP_doorWoodGreenhouseClose_SoundSet"; }

	void Msp_Greenhouse_Base()
	{
		SetBaseFertility(0.5);
		RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		RegisterNetSyncVariableBool("m_IsOpened");
	}

    string Get_KitName()
	{
		return "Msp_Greenhouse_Kit";
	}

    override void EEInit()
	{
		super.EEInit();		
        if(IsOpen())
            GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		else
			GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);	
	}

	override void Open()
	{
		m_IsOpened = true;
		SoundSynchRemote();
		UpdateVisualState();
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
	}

	override void Close()
	{
		m_IsOpened = false;
		SoundSynchRemote();
		UpdateVisualState();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
	}

	bool IsOpen()
	{
		return m_IsOpened;
	}

	void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("Doors1",1);
        }
        else
        {
            SetAnimationPhase("Doors1",0);
        }
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

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();

		if ( m_IsOpened != m_IsOpenedLocal )
		{		
			if ( IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
			{
				SoundOpenPlay();
			}
			
			if ( !IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
			{
				SoundClosePlay();
			}	
			m_IsOpenedLocal = m_IsOpened;
		}
		
		UpdateVisualState();
	}
	
	override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );		
		ctx.Write( m_IsOpened );
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		
		if (!ctx.Read( m_IsOpened ) )
			return false;
		
		if ( m_IsOpened )
			Open();
		else
			Close();
		
		return true;
	}

    void SoundOpenPlay()
	{	
        vector selection_pos = ModelToWorld( GetMemoryPointPos( "Doors1" ) );
        EffectSound sound = SEffectManager.PlaySound( GetOpenSoundSet() , selection_pos );
		sound.SetSoundAutodestroy( true );
	}

	void SoundClosePlay()
	{		
        vector selection_pos = ModelToWorld( GetMemoryPointPos( "Doors1" ) );
        EffectSound sound = SEffectManager.PlaySound( GetCloseSoundSet() , selection_pos );
		sound.SetSoundAutodestroy( true );
	}

	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		return IsOpen();
	}
	
	override bool CanReleaseCargo(EntityAI attachment)
	{
		return IsOpen();
	}

	override bool CanDisplayAttachmentCategory( string category_name )
	{	
		if(category_name == "CodeLock")
		{			
			#ifdef CodeLock				
				return GetDayZGame().Get_MSP_Codelock_Config().CanAttach();
			#else
				return false;
			#endif
		}
		return super.CanDisplayAttachmentCategory(category_name);
	}

	//investigation needed
    #ifdef CodeLock
    override bool CanReceiveAttachment(EntityAI attachment, int slotId)
    {
        CodeLock c_Lock;
        if (Class.CastTo(c_Lock, attachment))
            return GetDayZGame().Get_MSP_Codelock_Config().CanAttach();

        return super.CanReceiveAttachment(attachment, slotId);
    }
    #endif

	override bool IsInventoryVisible()
	{
		return true;
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
        AddAction(ActionCustomCloseOpen);
		#ifdef CodeLock
        AddAction(ActionInteractLockOnMSP);
        AddAction(ActionManageLockOnMSP);
        AddAction(ActionLockAdminOnMSP);
        #endif
	}
};