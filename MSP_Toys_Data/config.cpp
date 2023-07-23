class CfgPatches
{
	class MSP_Toys_Data
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
    class MSP_Toys_Data
    {
        dir = "MSP_Toys_Data";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Toys_Data";
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
                files[] = {"MuchStuffPack/MSP_Toys_Data/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Toys_Data/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Toys_Data/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
	class Bear_ColorBase;
	class Msp_Storage_Base;
	class Msp_Bunny: Bear_ColorBase
	{
		scope=2;	
		displayName="Bunny";
		descriptionShort="Cute but deadly";
		model="\MuchStuffPack\MSP_Toys_Data\bunny\bunny.p3d";
		hiddenSelections[]=
		{
			"all"
		};   
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Toys_Data\bunny\Bunny_co.paa"
		};
	};
	class Msp_PolarBear: Bear_ColorBase
	{
		scope=2;	
		displayName="Polar Bear Toy";
		descriptionShort="A cute polar bear toy to remind you of the adventures on Namalsk.";
		model="\MuchStuffPack\MSP_Toys_Data\polarbear\polarbear.p3d";
		hiddenSelections[]=
		{
			"all"
		};   
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Toys_Data\polarbear\polarbear_toy_co.paa"
		};
	};
	class Msp_Rabbit : Msp_Storage_Base
	{
		scope=2;
		displayName="Bunny";
		itemSize[]={3,4};
		itemBehaviour=2;
		model="\MuchStuffPack\MSP_Toys_Data\rabbit\rabbit.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Toys_Data\rabbit\rabbit_co.paa"
		};
	};

    class Msp_Egg_Base : Msp_Storage_Base
	{
		scope=0;
		displayName="Easter Egg";
		model="\MuchStuffPack\MSP_Toys_Data\eggs\easteregg.p3d";
		itemSize[]={1,2};
		itemBehaviour=1;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Toys_Data\eggs\egg_blue_co.paa"
		};
	};

    class Msp_Egg_Blue : Msp_Egg_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Toys_Data\eggs\egg_blue_co.paa"
		};
	};
    class Msp_Egg_Pink : Msp_Egg_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Toys_Data\eggs\egg_pink_co.paa"
		};
	};
    class Msp_Egg_Red : Msp_Egg_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Toys_Data\eggs\egg_red_co.paa"
		};
	};
    class Msp_Egg_Green : Msp_Egg_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Toys_Data\eggs\egg_green_co.paa"
		};
	};
    class Msp_Egg_Purple : Msp_Egg_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Toys_Data\eggs\egg_purple_co.paa"
		};
	};
    class Msp_Egg_Yellow : Msp_Egg_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Toys_Data\eggs\egg_yellow_co.paa"
		};
	};
   
};