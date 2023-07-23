class CfgPatches
{
	class MSP_Storage_crates
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
    class MSP_Storage_crates
    {
        dir = "MSP_Storage_crates";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Storage_crates";
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
                files[] = {"MuchStuffPack/MSP_Storage_crates/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_crates/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_crates/scripts/5_Mission"};
			};
		};
    };
};


class CfgVehicles
{
    class Msp_Storage_Base;
	class Msp_Openable_Placeable_Base;
	class Msp_AmmoStorage_Base;

    class Msp_AmericanAppleCrate : Msp_Storage_Base
	{
		scope=2;
		displayName="American Apple Crate";
		model="\MuchStuffPack\MSP_Storage_crates\applecrate1\applecrate1.p3d";
		itemsCargoSize[]={9,5};
		itemSize[]={9,5};
		itemBehaviour=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_crates\applecrate1\crate_co.paa"
		};
	};
	
    class Msp_AppleCrate : Msp_AmericanAppleCrate
	{
		scope=2;
		displayName="Apple Crate";
		model="\MuchStuffPack\MSP_Storage_crates\applecrate2\applecrate2.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_crates\applecrate2\applecrate2_co.paa"
		};
	};
	
    class Msp_PlasticCrate : Msp_AmericanAppleCrate
	{
		scope=2;
		displayName="Plastic Crate";
		model="\MuchStuffPack\MSP_Storage_crates\plasticcrate\plasticcrate.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_crates\plasticcrate\plasticcrate_co.paa"
		};
	};

	class Msp_AmmoCrate : Msp_AmmoStorage_Base
	{
		scope=2;
		displayName="Ammo Crate";
		descriptionShort="Ammo crate with 100 slots to store ammo boxes and loose ammo.";
		model="\MuchStuffPack\MSP_Storage_crates\ammocrate\ammocrate.p3d";		
		itemsCargoSize[]={10,10};
		itemSize[]={6,3};
		itemBehaviour=2;
		hasCargoRestrictions=1;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_crates\ammocrate\ammocrate_co.paa"
		};	
	};
	
	class Msp_MilitaryCrate_Base: Msp_Openable_Placeable_Base
	{
		scope=0;
		displayName="Military Crate";
		descriptionShort="Military Crate with 300 slots to store all your military goodies.";
		model="\MuchStuffPack\MSP_Storage_crates\militarycrate\militarycrate.p3d";
		itemSize[]={10,5};
		itemsCargoSize[]={10,30};
		rotationFlags=2;
		itemBehaviour=0;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_crates\militarycrate\data\militarycrate_brown_co.paa"
		};		
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=1;
				animPeriod=1;
			};
		};
	};
	class Msp_MilitaryCrate_Brown: Msp_MilitaryCrate_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_crates\militarycrate\data\militarycrate_brown_co.paa"
		};		
	};
	class Msp_MilitaryCrate_Green: Msp_MilitaryCrate_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_crates\militarycrate\data\militarycrate_green_co.paa"
		};		
	};
	class Msp_MilitaryCrate_Grey: Msp_MilitaryCrate_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_crates\militarycrate\data\militarycrate_grey_co.paa"
		};		
	};
	class Msp_MilitaryCrate_Olive: Msp_MilitaryCrate_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_crates\militarycrate\data\militarycrate_olive_co.paa"
		};		
	};
	class Msp_MilitaryCrate_Tan: Msp_MilitaryCrate_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_crates\militarycrate\data\militarycrate_tan_co.paa"
		};		
	};
};