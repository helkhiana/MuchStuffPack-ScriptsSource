class Msp_Fridge_Base : Msp_Item 
{
	ref array<string> m_AllowedCargo = {"SodaCan_ColorBase", "Bottle_Base", "Edible_Base"};
	ref array<string> m_SpecialNotAllowedCargo = {"Weapon_Base"};

	//sound
	const string SOUND_HUMMING 		= "MSP_RefrigeratorHumming_SoundSet";
	const string SOUND_TURN_ON		= "spotlight_turn_on_SoundSet";
	const string SOUND_TURN_OFF		= "spotlight_turn_off_SoundSet";
	
	protected EffectSound m_SoundHummingLoop;
	protected EffectSound m_SoundTurnOn;
	protected EffectSound m_SoundTurnOff;
	protected bool m_IsOpened;
	protected bool m_IsOpenedLocal;
	private bool m_IsOpenable;

	void Msp_Fridge_Base()
	{
		RegisterNetSyncVariableBool("m_IsOpened");
		RegisterNetSyncVariableBool( "m_IsSoundSynchRemote" );	
		if(ConfigIsExisting("itemIsOpenable"))
			m_IsOpenable = ConfigGetBool("itemIsOpenable");
		else
			m_IsOpenable = false;
	}
	
	override void EEInit()
	{
		super.EEInit();		
        if(IsOpen() || !IsOpenable())
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

	override bool IsOpen()
	{
		return m_IsOpened;
	}

	bool IsOpenable()
	{
		return m_IsOpenable;
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( m_IsOpened != m_IsOpenedLocal )
		{		
			if ( IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
			{
				SoundFridgeOpenPlay();
			}
			
			if ( !IsOpen() && IsSoundSynchRemote() && !IsBeingPlaced() )
			{
				SoundFridgeClosePlay();
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
		if ( !m_IsOpenable )
			return true;

		if ( m_IsOpened )
			Open();
		else
			Close();
		
		return true;
	}

	void UpdateVisualState()
    {
        if ( IsOpen() )
        {
            SetAnimationPhase("Doors1",1);
            SetAnimationPhase("Doors2",1);
        }
        else
        {
            SetAnimationPhase("Doors1",0);
            SetAnimationPhase("Doors2",0);
        }
    }

	//--- POWER EVENTS
	override void OnSwitchOn()
	{
		super.OnSwitchOn();
		
		//sound (client only)
		SoundTurnOn();
	}

	override void OnSwitchOff()
	{
		super.OnSwitchOff();
		
		//sound (client only)
		SoundTurnOff();
	}
	
	override void OnWorkStart()
	{	
		//sound (client only)
		SoundHummingStart();
	}

	override void OnWorkStop()
	{		
		//sound (client only)
		SoundHummingStop();
	}

	override bool IsElectricAppliance()
	{
		return true;
	}
	
	//================================================================
	// SOUNDS
	//================================================================
	protected void SoundHummingStart()
	{
		PlaySoundSetLoop( m_SoundHummingLoop, SOUND_HUMMING, 0.1, 0.3 );
	}
	
	protected void SoundHummingStop()
	{
		StopSoundSet( m_SoundHummingLoop );
	}	

	protected void SoundTurnOn()
	{
		PlaySoundSet( m_SoundTurnOn, SOUND_TURN_ON, 0, 0);
	}
	
	protected void SoundTurnOff()
	{
		PlaySoundSet( m_SoundTurnOff, SOUND_TURN_OFF, 0, 0);
	}

	void SoundFridgeOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "MSP_RefrigeratorOpen_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	void SoundFridgeClosePlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "MSP_RefrigeratorClose_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}

	override bool CanReceiveItemIntoCargo (EntityAI item)
	{
		foreach( string notAllowedCargo : m_SpecialNotAllowedCargo )
		{		
			if(item.IsKindOf(notAllowedCargo))
				return false;
		}

		foreach( string allowedCargo : m_AllowedCargo )
		{		
			if(item.IsKindOf(allowedCargo))
				return true;
		}
		
		return false;
	}
	
	override bool CanSwapItemInCargo (EntityAI child_entity, EntityAI new_entity)
	{
		foreach( string notAllowedCargo : m_SpecialNotAllowedCargo )
		{		
			if(child_entity.IsKindOf(notAllowedCargo) || new_entity.IsKindOf(notAllowedCargo))
				return false;
		}
		foreach( string allowedCargo : m_AllowedCargo )
		{		
			if(child_entity.IsKindOf(allowedCargo) && new_entity.IsKindOf(allowedCargo))
				return true;
		}		
		return false;		
	}

	override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionOpenCloseFridge);
		AddAction(ActionUnplugThisByCord);
		AddAction(ActionTurnOnWhileOnGround);
		AddAction(ActionTurnOffWhileOnGround);
	}
};