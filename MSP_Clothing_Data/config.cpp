class CfgPatches
{
	class MSP_Clothing_Data
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
    class MSP_Clothing_Data
    {
        dir = "MSP_Clothing_Data";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Clothing_Data";
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
                files[] = {"MuchStuffPack/MSP_Clothing_Data/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Clothing_Data/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Clothing_Data/scripts/5_Mission"};
			};
		};
    };
};


class CfgSlots
{
	class Slot_Flashlight
	{
		name="Flashlight";
		displayName="$STR_CfgVehicles_Flashlight0";
		selection="Flashlight";
		ghostIcon="set:dayz_inventory image:weaponflashlight";
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class Flashlight: Inventory_Base
	{
		inventorySlot[] += {"Flashlight","Flashlight1","Flashlight2","Flashlight3"};
	};

 	class Clothing;
	class Msp_BoxingShorts_ColorBase: Clothing
	{
		scope=0;
		displayName="Boxing Shorts";
		descriptionShort="Boxing Shorts";
		model="\MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\boxingshorts_g.p3d";
		inventorySlot[]=
		{
			"Legs"
		};
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={3,2};
		itemsCargoSize[]={5,4};
		weight=470;
		ragQuantity=3;
		absorbency=0;
		heatIsolation=1.0;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=1;
		hiddenSelections[]=
		{
			"all",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\data\boxingshorts_co.paa"
		};
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
								"MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\data\boxingshorts.rvmat"
							}
						},						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\data\boxingshorts.rvmat"
							}
						},						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\data\boxingshorts_damage.rvmat"
							}
						},						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\data\boxingshorts_damage.rvmat"
							}
						},						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\data\boxingshorts_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\boxingshorts_m.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\boxingshorts_f.p3d";
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

	class Msp_BoxingShorts_Red: Msp_BoxingShorts_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\data\boxingshorts_red_co.paa"
		};
	};
	class Msp_BoxingShorts_Blue: Msp_BoxingShorts_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\bottom\boxingshorts\data\boxingshorts_co.paa"
		};
	};	
	class Msp_BoxingGloves_ColorBase: Clothing
	{
		scope=0;
		displayName="Boxing Gloves";
		descriptionShort="Boxing Gloves";
		model="\MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_g.p3d";
		inventorySlot[]=
		{
			"Gloves"
		};
		simulation="clothing";
		rotationFlags=4;
		weight=130;
		itemSize[]={2,3};
		absorbency=0;
		heatIsolation=0.30000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_damage.rvmat"
							}
						},						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_f.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class Msp_BoxingGloves_Black: Msp_BoxingGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_co.paa"
		};
	};
	class Msp_BoxingGloves_Red: Msp_BoxingGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_red_co.paa"
		};
	};
	class Msp_BoxingGloves_Blue: Msp_BoxingGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_blue_co.paa"
		};
	};
	class Msp_BoxingGloves_Gold: Msp_BoxingGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_gold_co.paa"
		};
	};

	class Msp_M_BoxingGloves_ColorBase: Inventory_Base
	{
		scope=0;
		displayName="Boxing Gloves";
		descriptionShort="Boxing Gloves";
		model="\MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves.p3d";
		rotationFlags=4;
		inventorySlot[]=
		{
			""
		};
		weight=142;
		itemSize[]={2,3};
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		simpleHiddenSelections[]=
		{
			"all_f",
			"all_g"
		};
		hiddenSelections[]=
		{
			"all_f",
			"all_g"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_co.paa",
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_co.paa"
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBoxingGloves";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeBoxingGloves_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeBoxingGloves_Heavy";
				range=2.8;
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves.rvmat",
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves.rvmat",								
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_damage.rvmat",
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_damage.rvmat",
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_damage.rvmat"
							}
						},						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_destruct.rvmat",
								"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_destruct.rvmat"
							}
						}
					};
				};
			};
		};		
	};
	class Msp_M_BoxingGloves_Black: Msp_M_BoxingGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_co.paa",
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_co.paa"
		};
	};
	class Msp_M_BoxingGloves_Red: Msp_M_BoxingGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_red_co.paa",
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_red_co.paa"
		};
	};
	class Msp_M_BoxingGloves_Blue: Msp_M_BoxingGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_blue_co.paa",
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_blue_co.paa"
		};
	};
	class Msp_M_BoxingGloves_Gold: Msp_M_BoxingGloves_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_gold_co.paa",
			"MuchStuffPack\MSP_Clothing_Data\gloves\boxinggloves\boxinggloves_gold_co.paa"
		};
	};
	class Msp_BoxingHelmet_ColorBase: Clothing
	{
		scope=0;
		displayName="Boxing Helmet";
		descriptionShort="Boxing Helmet";
		model="\MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		headSelectionsToHide[]=
		{
			"Clipping_HelmetMich"
		};
		simulation="clothing";
		rotationFlags=4;
		weight=130;
		itemSize[]={2,3};
		absorbency=0;
		heatIsolation=0.13;
		noMask=1;
		noEyewear=1;
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm_co.paa"
		};
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
								"MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm_damage.rvmat"
							}
						},						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm_destruct.rvmat"
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
			male="\MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm_m.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class Msp_BoxingHelmet_Red: Msp_BoxingHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm_co.paa"
		};
	};
	class Msp_BoxingHelmet_Blue: Msp_BoxingHelmet_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\headgear\boxinghelm\boxinghelm_blue_co.paa"
		};
	};
	
	class Msp_BunnyEarsHeadband: Clothing
	{
		scope=2;
		displayName="Bunny Ears Headband";
		descriptionShort="Wear this to increase your cuteness";
		model="\MuchStuffPack\MSP_Clothing_Data\headgear\bunnyears_headband\bunnyears_headband_g.p3d";
		inventorySlot[]={"Headgear"};
		vehicleClass="Clothing";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		weight=450;
		itemSize[]={3,2};
		absorbency=0.94999999;
		heatIsolation=0.2;
		visibilityModifier=1;
		rotationFlags=16;
		noMask=0;
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\headgear\bunnyears_headband\bunnyears_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\headgear\bunnyears_headband\bunnyears.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\bunnyears_headband\bunnyears.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\bunnyears_headband\bunnyears.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\bunnyears_headband\bunnyears_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\bunnyears_headband\bunnyears_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\bunnyears_headband\bunnyears_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Clothing_Data\headgear\bunnyears_headband\bunnyears_headband_m.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\headgear\bunnyears_headband\bunnyears_headband_f.p3d";
		};
	};
	
	class Msp_MedicBag: Clothing
	{
		scope=0;
		displayName="Medic Bag";
		descriptionShort="Lightweight medic bag used for all day trips. Comfortably supports any load that fits in.";
		model="\MuchStuffPack\MSP_Clothing_Data\medicbag\medicbag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		rotationFlags=2;
		weight=1300;
		itemSize[]={5,3};
		itemsCargoSize[]={10,10};
		varWetMax=0.9;
		heatIsolation=0.7;
		repairableWithKits[]={2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=3;
		hiddenSelections[]=
		{
			"all"
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Clothing_Data\medicbag\medicbag_m.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\medicbag\medicbag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_red.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_red.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_red_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_red_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_red_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Msp_MedicBag_Red : Msp_MedicBag
	{
		scope=2;		
		displayName="Medic Bag - Red";
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_red_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_red.rvmat"
		};
	};
	class Msp_MedicBag_Green : Msp_MedicBag
	{
		scope=2;
		displayName="Medic Bag - Green";
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_green_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_green.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_green.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_green.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_green_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_green_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_green_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Msp_MedicBag_Blue : Msp_MedicBag
	{
		scope=2;		
		displayName="Medic Bag - Blue";
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_blue_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_red.rvmat"
		};
	};
	class Msp_MedicBag_Black : Msp_MedicBag
	{
		scope=2;		
		displayName="Medic Bag - Black";
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\medicbag\data\medicbag_red.rvmat"
		};
	};
	
	class Msp_ArmyBag_ColourBase: Clothing
	{
		scope=0;
		displayName="Army Bag";
		descriptionShort="";
		model="\MuchStuffPack\MSP_Clothing_Data\armybag\armybag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		rotationFlags=4;
		weight=1300;
		itemSize[]={4,5};
		itemsCargoSize[]={6,8};
		varWetMax=0.8;
		heatIsolation=0.8;
		repairableWithKits[]={2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=3;
		hiddenSelections[]=
		{
			"all"
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Clothing_Data\armybag\armybag_f.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\armybag\armybag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\armybag\armybag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\armybag\armybag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\armybag\armybag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\armybag\armybag_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\armybag\armybag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Msp_ArmyBag : Msp_ArmyBag_ColourBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\armybag\armybag_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\armybag\armybag.rvmat"
		};
	};

	class Msp_Slouchie_ColorBase: Clothing
	{
		displayName="Slouchie";
		descriptionShort="$STR_CfgVehicles_BeanieHat_ColorBase1";
		model="\MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		rotationFlags=16;
		weight=90;
		itemSize[]={2,2};
		varWetMax=1;
		heatIsolation=0.69999999;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_BeanieHat"
		};
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie_beige_co.paa"
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie_m.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=40;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie_destruct.rvmat"
							}
						}
					};
				};
			};
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
	class Msp_Slouchie_Beige: Msp_Slouchie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
	};
	class Msp_Slouchie_Black: Msp_Slouchie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie_black_co.paa"
		};
	};
	class Msp_Slouchie_Blue: Msp_Slouchie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie_blue_co.paa"
		};
	};
	class Msp_Slouchie_Red: Msp_Slouchie_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Clothing_Data\headgear\hipsterbeanie\hipsterbeanie_red_co.paa"
		};
	};

	class Msp_DuffleBag_ColorBase: Clothing
	{
		scope=0;
		displayName="Duffle Bag";
		descriptionShort="Lightweight duffle bag used for all day trips. Comfortably supports any load that fits in.";
		model="\MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\dufflebag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		rotationFlags=2;
		weight=1300;
		itemSize[]={5,3};
		itemsCargoSize[]={9,8};
		varWetMax=0.8;
		heatIsolation=0.8;
		repairableWithKits[]={2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=3;
		hiddenSelections[]=
		{
			"all"
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\dufflebag_m.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\dufflebag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\data\dufflebag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\data\dufflebag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\data\dufflebag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\data\dufflebag_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\data\dufflebag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Msp_DuffleBag_Green : Msp_DuffleBag_ColorBase
	{
		scope=2;
		displayName="Duffle Bag - Green";
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\data\dufflebag_co.paa"
		};
	};
	class Msp_DuffleBag_Black : Msp_DuffleBag_ColorBase
	{
		scope=2;
		displayName="Duffle Bag - Black";
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\data\dufflebag_black_co.paa"
		};
	};
	class Msp_DuffleBag_Blue : Msp_DuffleBag_ColorBase
	{
		scope=2;
		displayName="Duffle Bag - Blue";
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\data\dufflebag_blue_co.paa"
		};
	};
	class Msp_DuffleBag_Red : Msp_DuffleBag_ColorBase
	{
		scope=2;
		displayName="Duffle Bag - Red";
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\backpacks\dufflebag\data\dufflebag_red_co.paa"
		};
	};

	class Msp_WaistPack_Base: Clothing
	{
		scope=0;
		displayName="Tactical Waist Pack";
		descriptionShort="$STR_CfgVehicles_MilitaryBelt1";
		model="\MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_g.p3d";
		attachments[]=
		{
			"Belt_Back",
			"Belt_Right",
			"WalkieTalkie",
			"Flashlight"
		};
		simpleHiddenSelections[]=
        {
            "w_small",
			"w_large"
        };
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_tan_co.paa"
		};
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot[]=
		{
			"Hips"
		};
		itemSize[]={4,2};
		itemsCargoSize[]={7,5};
		weight=2000;
		varWetMax=0.6;
		heatIsolation=0.4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_m.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Msp_WaistPack_Tan : Msp_WaistPack_Base
	{
		scope=2;
	};
	class Msp_WaistPack_Black : Msp_WaistPack_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_black_co.paa"
		};
	};
	class Msp_WaistPack_Green : Msp_WaistPack_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_green_co.paa"
		};
	};
	class Msp_WaistPack_Brown : Msp_WaistPack_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_brown_co.paa"
		};
	};
	class Msp_WaistPack_UrbanFlektarn : Msp_WaistPack_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_urbanflektarn_co.paa"
		};
	};
	class Msp_WaistPack_Blue : Msp_WaistPack_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\belts\waistpack\waistpack_blue_co.paa"
		};
	};

	class Msp_BaseballCap_Base: Clothing
	{
		displayName="$STR_CfgVehicles_BaseballCap_ColorBase0";
		descriptionShort="$STR_CfgVehicles_BaseballCap_ColorBase1";
		model="\MuchStuffPack\MSP_Clothing_Data\headgear\baseballcap\baseballcap_g.p3d";
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		simpleHiddenSelections[]=
        {
			"hide_forward",
            "hide_backwards"
        };
		rotationFlags=16;
		weight=110;
		itemSize[]={3,2};
		varWetMax=1;
		heatIsolation=0.2;
		visibilityModifier=0.75;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_baseballcap"
		};
		hiddenSelections[]=
		{
			"all"
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Clothing_Data\headgear\baseballcap\baseballcap_m.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\headgear\baseballcap\baseballcap_f.p3d";
		};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=25;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"DZ\characters\headgear\data\BaseballCapII.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\BaseballCapII.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\characters\headgear\data\BaseballCapII_destruct.rvmat"
							}
						}
					};
				};
			};
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
	class Msp_BaseballCap_Beige: Msp_BaseballCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa"
		};
	};
	class Msp_BaseballCap_Black: Msp_BaseballCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_black_co.paa"
		};
	};
	class Msp_BaseballCap_Blue: Msp_BaseballCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa"
		};
	};
	class Msp_BaseballCap_Camo: Msp_BaseballCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa"
		};
	};
	class Msp_BaseballCap_Olive: Msp_BaseballCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa"
		};
	};
	class Msp_BaseballCap_Pink: Msp_BaseballCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa"
		};
	};
	class Msp_BaseballCap_Red: Msp_BaseballCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_red_co.paa"
		};
	};
	class Msp_BaseballCap_CMMG_Black: Msp_BaseballCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa"
		};
	};
	class Msp_BaseballCap_CMMG_Pink: Msp_BaseballCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa"
		};
	};

	class Msp_MountaineeringBag_ColorBase: Clothing
	{
		scope=0;
		displayName="Duffle Bag";
		descriptionShort="Lightweight duffle bag used for all day trips. Comfortably supports any load that fits in.";
		model="\MuchStuffPack\MSP_Clothing_Data\backpacks\MountaineeringBag\MountaineeringBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		rotationFlags=4;
		weight=1300;
		itemSize[]={5,3};
		itemsCargoSize[]={9,8};
		varWetMax=0.8;
		heatIsolation=0.8;
		repairableWithKits[]={2};
		repairCosts[]={30,25};
		soundAttType="Outdoor";
		randomQuantity=3;
		hiddenSelections[]=
		{
			"all"
		};
		class ClothingTypes
		{
			male="\MuchStuffPack\MSP_Clothing_Data\backpacks\MountaineeringBag\MountaineeringBag_m.p3d";
			female="\MuchStuffPack\MSP_Clothing_Data\backpacks\MountaineeringBag\MountaineeringBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\backpacks\MountaineeringBag\MountaineeringBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\backpacks\MountaineeringBag\MountaineeringBag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\backpacks\MountaineeringBag\MountaineeringBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\backpacks\MountaineeringBag\MountaineeringBag_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Clothing_Data\backpacks\MountaineeringBag\MountaineeringBag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Msp_MountaineeringBag_Green : Msp_MountaineeringBag_ColorBase
	{
		scope=2;
		displayName="Mountaineering Bag";
		hiddenSelectionsTextures[]=
		{
			"\MuchStuffPack\MSP_Clothing_Data\backpacks\MountaineeringBag\MountaineeringBag_co.paa"
		};
	};	
};

class CfgAmmo
{
	class MeleeFist;
	class MeleeFist_Heavy;
	class MeleeBoxingGloves: MeleeFist
	{
		class DamageApplied
		{
			type="Melee";
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
				damage=20;
			};
		};
	};
	class MeleeBoxingGloves_Heavy: MeleeFist_Heavy
	{
		hitAnimation=1;
		class DamageApplied
		{
			type="Melee";
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
				damage=30;
			};
		};
	};
};


class CfgNonAIVehicles
{
	class ProxyAttachment;
	class Proxyflashlight: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Flashlight"};
		model = "\DZ\gear\tools\flashlight.p3d";
	};
};