class CfgPatches
{
	class MSP_BaseBuilding
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"MSP_Scripts",
            "MSP_Buildings_Data"
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
	class Msp_BuildingWithFireplace;
    class Msp_Kit;

	class Msp_HND_Gazebo : HouseNoDestruct
	{
		scope=1;
		model = "\MuchStuffPack\MSP_BaseBuilding\gazebo\gazebo_new.p3d";
	};

    class Msp_Gazebo_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Gazebo Kit";
	};
	class Msp_Gazebo: Msp_BuildingWithFireplace
	{
		scope=2;
		displayName="Gazebo";
		model="\MuchStuffPack\MSP_BaseBuilding\gazebo\gazebo_new.p3d";        
		alignHologramToTerain=0;
		hiddenSelections[]=
		{
		};		
	};
};