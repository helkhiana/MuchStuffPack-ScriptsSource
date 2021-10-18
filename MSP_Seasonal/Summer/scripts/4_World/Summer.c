class Msp_Floaties : Clothing 
{
    override void SetActions()
	{
		super.SetActions();
		AddAction(ActionTogglePlaceObject);
		AddAction(ActionPlaceObject);
	}
};
class Msp_KiddiePool : Msp_Item 
{
	protected Object			m_ClutterCutter;	
	void ~Msp_KiddiePool()
	{
		if ( GetGame() )
		{
			DestroyClutterCutter();
		}
	}
	
	override void EEInit()
	{
		super.EEInit();
		UpdateClutter();
	}

	void DestroyClutterCutter()
	{
		if ( GetGame().IsMultiplayer() || GetGame().IsServer() )
		{
			if ( m_ClutterCutter )
			{
				GetGame().ObjectDelete( m_ClutterCutter );
			}
		}
	}

	void UpdateClutter()
	{		
		if ( GetGame().IsServer() && !m_ClutterCutter)
		{
			m_ClutterCutter = GetGame().CreateObjectEx( "LargeTentClutterCutter", GetPosition(), ECE_PLACE_ON_SURFACE );
			m_ClutterCutter.SetPosition( GetPosition());
			m_ClutterCutter.SetOrientation( GetOrientation());
		}
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		
		UpdateClutter();
		
		return true;
	}
};