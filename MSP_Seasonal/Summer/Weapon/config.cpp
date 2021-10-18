class CfgPatches
{
	class MSP_Summer_Weapon
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Pistols"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class MKII;
	class Msp_Water_Gun: MKII
	{
		scope=2;
		displayName="Water Pistol";
		descriptionShort="Water Pistol. Chambered in .357 rounds. Made by ZeRoY";
		model="MuchStuffPack\MSP_Seasonal\Summer\Weapon\watergun\water_gun.p3d";
		magazines[]={"MSP_Water_Gun_Mag"};
		chamberableFrom[]=
		{
			"Ammo_22"
		};
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"MuchStuffPack\MSP_Seasonal\Summer\Weapon\watergun\data\water_gun_co.paa"};
		hiddenSelectionsMaterials[] = {"MuchStuffPack\MSP_Seasonal\Summer\Weapon\watergun\data\water_gun.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"MuchStuffPack\MSP_Seasonal\Summer\Weapon\watergun\data\water_gun.rvmat"}},
						{0.7,{"MuchStuffPack\MSP_Seasonal\Summer\Weapon\watergun\data\water_gun.rvmat"}},
						{0.5,{"MuchStuffPack\MSP_Seasonal\Summer\Weapon\watergun\data\water_gun_damage.rvmat"}},
						{0.3,{"MuchStuffPack\MSP_Seasonal\Summer\Weapon\watergun\data\water_gun_damage.rvmat"}},
						{0.0, {"MuchStuffPack\MSP_Seasonal\Summer\Weapon\watergun\data\water_gun_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Mag_MKII_10Rnd;
	class Msp_Water_Gun_Mag: Mag_MKII_10Rnd
	{
		scope=2;
		displayName="Water Gun Magazine";
		descriptionShort="20 round Magazine for the Water Gun, loaded with .357 rounds.";
		model="MuchStuffPack\MSP_Seasonal\Summer\Weapon\watergun\water_gun_mag.p3d";
		weight=40;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_22";
		ammoItems[]=
		{
			"Ammo_22"
		};
	};
};
class CfgNonAIVehicles
{

	class ProxyAttachment;
	class Proxy_water_gun_mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model="MuchStuffPack\MSP_Seasonal\Summer\Weapon\watergun\water_gun_mag.p3d";
	};
};