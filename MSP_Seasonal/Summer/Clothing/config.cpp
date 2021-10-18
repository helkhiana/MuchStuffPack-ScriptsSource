class CfgPatches
{
    class MSP_Seasonal_Clothing
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
	class Clothing;
	class Msp_Floaties: Clothing
	{
		scope=0;	
		displayName="Floatie";
		descriptionShort="Goes into your belt slot";
		physLayer="item_large";
		itemSize[]={5,3};
		itemBehaviour=2;
		weight=200;
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Hips"
		};
		hiddenSelections[]=
		{
			"all"
		};
	};
	class Msp_Floatie_Wheel: Msp_Floaties
	{
		scope=2;	
		displayName="Floatie Wheel";
		model = "\MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_wheel.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_wheel_co.paa"
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_wheel_f.p3d";
			female="\MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_wheel_f.p3d";
		};
	};
	class Msp_Floatie_Unicorn: Msp_Floaties
	{
		scope=2;	
		displayName="Floatie Unicorn";
		model = "\MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_unicorn.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_unicorn_co.paa"
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_unicorn_f.p3d";
			female="\MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_unicorn_f.p3d";
		};
	};	
	class Msp_Floatie_Unicorn_Rainbow : Msp_Floatie_Unicorn
	{
		scope=2;
		displayName="Floatie Unicorn Rainbow";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_unicorn_rainbow_co.paa"
		};
	};
	class Msp_Floatie_Unicorn_BlueRainbow : Msp_Floatie_Unicorn
	{
		scope=2;
		displayName="Floatie Unicorn Rainbow Blue";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_unicorn_bluerainbow_co.paa"
		};
	};
	class Msp_Floatie_Unicorn_GreenRainbow : Msp_Floatie_Unicorn
	{
		scope=2;
		displayName="Floatie Unicorn Rainbow Green";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_unicorn_greenrainbow_co.paa"
		};
	};
	class Msp_Floatie_Unicorn_PurpleRainbow : Msp_Floatie_Unicorn
	{
		scope=2;
		displayName="Floatie Unicorn Rainbow Purple";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_unicorn_purplerainbow_co.paa"
		};
	};
	class Msp_Floatie_Flamingo : Msp_Floaties
	{
		scope=2;
		displayName="Floatie Flamingo";
		model = "\MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_flamingo.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_flamingo_co.paa"
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_flamingo_f.p3d";
			female="\MuchStuffPack\MSP_Seasonal\Summer\Clothing\floatie\floatie_flamingo_f.p3d";
		};
	};
};