
class Msp_CandleLight extends PointLightBase
{
    void Msp_CandleLight()
    {
        SetVisibleDuringDaylight(false);
        SetRadiusTo(3);
        SetBrightnessTo(2);
        SetCastShadow(false);
        SetFadeOutTime(5);
        SetDiffuseColor(1.0,0.5,0.2);
        SetAmbientColor(1.0,0.5,0.2);
        SetFlareVisible(false);
        SetFlickerAmplitude(0.3);
        SetFlickerSpeed(0.1);
        SetDancingShadowsMovementSpeed(0.1);
        SetDancingShadowsAmplitude(0.1);
    }
};


class Msp_Candle : ItemBase
{
	private SoundOnVehicle	m_LoopSoundEntity;
	bool					m_IsBeingDestructed = false;
	
	static float 			m_BurnTime;
	static int 				m_StartFadeOutOfLightAtQuantity = 3;	
	const int STATE_BURNING6		= 6;
	const int STATE_BURNING5 		= 5;
	const int STATE_BURNING4		= 4;
	const int STATE_BURNING3 	  	= 3;
	const int STATE_BURNING2 		= 2;
	const int STATE_BURNING1 	  	= 1;
	
	Msp_CandleLight				m_Light;
	
	void Msp_Candle()
	{
		if ( m_BurnTime == 0 )
		{
			m_BurnTime = 6000;
		}
	}
	
	override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
		
		if ( m_LoopSoundEntity != NULL && GetGame() != NULL )
		{
			GetGame().ObjectDelete( m_LoopSoundEntity );
		}		
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if( !super.CanPutInCargo(parent) ) {return false;}
		return CanBeTakenAsCargo();
	}
	
	override bool CanReleaseAttachment (EntityAI attachment)
	{
		if( !super.CanReleaseAttachment( attachment ) )
			return false;
		return !GetCompEM().IsWorking();
	}
	
	override bool CanRemoveFromCargo(EntityAI parent)
	{
		return CanBeTakenAsCargo();
	}
	
	bool CanBeTakenAsCargo()
	{
		return !GetCompEM().IsWorking();
	}
	
	override bool IsIgnited()
	{
		return GetCompEM().IsWorking();
	}
	
	override bool CanIgniteItem(EntityAI ignite_target = NULL)
	{
		return GetCompEM().IsWorking();
	}
	
	override bool HasFlammableMaterial()
	{
		return true;
	}
	
	override bool CanBeIgnitedBy(EntityAI igniter = NULL)
	{
		if ( !GetCompEM().CheckWetness() )
			return false;

		if ( !GetCompEM().CanWork() )
			return false;
		
		if ( GetCompEM().GetEnergy() >= 3 )
			return true;
		
		return false;
	}
	
	override void OnIgnitedThis(EntityAI fire_source)
	{		
		GetCompEM().SwitchOn();
	}
	
	override void OnSwitchOn()
	{
		if ( !GetCompEM().HasEnoughStoredEnergy() )
			GetCompEM().SwitchOff();
		;
	}
	// Inventory manipulation
	override void OnInventoryExit(Man player)
	{
		super.OnInventoryExit(player);
		
		StandUp();
	}
	
	// Stands up the torch, if possible. Returns true on success.
	bool StandUp()
	{
		string surface_type;
		vector position = GetPosition();
		GetGame().SurfaceGetType ( position[0], position[2], surface_type );
		bool is_surface_soft = GetGame().IsSurfaceDigable(surface_type);
		
		if ( is_surface_soft  &&  !IsRuined() )
		{
			vector ori_rotate = "0 0 0";
			ori_rotate[0] = Math.RandomFloat(0, 360);
			ori_rotate[1] = Math.RandomFloat(0, 10);
			SetOrientation(ori_rotate);
			
			return true; // I am standing up
		}
		
		return false; // I am NOT standing up
	}
	
	// Calculates torch's quantity, which represents the amount of fuel left
	void CalculateQuantity()
	{
		if (GetGame().IsServer())
		{
			float q_max = GetCompEM().GetEnergyMax() + m_BurnTime * 6;
			float q_min = GetCompEM().GetEnergy();		
			
			int quant = Math.Round(  (q_min / q_max) * 100  );
			
			float wetness = GetWet();
			float wetness_exposure = GetCompEM().GetWetnessExposure();
			
			if (wetness > 0  &&  wetness_exposure > 0)
			{
				quant = quant * ( 1- (wetness / wetness_exposure ) );
			}
			
			SetQuantity(quant);
		}
	}

	void UpdateLight()
	{
		if (!m_Light)
		{
			m_Light = Msp_CandleLight.Cast( ScriptedLightBase.CreateLight( Msp_CandleLight, Vector(0,0,0), 1 ) );
			m_Light.AttachOnMemoryPoint(this, "light");
		}
		
		float update_interval = GetCompEM().GetUpdateInterval();
		
		if (GetQuantity() <= m_StartFadeOutOfLightAtQuantity)
		{
			float brightness_coef = GetQuantity() / m_StartFadeOutOfLightAtQuantity;
			float radius_coef = GetQuantity() / m_StartFadeOutOfLightAtQuantity;
			
			if (radius_coef < m_StartFadeOutOfLightAtQuantity/10)
				radius_coef = m_StartFadeOutOfLightAtQuantity/10;
			
			if (brightness_coef < m_StartFadeOutOfLightAtQuantity/10)
				brightness_coef = m_StartFadeOutOfLightAtQuantity/10;
			
			m_Light.FadeBrightnessTo(2 * brightness_coef, update_interval);
			m_Light.FadeRadiusTo(3 * radius_coef, update_interval);
		}
		else
		{
			m_Light.FadeBrightnessTo(2, update_interval);
			m_Light.FadeRadiusTo(3, update_interval);
		}
	}
	
	override void OnWork ( float consumed_energy )
	{
		if ( GetGame().IsServer() )
		{
			CalculateQuantity();	
		}
		
		if ( !m_LoopSoundEntity && GetGame() && ( !GetGame().IsMultiplayer() || GetGame().IsClient() ) )
		{
			m_LoopSoundEntity = PlaySoundLoop("torchLoop", 50);
		}
		
		// Particle scaling by fuel
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			UpdateLight();			
		}
	}
	
	override void OnWorkStop()
	{
		if (m_Light)
			m_Light.FadeOut();
		
		if ( m_LoopSoundEntity && GetGame() && ( !GetGame().IsMultiplayer() || GetGame().IsClient() ) )
		{
			GetGame().ObjectDelete( m_LoopSoundEntity );
			m_LoopSoundEntity = NULL;
		}
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionLightItemOnFire);
	}
	
	override void OnAttachmentQuantityChanged(ItemBase item)
	{
		super.OnAttachmentQuantityChanged(item);
		CalculateQuantity();
	}
};