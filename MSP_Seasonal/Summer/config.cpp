class CfgPatches
{
    class MSP_Seasonal_Summer
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
    class MSP_Seasonal_Summer
    {
        dir="MSP_Seasonal_Summer";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Seasonal_Summer";
        credits = "";
        author = "helkhiana";
        authorID = "0";
        version = "0.1";
        extra = 0;
        type = "mod";     
        dependencies[] = {"Game", "World", "Mission"};        
        class defs
        {
			class gameScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Seasonal/Summer/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Seasonal/Summer/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Seasonal/Summer/scripts/5_Mission"};
			};
		};    
    };     
};