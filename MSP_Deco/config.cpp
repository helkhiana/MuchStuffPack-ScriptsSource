class CfgPatches
{
	class MSP_Deco
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
    class MSP_Deco
    {
        dir = "MSP_Deco";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Deco";
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
                files[] = {"MuchStuffPack/MSP_Deco/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Deco/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Deco/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
	class Msp_Kit;
	class Msp_Item;
	class Msp_Foldable_Item;
	class Msp_Storage_Base;
	class Msp_Shelf_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Mesh Shelf Kit";
	};
    class Msp_Shelf: Msp_Item
	{
		scope=2;
		displayName="Mesh Shelf";
		descriptionShort="A shelving unit with minimal storing capacity but can hold other items on the shelves.";
		model="\MuchStuffPack\MSP_Deco\shelf\mesh_shelf.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\shelf\mesh_shelf_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

	class Msp_SleepingBag_Base : Msp_Foldable_Item
	{
		scope=0;
		model="\MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag.p3d";
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
								"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag.rvmat"
							}
						},						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag.rvmat"
							}
						},						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag_damage.rvmat"
							}
						},						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag_damage.rvmat"
							}
						},						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Msp_SleepingBag_Green: Msp_SleepingBag_Base
	{
		scope=2;
		displayName="Sleeping Bag - Green";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag_co.paa"
		};
	};
	class Msp_SleepingBag_Blue: Msp_SleepingBag_Base
	{
		scope=2;
		displayName="Sleeping Bag - Blue";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag_blue_co.paa"
		};
	};
	class Msp_SleepingBag_LimeGreen: Msp_SleepingBag_Base
	{
		scope=2;
		displayName="Sleeping Bag - Lime Green";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag_limegreen_co.paa"
		};
	};
	class Msp_SleepingBag_Orange: Msp_SleepingBag_Base
	{
		scope=2;
		displayName="Sleeping Bag - Orange";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag_orange_co.paa"
		};
	};
	class Msp_SleepingBag_Purple: Msp_SleepingBag_Base
	{
		scope=2;
		displayName="Sleeping Bag - Purple";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag_purple_co.paa"
		};
	};
	class Msp_SleepingBag_Red: Msp_SleepingBag_Base
	{
		scope=2;
		displayName="Sleeping Bag - Red";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\sleepingbag\sleepingbag_red_co.paa"
		};
	};
	class Msp_Mattress_Base: Msp_Foldable_Item
	{
		scope=0;
		model="\MuchStuffPack\MSP_Deco\mattress\mattress.p3d";
		rotationFlags=4;
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
								"MuchStuffPack\MSP_Deco\mattress\data\mattress.rvmat"
							}
						},						
						{
							0.69999999,							
							{
								"MuchStuffPack\MSP_Deco\mattress\data\mattress.rvmat"
							}
						},						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Deco\mattress\data\mattress_damage.rvmat"
							}
						},						
						{
							0.30000001,							
							{
								"MuchStuffPack\MSP_Deco\mattress\data\mattress_damage.rvmat"
							}
						},						
						{
							0.0,							
							{
								"MuchStuffPack\MSP_Deco\mattress\data\mattress_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Msp_Mattress_Blue: Msp_Mattress_Base
	{
		scope=2;
		displayName="Mattress - Blue";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\mattress\data\mattress_co.paa"
		};	
	};
	class Msp_Mattress_Green: Msp_Mattress_Base
	{
		scope=2;
		displayName="Mattress - Green";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\mattress\data\mattress_green_co.paa"
		};	
	};
	class Msp_Mattress_Pink: Msp_Mattress_Base
	{
		scope=2;
		displayName="Mattress - Pink";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\mattress\data\mattress_pink_co.paa"
		};
	};
	class Msp_Mattress_Yellow: Msp_Mattress_Base
	{
		scope=2;
		displayName="Mattress - Yellow";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\mattress\data\mattress_yellow_co.paa"
		};	
	};
	class Msp_DeskClock: Msp_Storage_Base
	{
		scope=2;
		displayName="Desk Clock";
		descriptionShort="A desk clock that shows in game time.";
		model="\MuchStuffPack\MSP_Deco\clocks\deskclock\deskclock.p3d";
		weight=550;
		itemSize[]={3,3};
		itemBehaviour=1;
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="ammobox_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	
	class Msp_WoodenTable_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Wooden Table Kit";
	};
    class Msp_WoodenTable: Msp_Item
	{
		scope=2;
		displayName="Wooden Table";
		descriptionShort="A sturdy wooden table, meant for decorating dining rooms.";
		model="\MuchStuffPack\MSP_Deco\tablechairs\table.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\tablechairs\tablechairs_co.paa"
		};
	};
	class Msp_WoodenChair: Msp_Storage_Base
	{
		scope=2;
		displayName="Wooden Chair";
		descriptionShort="A wooden chair that goes well with the wooden table.";
		model="\MuchStuffPack\MSP_Deco\tablechairs\chair.p3d";
		weight=3550;
		itemSize[]={3,6};
		itemBehaviour=2;
		physLayer="item_large";
	};
	
	class Msp_RoomDivider_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Room Divider Kit";
	};
    class Msp_RoomDivider: Msp_Item
	{
		scope=2;
		displayName="Room Divider";
		descriptionShort="A sturdy wooden room divider, used for separating rooms. It can be set to flat or slightly folded state.";
		model="\MuchStuffPack\MSP_Deco\roomdivider\roomdivider1.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\roomdivider\roomdivider_co.paa"
		};
	};
    class Msp_RoomDivider_Flat: Msp_Item
	{
		scope=2;
		displayName="Room Divider";
		descriptionShort="A sturdy wooden room divider, used for separating rooms. It can be set to flat or slightly folded state.";
		model="\MuchStuffPack\MSP_Deco\roomdivider\roomdivider_flat.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Deco\roomdivider\roomdivider_co.paa"
		};
	};
	
	class Msp_HousePlant_Philodendron: Msp_Storage_Base
	{
		scope=2;
		displayName="Philodendron";
		descriptionShort="There's a lot to love about philodendrons. Their name literally comes from the Greek words philo- (meaning love) and dendron (meaning tree). Most types can withstand dark corners as well as sparse watering. 'They like to be on the dry side' says Nejman, so don't fill the watering can more than once per week.";
		model="\MuchStuffPack\MSP_Deco\houseplants\plant1.p3d";
		weight=1550;
		itemSize[]={4,6};
		itemBehaviour=2;
		physLayer="item_large";
	};
	class Msp_HousePlant_FicusTree: Msp_Storage_Base
	{
		scope=2;
		displayName="Ficus Tree";
		descriptionShort="This ficus tree is a very popular houseplant in temperate areas, due to its elegant growth and tolerance of poor growing conditions; it does best in bright, sunny conditions, but also tolerates considerable shade.";
		model="\MuchStuffPack\MSP_Deco\houseplants\plant2.p3d";
		weight=3550;
		itemSize[]={4,8};
		itemBehaviour=2;
		physLayer="item_large";
	};
	class Msp_HousePlant_RubberFig: Msp_Storage_Base
	{
		scope=2;
		displayName="Rubber Fig";
		descriptionShort="Rubber trees can measure over 100 feet tall in their native Asia, but regular pruning will keep the ornamental variety in check. A potted rubber tree tolerates bright direct light, but put it in a slightly more shaded spot and it will thank you for it. Water when the soil has dried out — about every week or so.";
		model="\MuchStuffPack\MSP_Deco\houseplants\plant3.p3d";
		weight=3550;
		itemSize[]={2,5};
		itemBehaviour=2;
		physLayer="item_large";
	};
	class Msp_HousePlant_Succulent: Msp_Storage_Base
	{
		scope=2;
		displayName="Succulent";
		descriptionShort="A small succulent with white pot. Beautiful on a tea table.";
		model="\MuchStuffPack\MSP_Deco\houseplants\cactus.p3d";
		weight=3550;
		itemSize[]={3,3};
		itemBehaviour=2;
		physLayer="item_large";
	};
};