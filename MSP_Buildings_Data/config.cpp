class CfgPatches
{
	class MSP_Buildings_Data
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
    class MSP_Buildings_Data
    {
        dir = "MSP_Buildings_Data";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Buildings_Data";
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
                files[] = {"MuchStuffPack/MSP_Buildings_Data/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Buildings_Data/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Buildings_Data/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
    class Msp_Storage_Base;
	class Msp_Kit;
	class Msp_Item;
	class HouseNoDestruct;
	class Msp_Openable_Base;

	class Msp_BuildingWithFireplace : Msp_Item {};
	class Msp_Fireplace_Openable : Msp_Openable_Base {};
	
	
	class Msp_StoneFireplace_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Stone Fireplace Kit";
	};
	class Msp_StoneFireplace: Msp_BuildingWithFireplace
	{
		scope=2;
		displayName="Stone Fireplace";
		model="\MuchStuffPack\MSP_Buildings_Data\fireplace\stonefireplace.p3d";
		hiddenSelections[]=
		{
			"arches",
			"ashes",
			"bottomsection",
			"fireracksection",
			"lowersection",
			"middlesection",
			"topsection"
		};
		hiddenSelectionsTextures[]=
		{
			"muchstuffpack\msp_buildings_data\fireplace\arches_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\ashes_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\bottomsection_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\firerack_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\lowersection_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\middlesection_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\topsection_co.paa"
		};
	};

	class Msp_FireplaceRailing : Msp_Storage_Base
	{
		scope=2;
		displayName="Fireplace Railing";
		descriptionShort="Place around a fireplace";
		model="\MuchStuffPack\MSP_Buildings_Data\gazebo\fireplacerailing.p3d";
		itemSize[]={4,4};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0,0,0,1.0,co)"
		};
	};
	
	class Msp_BoxingRing : HouseNoDestruct
	{
		scope=1;
		model = "\MuchStuffPack\MSP_Buildings_Data\boxinggym\boxingring.p3d";
		hiddenSelections[]=
		{
			"top_floor"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Buildings_Data\boxinggym\boxingring_floor_co.paa"
		};
	};
	
	class Msp_BoxingRing_Top : HouseNoDestruct
	{
		scope=1;
		model = "\MuchStuffPack\MSP_Buildings_Data\boxinggym\boxingring_top.p3d";
		hiddenSelections[]=
		{
			"top_floor"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Buildings_Data\boxinggym\boxingring_floor_co.paa"
		};
	};

	
	class Msp_Stove_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Stove Kit";
	};
	class Msp_Stove: Msp_Fireplace_Openable
	{
		scope=2;
		displayName="Stove";
		model="\MuchStuffPack\MSP_Buildings_Data\furnace\furnace.p3d";
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"muchstuffpack\msp_buildings_data\furnace\furnace_co.paa"
		};
	};

	class Msp_HND_StoneFireplace : HouseNoDestruct
	{		
		scope=1;
		displayName="Stone Fireplace";
		model="\MuchStuffPack\MSP_Buildings_Data\fireplace\stonefireplace.p3d";
		hiddenSelections[]=
		{
			"arches",
			"ashes",
			"bottomsection",
			"fireracksection",
			"lowersection",
			"middlesection",
			"topsection"
		};
		hiddenSelectionsTextures[]=
		{
			"muchstuffpack\msp_buildings_data\fireplace\arches_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\ashes_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\bottomsection_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\firerack_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\lowersection_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\middlesection_co.paa",
			"muchstuffpack\msp_buildings_data\fireplace\topsection_co.paa"
		};
	};
	class Msp_HND_Stove : HouseNoDestruct
	{		
		scope=1;
		displayName="Stove";
		model="\MuchStuffPack\MSP_Buildings_Data\furnace\furnace.p3d";
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"muchstuffpack\msp_buildings_data\furnace\furnace_co.paa"
		};
		
		class Doors
		{
			class Doors1
			{
				displayName="door 1";
				component="Doors1";
				soundPos="doors1_action";
				animPeriod=1;
				initPhase=0;
				initOpened=0.30000001;
				soundOpen="doorMetalSmallOpen";
				soundClose="doorMetalSmallClose";
				soundLocked="doorMetalSmallRattle";
				soundOpenABit="doorMetalSmallOpenABit";
			};
		};
	};
};