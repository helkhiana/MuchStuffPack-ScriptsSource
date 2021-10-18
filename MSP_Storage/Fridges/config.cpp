class CfgPatches
{
	class MSP_Storage_Fridges
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
    class MSP_Storage_fridges
    {
        dir = "MSP_Storage_fridges";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Storage_fridges";
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
                files[] = {"MuchStuffPack/MSP_Storage/Fridges/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage/Fridges/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage/Fridges/scripts/5_Mission"};
			};
		};
    };
};


class CfgVehicles
{
	class Msp_Kit;
	class Msp_Fridge_Base;	
	class Msp_MoskvaFridge_Blue_Kit: Msp_Kit
	{	
		scope=2;
		displayName="Blue Moskva Fridge Kit";
	};
	class Msp_MoskvaFridge_Blue: Msp_Fridge_Base
	{
		scope=2;
		displayName="Moskva Fridge";
		descriptionShort="Old russian moskva fridge. Holds only drinks and food.";
		model="\MuchStuffPack\MSP_Storage\Fridges\moskva\moskva.p3d";
		itemIsOpenable=1;
		hiddenSelections[]=
		{
			"body",
			"glass"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Fridges\moskva\moskva_blue_co.paa",
			"MuchStuffPack\MSP_Storage\Fridges\moskva\moskva_ca.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
	class Msp_MoskvaFridge_Cream_Kit: Msp_Kit
	{	
		scope=2;
		displayName="Cream Moskva Fridge Kit";
	};
	class Msp_MoskvaFridge_Cream: Msp_MoskvaFridge_Blue
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Fridges\moskva\moskva_cream_co.paa",
			"MuchStuffPack\MSP_Storage\Fridges\moskva\moskva_ca.paa"
		};
	};
	class Msp_MoskvaFridge_Red_Kit: Msp_Kit
	{	
		scope=2;
		displayName="Red Moskva Fridge Kit";
	};
	class Msp_MoskvaFridge_Red: Msp_MoskvaFridge_Blue
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Fridges\moskva\moskva_red_co.paa",
			"MuchStuffPack\MSP_Storage\Fridges\moskva\moskva_ca.paa"
		};
	};

	class Msp_SovietOkaFridge_Kit: Msp_Kit
	{	
		scope=2;
		displayName="Old Soviet Oka Fridge Kit";
	};
	class Msp_SovietOkaFridge: Msp_Fridge_Base
	{
		scope=2;
		displayName="Old Soviet Oka Fridge";
		descriptionShort="Old Soviet Oka Fridge. Holds only drinks and food.";
		model="\MuchStuffPack\MSP_Storage\Fridges\sovietoka\soviet_oka_fridge.p3d";
		itemIsOpenable=1;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Fridges\sovietoka\soviet_oka_fridge_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,12};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class Msp_SnowballFridge_Kit: Msp_Kit
	{	
		scope=2;
		displayName="Snowball Fridge Kit";
	};
	class Msp_SnowballFridge: Msp_Fridge_Base
	{
		scope=2;
		displayName="Snowball Fridge";
		descriptionShort="Snowball Fridge. Holds only drinks and food.";
		model="\MuchStuffPack\MSP_Storage\Fridges\snowball\snowball.p3d";
		itemIsOpenable=1;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Fridges\snowball\snowball_fridge_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,8};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
};