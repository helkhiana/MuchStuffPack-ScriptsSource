class CfgPatches
{
	class MSP_Storage_otherstorage
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
    class MSP_Storage_otherstorage
    {
        dir = "MSP_Storage_otherstorage";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Storage_otherstorage";
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
                files[] = {"MuchStuffPack/MSP_Storage_otherstorage/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_otherstorage/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_otherstorage/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
	class Msp_Kit;
	class Msp_Item;
	class Msp_Openable_Base;
	class Msp_Openable_Placeable_Base;
	class Msp_InventoryStorage_Base;
	
    class Msp_Safe : Msp_Openable_Placeable_Base
	{
		scope=2;
		displayName="Green Safe";
		descriptionShort="A medium sized safe to store your valuables.";
		model="\MuchStuffPack\MSP_Storage_otherstorage\safe\safe.p3d";
		itemsCargoSize[]={10,10};
		itemSize[]={8,8};
		itemBehaviour=2;
		itemPlacingOri="90 0 0";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\safe\safe_co.paa"
		};
		attachments[]=
		{
			"Att_CombinationLock"
		};
		class GUIInventoryAttachmentsProps
		{	
			class CodeLock
			{
				name="CodeLock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="set:dayz_inventory image:cat_bb_attachments";
				view_index=3;
			};
		};
	};

	class Msp_ToolsBench_Blue_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Tools Bench Blue Kit";
	};
    class Msp_ToolsBench_Blue: Msp_Item
	{
		scope=2;
		displayName="Tools Bench Blue";
		descriptionShort="A bench to store your tools. Attachments: Axe, Pickaxe, Shovel, 3x Hammers, 5x Hatchets, 3x Saws, 2x Screwdrivers, 1x Pliers, 3x Metal Wire";
		model="\MuchStuffPack\MSP_Storage_otherstorage\toolsbench\toolsbench.p3d";
		hasProxiesToHide=1;
		hiddenSelections[]=
		{
			"metalparts",
			"woodparts"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\toolsbench\toolsbench_blue_co.paa",
			"MuchStuffPack\MSP_Storage_otherstorage\toolsbench\toolsbench_wood_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{		
			"Axe1",
			"Hammer1",
			"Hammer2",
			"Hammer3",
			"Hatchet",
			"Hatchet1",
			"Hatchet2",
			"Hatchet3",
			"Hatchet4",
			"Pickaxe1",
			"Pliers1",
			"Saw1",
			"Saw2",
			"Saw3",
			"Screwdriver1",
			"Screwdriver2",
			"Shovel1",
			"Wire1",
			"Wire2",
			"Wire3"
		};
		class GUIInventoryAttachmentsProps
		{
			class Top
			{
				name="Top";
				description="3x Hammers, 5x Hatchets, 3x Saws";
				attachmentSlots[]=
				{			
					"Saw1",
					"Saw2",
					"Saw3",
					"Hatchet2",
					"Hatchet3",
					"Hatchet4",
					"Hatchet",
					"Hatchet1",
					"Hammer1",
					"Hammer2",
					"Hammer3"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
			class Side
			{
				name="Side";
				description="Axe, Pickaxe, Shovel";
				attachmentSlots[]=
				{
					"Shovel1",
					"Pickaxe1",
					"Axe1"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};			
			class SmallTools
			{
				name="Small Tools";
				description="2x Screwdrivers, 1x Pliers";
				attachmentSlots[]=
				{		
					"Pliers1",
					"Screwdriver1",
					"Screwdriver2"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};			
			class Wires
			{
				name="Wires";
				description="3x Metal Wire";
				attachmentSlots[]=
				{				
					"Wire1",
					"Wire2",
					"Wire3"
				};
				icon="set:dayz_inventory image:cat_common_cargo";
			};
		};
	};
	
	class Msp_ToolsBench_Grey_Kit: Msp_ToolsBench_Blue_Kit
	{	
		scope=2;	
		displayName="Tools Bench Grey Kit";
	};
	class Msp_ToolsBench_Grey: Msp_ToolsBench_Blue
	{
		scope=2;
		displayName="Tools Bench Grey";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\toolsbench\toolsbench_grey_co.paa",
			"MuchStuffPack\MSP_Storage_otherstorage\toolsbench\toolsbench_wood_co.paa"
		};
	};
	
	class Msp_ToolsBench_Red_Kit: Msp_ToolsBench_Blue_Kit
	{		
		scope=2;
		displayName="Tools Bench Red Kit";
	};
	class Msp_ToolsBench_Red: Msp_ToolsBench_Blue
	{
		scope=2;
		displayName="Tools Bench Red";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\toolsbench\toolsbench_red_co.paa",
			"MuchStuffPack\MSP_Storage_otherstorage\toolsbench\toolsbench_wood_co.paa"
		};
	};
	
	class Msp_Bookcase_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Bookcase Kit";
	};
    class Msp_Bookcase: Msp_Openable_Base
	{
		scope=2;
		displayName="Bookcase";
		descriptionShort="Bookcase to store 50 books. Can be dismantled by screwdriver, hammer or pliers.";
		model="\MuchStuffPack\MSP_Storage_otherstorage\bookcase\bookcase.p3d";
		hasProxiesToHide=1;
		hiddenSelections[]=
		{
			"body",
			"glass"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\bookcase\bookcase_co.paa",
			"MuchStuffPack\MSP_Storage_otherstorage\bookcase\bookcase_glass_ca.paa"
		};
		attachments[]=
		{
			"Book1","Book2","Book3","Book4","Book5",
			"Book6","Book7","Book8","Book9","Book10",
			"Book11","Book12","Book13","Book14","Book15",
			"Book16","Book17","Book18","Book19","Book20",
			"Book21","Book22","Book23","Book24","Book25",
			"Book26","Book27","Book28","Book29","Book30",
			"Book31","Book32","Book33","Book34","Book35",
			"Book36","Book37","Book38","Book39","Book40",
			"Book41","Book42","Book43","Book44","Book45",
			"Book46","Book47","Book48","Book49","Book50"
		};		
		class GUIInventoryAttachmentsProps
		{
			class Shelf1
			{
				name="Top Shelf";
				description="";
				attachmentSlots[]=
				{
					"Book1","Book2","Book3","Book4","Book5",
					"Book6","Book7","Book8","Book9","Book10"
				};
				icon="set:dayz_inventory image:book";
			};			
			class Shelf2
			{
				name="Second Shelf";
				description="";
				attachmentSlots[]=
				{
					"Book11","Book12","Book13","Book14","Book15",
					"Book16","Book17","Book18","Book19","Book20"
				};
				icon="set:dayz_inventory image:book";
			};		
			class Shelf3
			{
				name="Third Shelf";
				description="";
				attachmentSlots[]=
				{
					"Book21","Book22","Book23","Book24","Book25",
					"Book26","Book27","Book28","Book29","Book30"
				};
				icon="set:dayz_inventory image:book";
			};		
			class Shelf4
			{
				name="Bottom Shelf";
				description="";
				attachmentSlots[]=
				{
					"Book31","Book32","Book33","Book34","Book35",
					"Book36","Book37","Book38","Book39","Book40"
				};
				icon="set:dayz_inventory image:book";
			};		
			class Shelf5
			{
				name="Bottom";
				description="";
				attachmentSlots[]=
				{
					"Book41","Book42","Book43","Book44","Book45",
					"Book46","Book47","Book48","Book49","Book50"
				};
				icon="set:dayz_inventory image:book";
			};
		};
	};

    class Msp_Mailbox : Msp_Openable_Placeable_Base
	{
		scope=2;
		displayName="Mailbox";
		descriptionShort="A mailbox to place outside your bases to receive letters, notes and packages.";
		model="\MuchStuffPack\MSP_Storage_otherstorage\mailbox\mailbox.p3d";
		itemsCargoSize[]={10,7};
		itemSize[]={3,8};
		itemBehaviour=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\mailbox\mailbox_co.paa"
		};
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Lever
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};

    class Msp_TrashCan : Msp_Openable_Placeable_Base
	{
		scope=2;
		displayName="Trash Can";
		descriptionShort="A Trash Can to destroy unwanted items. Hold F to destroy the items inside.";
		model="\MuchStuffPack\MSP_Storage_otherstorage\trashcan\trashcan.p3d";
		itemsCargoSize[]={10,10};
		itemSize[]={5,8};
		itemBehaviour=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\trashcan\trashcan_co.paa"
		};
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
    class Msp_Static_TrashCan : Msp_TrashCan
	{
		scope=2;
		descriptionShort="A Trash Can to destroy unwanted items. Cannot be picked up.";		
		itemsCargoSize[]={10,30};
	};
	class Msp_MedicalBox_Kit: Msp_Kit
	{
		scope=2;
		displayName="Medical Box Kit";
	};
    class Msp_MedicalBox: Msp_Item
	{
		scope=2;
		displayName="Medical Box";
		descriptionShort="A small medical shelving that can store medical items.";
		model="\MuchStuffPack\MSP_Storage_otherstorage\medicalbox\medicalbox.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\medicalbox\medicalbox_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,5};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};

    class Msp_Wardrobe_Base : Msp_Openable_Base
	{
		scope=0;
		displayName="Wardrobe";
		descriptionShort="A large wardrobe with 300 inventory space. It can be dismantled by a screwdriver, pliers or hammer.";
		model="\MuchStuffPack\MSP_Storage_otherstorage\wardrobe\wardrobe.p3d";
		itemsCargoSize[]={10,30};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\wardrobe\wardrobe_green_co.paa"
		};
	};
	class Msp_Wardrobe_Brown_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Brown Wardrobe Kit";
	};
	class Msp_Wardrobe_Brown : Msp_Wardrobe_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\wardrobe\wardrobe_brown_co.paa"
		};
	};
	class Msp_Wardrobe_Green_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Green Wardrobe Kit";
	};
	class Msp_Wardrobe_Green : Msp_Wardrobe_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\wardrobe\wardrobe_green_co.paa"
		};
	};
	class Msp_Wardrobe_White_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="White Wardrobe Kit";
	};
	class Msp_Wardrobe_White : Msp_Wardrobe_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\wardrobe\wardrobe_white_co.paa"
		};
	};

	class Msp_ParamedicBag_ColorBase : Msp_InventoryStorage_Base
	{
		scope=0;
		displayName="Paramedic Bag";
		descriptionShort="A medium sized paramedic bag for nuclear, biological, chemical and medical emergencies. It can store a full NBC suit and spare medical suplies.";	
		model="\MuchStuffPack\MSP_Storage_otherstorage\paramedicbag\paramedicbag.p3d";
		itemsCargoSize[]={8,4};
		itemSize[]={5,3};	
		attachments[] = {"Headgear", "Mask", "Gloves", "Body", "Legs", "Feet", "GasMaskFilter"};
		itemBehaviour=1;
		hasCargoRestrictions=1;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\paramedicbag\paramedicbag_red_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"MuchStuffPack\MSP_Storage_otherstorage\paramedicbag\paramedicbag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Storage_otherstorage\paramedicbag\paramedicbag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Storage_otherstorage\paramedicbag\paramedicbag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Storage_otherstorage\paramedicbag\paramedicbag_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\gear\containers\data\FirsAidKit_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};	
	class Msp_ParamedicBag_Red : Msp_ParamedicBag_ColorBase
	{
		scope=2;
		displayName="Paramedic Bag - Red";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\paramedicbag\paramedicbag_red_co.paa"
		};
	};
	class Msp_ParamedicBag_Green : Msp_ParamedicBag_ColorBase
	{
		scope=2;
		displayName="Paramedic Bag - Green";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\paramedicbag\paramedicbag_green_co.paa"
		};
	};
	class Msp_ParamedicBag_Blue : Msp_ParamedicBag_ColorBase
	{
		scope=2;
		displayName="Paramedic Bag - Blue";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\paramedicbag\paramedicbag_blue_co.paa"
		};
	};
	class Msp_ParamedicBag_NBC : Msp_ParamedicBag_ColorBase
	{
		scope=2;
		displayName="Paramedic Bag - NBC";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_otherstorage\paramedicbag\paramedicbag_nbc_co.paa"
		};
	};
};