class CfgPatches
{
	class MSP_Halloween
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
    class MSP_Halloween
    {
        dir = "MSP_Halloween";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Halloween";
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
                files[] = {"MuchStuffPack/MSP_Halloween/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Halloween/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Halloween/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
 	class Clothing;
	class Pot;
	class Msp_Kit;
	class Msp_Openable_Placeable_Base;
	class Msp_Openable_Base;
	class Inventory_Base;
	class Msp_WitchHat: Clothing
	{
		scope=2;
		displayName="Witch Hat";
		descriptionShort="A carnival hat popular among the children of Chernarus. Most commonly worn during the end of harvest festivities.";
		model="\MuchStuffPack\MSP_Halloween\clothes\witchhat\witchhat_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		rotationFlags=32;
		weight=130;
		itemSize[]={2,3};
		absorbency=0;
		heatIsolation=0.13;
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Halloween\clothes\witchhat\data\witchhat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Halloween\clothes\witchhat\data\witchhat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Halloween\clothes\witchhat\data\witchhat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Halloween\clothes\witchhat\data\witchhat_damage.rvmat"
							}
						},						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Halloween\clothes\witchhat\data\witchhat_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=1.0;
					};
					class Blood
					{
						damage=0.0;
					};
					class Shock
					{
						damage=0.0;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Halloween\clothes\witchhat\witchhat_f.p3d";
			female="\MuchStuffPack\MSP_Halloween\clothes\witchhat\witchhat_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
	class MSP_WitchCauldron: Pot
	{
		scope=2;
		displayName="Witch Cauldron";
		descriptionShort="A carnival pot popular among the children of Chernarus. Most commonly used during the end of harvest festivities.";
		model="MuchStuffPack\MSP_Halloween\storage\witchcauldron\witchcauldron.p3d";
		weight=640;
		itemSize[]={4,3};
		itemsCargoSize[]={5,4};
		inventorySlot[]=
		{
			"CookingEquipment",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC"
		};
		stackedRandom=0;
		canBeDigged=1;
		allowOwnedCargoManipulation=1;
		varLiquidTypeInit=512;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256)";
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		varQuantityInit=0;
		varQuantityMin=0;
		varQuantityMax=2000;
		varTemperatureMax=200;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Halloween\storage\witchcauldron\data\witchcauldron.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Halloween\storage\witchcauldron\data\witchcauldron.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Halloween\storage\witchcauldron\data\witchcauldron_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Halloween\storage\witchcauldron\data\witchcauldron_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Halloween\storage\witchcauldron\data\witchcauldron_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimationSources
		{
			class handleRotate
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpPotLight
				{
					soundSet="pickUpPotLight_SoundSet";
					id=796;
				};
				class pickUpPot
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="pot_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	
    class Msp_CoffinBox : Msp_Openable_Placeable_Base
	{
		scope=2;
		displayName="Coffin Box";
		descriptionShort="A coffin box popular among the children of Chernarus. Most commonly used during the end of harvest festivities.";
		model="\MuchStuffPack\MSP_Halloween\storage\coffinstorage\coffinstorage.p3d";
		itemsCargoSize[]={10,10};
		itemSize[]={10,4};
		itemBehaviour=0;
		physLayer="item_large";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Halloween\storage\coffinstorage\data\coffinstorage_co.paa"
		};
	};
	class Msp_MedievalGibbet_Kit: Msp_Kit
	{	
		scope=2;
		displayName="Medieval Gibbet Kit";
	};
    class Msp_MedievalGibbet: Msp_Openable_Base
	{
		scope=2;
		displayName="Medieval Gibbet";
		descriptionShort="Gibbet to keep prisoners in.";
		model="\MuchStuffPack\MSP_Halloween\gibbet\gibbet.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Halloween\gibbet\data\medieval_gibbet_co.paa"
		};
	};
	class Msp_MedievalGibbetWithMount_Kit: Msp_Kit
	{	
		scope=2;
		displayName="Medieval Gibbet With Mount Kit";
	};
    class Msp_MedievalGibbetWithMount: Msp_MedievalGibbet
	{
		scope=2;
		displayName="Medieval Gibbet With Mount";
		descriptionShort="Gibbet to keep prisoners in.";
		model="\MuchStuffPack\MSP_Halloween\gibbet\gibbetwithmount.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Halloween\gibbet\data\medieval_gibbet_co.paa"
		};
	};
	
	class Msp_Candle: Inventory_Base
	{
		scope=2;
		displayName="$STR_CfgVehicles_Chemlight_ColorBase0";
		descriptionShort="$STR_CfgVehicles_Chemlight_ColorBase1";
		model="\MuchStuffPack\MSP_Halloween\candle\candles_white_burned.p3d";
		overrideDrawArea="8.0";
		itemSize[]={1,2};
		weight=30;
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=100;
		varQuantityMin=0;
		varQuantityMax=100;
		varQuantityDestroyOnMin=0;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"flame",
			"candle"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Halloween\candle\candle_flame_ca.paa",
			"MuchStuffPack\MSP_Halloween\candle\candles_white_co.paa"
		};
		class EnergyManager
		{
			energyAtSpawn=10800;
			energyUsagePerSecond=1;
			updateInterval=50;
			convertEnergyToQuantity=1;
		};
		class AnimationSources
		{
			class Phase1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class Phase2
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
			class Phase3
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
			class Phase4
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
			class Phase5
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
			class Phase6
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
			class Flame1
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
			class Flame2
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
			class Flame3
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
			class Flame4
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
			class Flame5
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
		};
	};
};