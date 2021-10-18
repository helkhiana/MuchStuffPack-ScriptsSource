class CfgPatches
{
	class InventoryFixSolo
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
            "DZ_Scripts"
		};
	};
};

class CfgMods
{
    class InventoryFixSolo
    {
        dir = "InventoryFixSolo";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "InventoryFixSolo";
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
                files[] = {"MuchStuffPack/InventoryFixSolo/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/InventoryFixSolo/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/InventoryFixSolo/scripts/5_Mission"};
			};
		};
    };
};
