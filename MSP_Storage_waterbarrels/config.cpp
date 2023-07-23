class CfgPatches
{
	class MSP_Storage_waterbarrels
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"MSP_Scripts"
		};
	};
};

class CfgMods
{
    class MSP_Storage_waterbarrels
    {
        dir = "MSP_Storage_waterbarrels";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Storage_waterbarrels";
        credits = "";
        author = "Helkhiana";
        authorID = "0"; 
        version = "1.0"; 
        extra = 0;
        type = "mod";        
        dependencies[] = {"Game", "World", "Mission"};        
        class defs
        {
			class gameScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_waterbarrels/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_waterbarrels/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_waterbarrels/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
    class Msp_Storage_Base;
	class Msp_WaterBarrel_Stand: Msp_Storage_Base
	{
		scope=2;
		displayName="Water Barrel Stand";
		descriptionShort="Attach a water barrel and a valve/faucet to be able to drink, pour or drain water.";        
		model="\MuchStuffPack\MSP_Storage_waterbarrels\waterbarrel\waterbarrel_stand.p3d";
		itemSize[]={5,3};				
		simpleHiddenSelections[]=
		{
			"valve"
		};
		attachments[]=
		{
			"WaterBarrel1"
		};
		class GUIInventoryAttachmentsProps
		{
			class WaterBarrel
			{
				name="WaterBarrel";
				description="";
				attachmentSlots[]=
				{
					"WaterBarrel1"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
		};
		itemBehaviour=2;
		weight=500;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\waterbarrel\waterbarrel_co.paa"
		};
	};

	class Msp_WaterBarrel_Stand_Darkwood: Msp_WaterBarrel_Stand
	{
		scope=2;
		model="\MuchStuffPack\MSP_Storage_waterbarrels\darkwood_waterbarrel\darkwood_waterbarrel_stand.p3d";
		displayName="Darkwood Water Barrel Stand";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\darkwood_waterbarrel\darkwood_waterbarrel_co.paa"
		};
	};
	
	class Msp_WaterBarrel: Msp_Storage_Base
	{
		scope=2;
		model="\MuchStuffPack\MSP_Storage_waterbarrels\waterbarrel\waterbarrel.p3d";
		displayName="Water Barrel";
		descriptionShort="A large water barrel which can store up to 60L of water. You cannot drink directly from it. Place it in a waterbarrel stand to drink from it.";		
		inventorySlot[]={"WaterBarrel1"};
		itemSize[]={10,10};
		itemBehaviour=2;
		weight=10000;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		quantityBar=1;
		canBeDigged=0;
		heavyItem=1;
		stackedUnit="ml";
		randomQuantity=2;
		varLiquidTypeInit=512;
		liquidContainerType="512";
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=60000;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\waterbarrel\waterbarrel_co.paa"
		};
	};

	class Msp_WaterBarrel_Plastic: Msp_WaterBarrel
	{
		scope=2;
		model="\MuchStuffPack\MSP_Storage_waterbarrels\plastic_waterbarrel\plastic_waterbarrel.p3d";
		displayName="Plastic Water Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\plastic_waterbarrel\plastic_waterbarrel_co.paa"
		};
	};

	class Msp_WaterBarrel_Plastic_Yellow: Msp_WaterBarrel_Plastic
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\plastic_waterbarrel\plastic_waterbarrel_yellow_co.paa"
		};
	};
	
	class Msp_WaterBarrel_Plastic_Green: Msp_WaterBarrel_Plastic
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\plastic_waterbarrel\plastic_waterbarrel_green_co.paa"
		};
	};
	class Msp_WaterBarrel_Plastic_Red: Msp_WaterBarrel_Plastic
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\plastic_waterbarrel\plastic_waterbarrel_red_co.paa"
		};
	};
	class Msp_WaterBarrel_Plastic_Black: Msp_WaterBarrel_Plastic
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\plastic_waterbarrel\plastic_waterbarrel_black_co.paa"
		};
	};
	class Msp_WaterBarrel_Plastic_White: Msp_WaterBarrel_Plastic
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\plastic_waterbarrel\plastic_waterbarrel_white_co.paa"
		};
	};

	class Msp_WaterBarrel_Darkwood: Msp_WaterBarrel
	{
		scope=2;
		model="\MuchStuffPack\MSP_Storage_waterbarrels\darkwood_waterbarrel\darkwood_waterbarrel.p3d";
		displayName="Darkwood Water Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\darkwood_waterbarrel\darkwood_waterbarrel_co.paa"
		};
	};

	class Msp_WaterBarrel_Valve: Msp_Storage_Base
	{
		scope=2;
		model="\MuchStuffPack\MSP_Storage_waterbarrels\waterbarrel\waterbarrel_valve.p3d";
		displayName="Water Barrel Valve";
		descriptionShort="To be removed. Don't spawn this anymore.";        	
		inventorySlot[]={"Valve"};
		itemSize[]={1,2};
		itemBehaviour=1;
		weight=100;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\waterbarrel\waterbarrel_co.paa"
		};
	};

	class Msp_WaterBarrel_Valve_Darkwood: Msp_WaterBarrel_Valve
	{
		scope=2;
		model="\MuchStuffPack\MSP_Storage_waterbarrels\darkwood_waterbarrel\darkwood_waterbarrel_valve.p3d";
		displayName="Darkwood Water Barrel Valve";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\darkwood_waterbarrel\darkwood_waterbarrel_co.paa"
		};
	};
	
	class Msp_WaterBarrel_Valve_Faucet: Msp_WaterBarrel_Valve
	{
		scope=2;
		model="\MuchStuffPack\MSP_Storage_waterbarrels\faucet\faucet.p3d";
		displayName="Water Barrel Faucet";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_waterbarrels\faucet\faucet_co.paa"
		};
	};
};