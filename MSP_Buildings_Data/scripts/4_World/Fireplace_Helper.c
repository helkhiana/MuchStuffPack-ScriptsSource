class MSP_Fireplace_Helper 
{
    static const string FIREPOINT_ACTION_SELECTION	= "fireplace_action1";
	static const string FIREPOINT_FIRE_POSITION 	= "fireplace_point1";
	static const string FIREPOINT_PLACE_ROT 		= "fireplace_rot1";
	static const string OVENPOINT_ACTION_SELECTION	= "oven_action1";
    static ref array<typename> AllowedFireplaces = { Msp_BuildingWithFireplace, Msp_Fireplace_Openable, Msp_HND_Stove };

    static bool CanAddOvenIndoor( PlayerBase player, ActionTarget target)
    {
		string action_selection = target.GetObject().GetActionComponentName( target.GetComponentIndex() );
        if(action_selection.Contains(OVENPOINT_ACTION_SELECTION))
        {
            return CanAddMSPFireplace(player, target, action_selection);
        }
            
        return false;
    }

    static bool CanAddFireplaceIndoor(PlayerBase player, ActionTarget target)
	{
        string action_selection = target.GetObject().GetActionComponentName( target.GetComponentIndex() );
        if(action_selection.Contains(FIREPOINT_ACTION_SELECTION))
        {
		    return CanAddMSPFireplace(player, target, action_selection);
        }
            
        return false;
	}

    static bool CanAddMSPFireplace(PlayerBase player, ActionTarget target, string action_selection)
	{
		if (!target || !target.GetObject())
			return false;
        Object fireplace_building = target.GetObject();
		
        foreach(typename fireplaceName : AllowedFireplaces)
        {
            if(fireplace_building.IsInherited(fireplaceName))
            {		
                if (fireplace_building && (action_selection.Contains(FIREPOINT_ACTION_SELECTION) || action_selection.Contains(OVENPOINT_ACTION_SELECTION)))
                {			
                    vector fire_point_pos_world, fire_point_rot_world;
                    if (CanPlaceFireplaceInSelectedSpot(fireplace_building, fire_point_pos_world, fire_point_rot_world))
                    {
                        float rot_deg = 0.0;
                        if (fireplace_building.HasSelection(FIREPOINT_PLACE_ROT))
                        {					
                            rot_deg = AdjustRotDeg(rot_deg, fire_point_pos_world, fire_point_rot_world);
                        }
                        
                        float fire_point_dist = vector.Distance( fire_point_pos_world, player.GetPosition() );
                        if (fire_point_dist <= 2)
                        {
                            player.SetLastFirePoint( fire_point_pos_world );
                            player.SetLastFirePointIndex( 1 );
                            player.SetLastFirePointRot( rot_deg );
                            Msp_BuildingWithFireplace msp_building = Msp_BuildingWithFireplace.Cast( fireplace_building );
                            if(msp_building)
                            {
                                msp_building.pickable = false;
                            }
                            return true;
                        }
                    }
                }
                return false;            
            }
        }
		
		return false;
	}

    static float AdjustRotDeg(float rot_deg, vector fire_point_pos_world, vector fire_point_rot_world)
    {
        vector diff = fire_point_rot_world - fire_point_pos_world;
        diff[1] = 0.0;
        diff.Normalize();
        float dotp = vector.Dot( "0 0 1" , diff );
        rot_deg = Math.Acos( dotp ) * Math.RAD2DEG;
        if ( ( diff[0] < 0 ) && ( diff[2] < 0 ) )
            rot_deg = 360.0 - rot_deg;
        else if ( ( diff[0] < 0 ) && ( diff[2] > 0 ) )
            rot_deg = 360.0 - rot_deg;

		//Debug.DrawArrow( fire_point_pos_world, fire_point_pos_world + diff );
        return rot_deg;
    }

    static bool CanPlaceFireplaceInSelectedSpot( Object building, out vector fire_point_pos_world, out vector fire_point_rot_world )
	{
		//Get fire point index position
		vector fire_point_pos = building.GetSelectionPositionMS( FIREPOINT_FIRE_POSITION);
		vector fire_point_rot = building.GetSelectionPositionMS( FIREPOINT_PLACE_ROT);
		fire_point_pos_world = building.ModelToWorld( fire_point_pos );
		fire_point_rot_world = building.ModelToWorld( fire_point_rot );
		
		//check if there is any FireplaceIndoor objects near selected fire point
		ref array<Object> nearest_objects = new array<Object>;
		ref array<CargoBase> proxy_cargos = new array<CargoBase>;
		GetGame().GetObjectsAtPosition3D( fire_point_pos_world, 0.25, nearest_objects, proxy_cargos );

		for ( int i = 0; i < nearest_objects.Count(); ++i )
		{
			Object object = nearest_objects.Get( i );
			
			if (object.IsInherited(FireplaceIndoor) || object.IsInherited(OvenIndoor))
			{
				return false;
			}
		}
		
		return true;
	}
}