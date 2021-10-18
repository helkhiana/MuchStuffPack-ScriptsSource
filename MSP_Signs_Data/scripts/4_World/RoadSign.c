class Msp_RoadSign extends House
{
	RoadSignLight   m_Light;
	Particle    m_FireParticle;
	
	void Msp_RoadSign()
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			m_Light = RoadSignLight.Cast( ScriptedLightBase.CreateLight( RoadSignLight, "0 0 0" ) );
			m_Light.AttachOnMemoryPoint( this, "light" );
            
            vector selection_pos = ModelToWorld( GetMemoryPointPos( "light" ) );
            m_FireParticle = Particle.PlayOnObject(ParticleList.TORCH_T1, this, selection_pos, Vector(0,0,0), true);
            m_FireParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.15);
            m_FireParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.25);
            m_FireParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY_RND, 0.25);
		}
	}

	override void EEDelete(EntityAI parent)
	{
		if ( !GetGame().IsMultiplayer() || GetGame().IsClient() )
		{
			if (m_Light)
				m_Light.Destroy();            
            if (m_FireParticle)
			    m_FireParticle.Stop();
		}
	}
};

class Msp_RoadSign_FleaMarket : Msp_RoadSign {};

class RoadSignLight extends PointLightBase
{
	void RoadSignLight()
	{
		SetVisibleDuringDaylight(false);
		SetRadiusTo( 10 );
		SetBrightnessTo( 2.5 );
		SetCastShadow(false);
		SetFadeOutTime(1);
		SetDiffuseColor(1.0, 0.45, 0.25);
		SetAmbientColor(1.0, 0.45, 0.25);
		SetFlareVisible(false);
		SetFlickerAmplitude(0.3);
		SetFlickerSpeed(0.0001);
		SetDancingShadowsMovementSpeed(0.00001);
		SetDancingShadowsAmplitude(0.00001);
	}
};