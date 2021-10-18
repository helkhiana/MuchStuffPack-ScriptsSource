modded class ActionPlaceFireplaceIndoor : ActionSingleUseBase
{
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if (!target || !target.GetObject())
			return false;
		if (!IsInReach(player, target, MSP_UAConstants.MSP_DISTANCE_DEFAULT))
			return false;

		Msp_BuildingWithFireplace buildingwithfireplace = Msp_BuildingWithFireplace.Cast(target.GetObject());

		if (buildingwithfireplace)
		{
			string actionSelection = buildingwithfireplace.GetActionComponentName(target.GetComponentIndex());
			if(actionSelection.Contains(FireplaceIndoor.FIREPOINT_ACTION_SELECTION))
			{
				vector fire_pos_world, fire_rot_world;
				int fire_point_index = FireplaceIndoor.GetFirePointIndex(actionSelection);
				if (FireplaceIndoor.CanPlaceFireplaceInSelectedSpot(buildingwithfireplace, fire_point_index, fire_pos_world, fire_rot_world))
				{
					if (vector.Distance(fire_pos_world, player.GetPosition()) <= 2)
					{
						player.SetLastFirePoint(fire_pos_world);
						player.SetLastFirePointIndex(fire_point_index);
						player.SetLastFirePointRot(0.0);
						buildingwithfireplace.pickable = false;
						return true;
					}
				}
			}
		}

		return super.ActionCondition(player, target, item);
	}
};