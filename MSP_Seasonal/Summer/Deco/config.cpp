class CfgPatches
{
    class MSP_Seasonal_Deco
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
	class Msp_BeachChair_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Beach Chair Kit";
	};
    class Msp_BeachChair: Msp_Item
	{
		scope=2;
		displayName="Beach Chair";
		descriptionShort="Beach decorative chair";
		model="\MuchStuffPack\MSP_Seasonal\Summer\Deco\beachchair\beachchair.p3d";
	};
	
	class Msp_BeachUmbrella: Inventory_Base
	{
		scope=2;	
		displayName="Beach Umbrella";
		descriptionShort="";
		model="\MuchStuffPack\MSP_Seasonal\Summer\Deco\parasol\parasol.p3d";
		weight=5000;
		itemSize[]={2,6};
		itemBehaviour=2;
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Deco\parasol\beach_parasol_hex_co.paa"
		};
	}; 

	class Msp_BeachUmbrella_Stripes: Msp_BeachUmbrella
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Deco\parasol\beach_parasol_stripes_co.paa"
		};
	}; 
	
	class Msp_KiddiePool_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Kiddie Pool Blue Kit";
	};
	class Msp_KiddiePool : Msp_Item
	{
		scope=2;
		displayName="Kiddie Pool";
		model = "\MuchStuffPack\MSP_Seasonal\Summer\Deco\pool\kiddiepool.p3d";
		hiddenSelections[]=
		{
			"rim"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Deco\pool\kiddiepool_blue_co.paa"
		};
	};
	class Msp_KiddiePool_Pink_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Kiddie Pool Pink Kit";
	};
	class Msp_KiddiePool_Pink : Msp_KiddiePool
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Deco\pool\kiddiepool_pink_co.paa"
		};
	};
	class Msp_KiddiePool_Yellow_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Kiddie Pool Yellow Kit";
	};
	class Msp_KiddiePool_Yellow : Msp_KiddiePool
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Deco\pool\kiddiepool_yellow_co.paa"
		};
	};
	class Msp_VolleyballNet_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="VolleyBall Net Kit";
	};
	class Msp_VolleyballNet : Msp_Item
	{
		scope=2;
		displayName="VolleyBall Net";
		model = "\MuchStuffPack\MSP_Seasonal\Summer\Deco\volleyballnet\volleyballnet.p3d";
		hiddenSelections[]=
		{
			"main",
			"net",
			"side"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Deco\volleyballnet\volleyset_main_co.paa",			
			"MuchStuffPack\MSP_Seasonal\Summer\Deco\volleyballnet\volleyset_net_ca.paa",			
			"MuchStuffPack\MSP_Seasonal\Summer\Deco\volleyballnet\volleyset_netside_co.paa"
		};
	};
};