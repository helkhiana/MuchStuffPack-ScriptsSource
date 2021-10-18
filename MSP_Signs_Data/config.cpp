class CfgPatches
{
	class MSP_StaticMapObjects
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


class CfgMods
{
    class MSP_Signs_Data
    {
        dir = "MSP_Signs_Data";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Signs_Data";
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
                files[] = {"MuchStuffPack/MSP_Signs_Data/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Signs_Data/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Signs_Data/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
	class HouseNoDestruct;

	class Msp_StandingSign_Metal : HouseNoDestruct
	{
		scope=1;
		model = "\MuchStuffPack\MSP_Signs_Data\standing_sign\standing_sign.p3d";		
		physLayer="item_small";
		hiddenSelections[]=
		{
			"tex"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Signs_Data\standing_sign\parksign_co.paa"
		};
	};
	
	class Msp_RoadSign : HouseNoDestruct
	{
		scope=1;
		model = "\MuchStuffPack\MSP_Signs_Data\roadsign\roadsign.p3d";		
		physLayer="item_small";
		hiddenSelections[]=
		{
			"sign_bot", 
			"sign_mid", 
			"sign_top", 
			"wood" 
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_co.paa",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_co.paa",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_co.paa",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_wood.rvmat",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_wood.rvmat",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_wood.rvmat",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_wood.rvmat"
		};
	};


	class Msp_RoadSign_FleaMarket : Msp_RoadSign
	{
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_fleamarket_co.paa",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_co.paa",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_fleamarket_co.paa",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_fleamarket_wood.rvmat",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_wood.rvmat",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_fleamarket_wood.rvmat",
			"MuchStuffPack\MSP_Signs_Data\roadsign\roadsign_wood.rvmat"
		};
	};
};