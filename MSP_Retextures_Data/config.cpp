class CfgPatches
{
	class MSP_Retextures_Data
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Gear_Containers"
		};
	};
};


class CfgMods
{
    class MSP_Retextures_Data
    {
        dir = "MSP_Retextures_Data";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Retextures_Data";
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
                files[] = {"MuchStuffPack/MSP_Retextures_Data/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Retextures_Data/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Retextures_Data/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
	class Inventory_Base;
	class SlacksPants_ColorBase;
	class HuntingJacket_ColorBase;
	class Barrel_ColorBase;

	class Msp_SantaPants: SlacksPants_ColorBase
	{
		scope=2;
		displayName="Santa Pants";
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\santaoutfit\santapants_co.paa",
			"MuchStuffPack\MSP_Retextures_Data\santaoutfit\santapants_co.paa",
			"MuchStuffPack\MSP_Retextures_Data\santaoutfit\santapants_co.paa"
		};
	};
	
	class Msp_SantaJacket: HuntingJacket_ColorBase
	{
		scope=2;
		displayName="Santa Jacket";
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\santaoutfit\santajacket_co.paa",
			"MuchStuffPack\MSP_Retextures_Data\santaoutfit\santajacket_co.paa",
			"MuchStuffPack\MSP_Retextures_Data\santaoutfit\santajacket_co.paa"
		};
	};

	class Msp_Static_Barrel_Donation: Barrel_ColorBase
	{
		scope=2;
		displayName="Donation Barrel";
		descriptionShort="Barrel to donate your unwanted items. Take what you need, donate what you don't. If you see these barrels multiplying, remove them from whatever you use to spawn them.";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_blue_donation_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0;
					};
				};
			};
		};
	};

	class Msp_Static_Barrel_Donation_Ammo: Msp_Static_Barrel_Donation
	{
		scope=2;
		displayName="Ammunition Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_donation_ammo_co.paa"
		};
	};

	class Msp_Static_Barrel_Donation_Guns: Msp_Static_Barrel_Donation
	{
		scope=2;
		displayName="Guns Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_donation_guns_co.paa"
		};
	};

	class Msp_Static_Barrel_Donation_Food: Msp_Static_Barrel_Donation
	{
		scope=2;
		displayName="Food Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_donation_food_co.paa"
		};
	};

	class Msp_Static_Barrel_Donation_Medical: Msp_Static_Barrel_Donation
	{
		scope=2;
		displayName="Medical Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_donation_medical_co.paa"
		};
	};	

	class Msp_Static_Barrel_Donation_BloodONegative: Msp_Static_Barrel_Donation
	{
		scope=2;
		displayName="O- Blood Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_donation_bloodOnegative_co.paa"
		};
	};


	class Msp_Barrel_Donation: Barrel_ColorBase
	{
		scope=2;
		displayName="Donation Barrel";
		descriptionShort="Barrel to donate your unwanted items. Take what you need, donate what you don't.";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_blue_donation_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,15};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class Msp_Barrel_Donation_Ammo: Msp_Barrel_Donation
	{
		scope=2;
		displayName="Ammunition Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_donation_ammo_co.paa"
		};
	};

	class Msp_Barrel_Donation_Guns: Msp_Barrel_Donation
	{
		scope=2;
		displayName="Guns Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_donation_guns_co.paa"
		};
	};

	class Msp_Barrel_Donation_Food: Msp_Barrel_Donation
	{
		scope=2;
		displayName="Food Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_donation_food_co.paa"
		};
	};	

	class Msp_Barrel_Donation_Medical: Msp_Barrel_Donation
	{
		scope=2;
		displayName="Medical Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_donation_medical_co.paa"
		};
	};	

	class Msp_Barrel_Donation_BloodONegative: Msp_Barrel_Donation
	{
		scope=2;
		displayName="O- Blood Donation Barrel";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Retextures_Data\retextures\barrel_donation_bloodOnegative_co.paa"
		};
	};
};