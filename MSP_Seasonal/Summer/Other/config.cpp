class CfgPatches
{
    class MSP_Seasonal_Other
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
    };
};

class CfgVehicles
{
	class Inventory_Base;	
	class Msp_Kit;
	class Msp_Item;
	class Msp_BeachBall: Inventory_Base
	{
		scope=2;	
		displayName="Beach Ball";
		descriptionShort="";
		model="\MuchStuffPack\MSP_Seasonal\Summer\Other\beachball\beachball.p3d";
		weight=500;
		itemSize[]={3,3};
		itemBehaviour=2;
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Other\beachball\beachball_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Seasonal\Summer\Other\beachball\beachball.rvmat"
							}
						},						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Seasonal\Summer\Other\beachball\beachball.rvmat"
							}
						},						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Seasonal\Summer\Other\beachball\beachball_damage.rvmat"
							}
						},						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Seasonal\Summer\Other\beachball\beachball_damage.rvmat"
							}
						},						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Seasonal\Summer\Other\beachball\beachball_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Msp_Volleyball: Inventory_Base
	{
		scope=2;	
		displayName="Volley Ball";
		descriptionShort="";
		model="\MuchStuffPack\MSP_Seasonal\Summer\Other\volleyball\volleyball.p3d";
		weight=500;
		itemSize[]={2,2};
		itemBehaviour=1;
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Other\volleyball\volleyball_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Seasonal\Summer\Other\volleyball\volleyball.rvmat"
							}
						},						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Seasonal\Summer\Other\volleyball\volleyball.rvmat"
							}
						},						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Seasonal\Summer\Other\volleyball\volleyball_damage.rvmat"
							}
						},						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Seasonal\Summer\Other\volleyball\volleyball_damage.rvmat"
							}
						},						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Seasonal\Summer\Other\volleyball\volleyball_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	}; 
};