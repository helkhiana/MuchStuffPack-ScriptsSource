class CfgPatches
{
	class MSP_Storage_chests
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
    class MSP_Storage_chests
    {
        dir = "MSP_Storage_chests";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Storage_chests";
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
                files[] = {"MuchStuffPack/MSP_Storage_chests/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_chests/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_chests/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
    class Msp_Storage_Base;
	class Msp_Openable_Placeable_Base;
	
	class Msp_MedievalChest : Msp_Storage_Base
	{
		scope=2;
		displayName="Medieval Chest";
		model="\MuchStuffPack\MSP_Storage_chests\medievalchest\medievalchest.p3d";		
		itemsCargoSize[]={10,30};
		itemSize[]={10,10};
		itemBehaviour=0;
		canBeDigged=1;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_chests\medievalchest\medievalchest_co.paa"
		};
	};

    class Msp_TreasureChest: Msp_Openable_Placeable_Base
	{
		scope=2;
		displayName="Treasure Chest";
		descriptionShort="Treasure Chest found in a dodgy place";
		model="\MuchStuffPack\MSP_Storage_chests\treasurechest\treasurechest.p3d";
		weight=1000;
		itemBehaviour=0;
		itemSize[]={10,10};
		itemsCargoSize[]={10,10};
		itemPlacingOri="90 0 0";
		hiddenSelections[]=
		{
			"metal",
			"wood"
		};
		hiddenSelectionsTextures[]=
		{
			"muchstuffpack\msp_storage_chests\treasurechest\treasurechest_metal_co.paa",
			"muchstuffpack\msp_storage_chests\treasurechest\treasurechest_wood_co.paa"
		};
	};
};