class CfgPatches
{
	class MSP_BaseBuilding
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
    class MSP_BaseBuilding
    {
        dir = "MSP_BaseBuilding";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_BaseBuilding";
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
                files[] = {"MuchStuffPack/MSP_BaseBuilding/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_BaseBuilding/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_BaseBuilding/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
	class HouseNoDestruct;
	
	class Msp_GazeboNew : HouseNoDestruct
	{
		scope=1;
		model = "\MuchStuffPack\MSP_BaseBuilding\gazebo\gazebo3.p3d";
	};
};