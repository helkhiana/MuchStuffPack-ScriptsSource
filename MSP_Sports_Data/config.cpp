class CfgPatches
{
	class MSP_Sports_Data
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
    class MSP_Sports_Data
    {
        dir = "MSP_Sports_Data";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Sports_Data";
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
                files[] = {"MuchStuffPack/MSP_Sports_Data/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Sports_Data/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Sports_Data/scripts/5_Mission"};
			};
		};
    };
};


class CfgVehicles
{
	class Inventory_Base;
    class Msp_Storage_Base;
	class HouseNoDestruct;

    class Msp_Trophy_ColorBase : Msp_Storage_Base
	{
		scope=0;
		displayName="Trophy";
		model="\MuchStuffPack\MSP_Sports_Data\random\trophy\trophy.p3d";
		itemSize[]={3,5};
		itemBehaviour=1;	
		hiddenSelections[]=
		{
			"plate",
			"top" 
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Sports_Data\random\trophy\gold_co.paa",			
			"MuchStuffPack\MSP_Sports_Data\random\trophy\gold_co.paa"
		};
	};

	class Msp_Trophy_Gold : Msp_Trophy_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Sports_Data\random\trophy\gold_co.paa",			
			"MuchStuffPack\MSP_Sports_Data\random\trophy\gold_co.paa"
		};
	};
	class Msp_Trophy_Bronze : Msp_Trophy_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Sports_Data\random\trophy\gold_co.paa",			
			"MuchStuffPack\MSP_Sports_Data\random\trophy\bronze_co.paa"
		};
	};
	class Msp_Trophy_Silver : Msp_Trophy_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Sports_Data\random\trophy\gold_co.paa",			
			"MuchStuffPack\MSP_Sports_Data\random\trophy\silver_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MuchStuffPack\MSP_Sports_Data\random\trophy\trophy_gold.rvmat",			
			"MuchStuffPack\MSP_Sports_Data\random\trophy\trophy_silver.rvmat"
		};
	};

};