class CfgPatches
{
	class MSP_Storage_lockers
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
    class MSP_Storage_lockers
    {
        dir = "MSP_Storage_lockers";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Storage_lockers";
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
                files[] = {"MuchStuffPack/MSP_Storage_lockers/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_lockers/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_lockers/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
    class Msp_Storage_Base;
	class Msp_Openable_Base;
	class Msp_Kit;
	class Msp_Item;

	class Msp_MilitaryLocker_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Military Locker Kit";
	};
    class Msp_MilitaryLocker: Msp_Item
	{
		scope=2;
		displayName="Military Locker";
		descriptionShort="Military Locker that can store various items. Attachments: 6x Rifles, 1x Pistol, 3x Ammo Boxes, 4x Grenades, a full loadout";
		model="\MuchStuffPack\MSP_Storage_lockers\militarylocker\militarylocker.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\militarylocker\militarylocker_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Pistol",
			"Armband",
			"Hips",
			"Back",
			"Body",
			"Legs",
			"Feet",
			"Eyewear",
			"Mask",
			"Gloves",
			"Vest",
			"Headgear",
			"Knife",
			"AmmoBox1",
			"AmmoBox2",
			"AmmoBox3",			
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		class GUIInventoryAttachmentsProps
		{
			class Grenades
			{
				name="Grenades";
				description="";
				attachmentSlots[]=
				{			
					"VestGrenadeA",
					"VestGrenadeB",
					"VestGrenadeC",
					"VestGrenadeD"
				};
				icon="cat_common_cargo";
			};
			class Rifle_Storage
			{
				name="Rifle Storage";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5",
					"Shoulder6"
				};
				icon="cat_common_cargo";
			};
			
			class Various
			{
				name="Various";
				description="";
				attachmentSlots[]=
				{
					"Pistol",
					"Knife"
				};
				icon="cat_common_cargo";
			};
			class AmmoBoxes
			{
				name="Ammo Boxes";
				description="";
				attachmentSlots[]=
				{
					"AmmoBox1",
					"AmmoBox2",
					"AmmoBox3"
				};
				icon="cat_common_cargo";
			};
			class Loadout_Storage
			{
				name="Loadout";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet"
				};
				icon="cat_common_cargo";
			};
		};
	};
	class Msp_Locker_Kit: Msp_Kit
	{	
		scope=2;
		displayName="Locker Kit";
	};
    class Msp_Locker: Msp_Openable_Base
	{
		scope=2;
		displayName="Locker";
		descriptionShort="Locker that can store various items. Attachments: 2x Rifles, a full loadout";
		model="\MuchStuffPack\MSP_Storage_lockers\threelocker\locker.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\threelocker\locker_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};		
		attachments[]=
		{
			"Att_CombinationLock",
			"Shoulder1",
			"Shoulder2",
			"Armband",
			"Hips",
			"Back",
			"Body",
			"Legs",
			"Feet",
			"Eyewear",
			"Mask",
			"Gloves",
			"Vest",
			"Headgear"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifle_Storage
			{
				name="Rifle Storage";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2"
				};
				icon="cat_common_cargo";
			};
			class Loadout_Storage
			{
				name="Loadout";
				description="";
				attachmentSlots[]=
				{
					"Headgear",
					"Eyewear",
					"Mask",
					"Armband",
					"Gloves",
					"Body",
					"Vest",
					"Back",
					"Hips",
					"Legs",
					"Feet"
				};
				icon="cat_common_cargo";
			};
			class CodeLock
			{
				name="CodeLock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_bb_attachments";
				view_index=3;
			};
		};
	};
	
	class Msp_SoloLocker_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Solo Locker Kit";
	};
    class Msp_SoloLocker: Msp_Openable_Base
	{
		scope=2;
		displayName="Solo Locker";
		descriptionShort="Locker that can store various items. Attachments: 2x Rifles, a full loadout";
		model="\MuchStuffPack\MSP_Storage_lockers\sololocker\sololocker.p3d";
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\sololocker\sololocker_co.paa"
		};	
		class Cargo
		{
			itemsCargoSize[]={10,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[] = 
		{
			"Att_CombinationLock",
			"Vest",
			"Back",
			"Headgear",
			"Legs",
			"Body",
			"Shoulder2",
			"Shoulder1",
			"Gloves",
			"Feet",
			"Armband",
			"Eyewear",
			"Mask",
			"Hips"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name = "Rifles";
				description = "";
				attachmentSlots[] = {"Shoulder1","Shoulder2"};
				icon = "shoulderleft";
			};
			class Accessories
			{
				name = "Accessories";
				description = "";
				attachmentSlots[] = 
				{
					"Mask",
					"Eyewear",
					"Gloves",
					"Feet",
					"Armband"
				};
				icon = "eyewear";
			};
			class Clothing
			{
				name = "Clothing";
				description = "";
				attachmentSlots[] = 
				{
					"Vest",
					"Body",
					"Hips",
					"Legs",
					"Back",
					"Headgear"
				};
				icon = "body";
			};
			class CodeLock
			{
				name="CodeLock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_bb_attachments";
				view_index=3;
			};
		};
	};

	class Msp_SoloLocker_Black_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Solo Locker Black Kit";
	};
	class Msp_SoloLocker_Black: Msp_SoloLocker
	{
		displayName="Solo Locker Black";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\sololocker\sololocker_rusty_co.paa"
		};
	};
	class Msp_SoloLocker_White_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Solo Locker White Kit";
	};
	class Msp_SoloLocker_White: Msp_SoloLocker
	{
		displayName="Solo Locker White";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\sololocker\sololocker_white_co.paa"
		};
	};	
	class Msp_SoloLocker_Green_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Solo Locker Green Kit";
	};
	class Msp_SoloLocker_Green: Msp_SoloLocker
	{
		displayName="Solo Locker Green";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\sololocker\sololocker_green_co.paa"
		};
	};	
	class Msp_SoloLocker_Red_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Solo Locker Red Kit";
	};
	class Msp_SoloLocker_Red: Msp_SoloLocker
	{
		displayName="Solo Locker Red";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\sololocker\sololocker_redflat_co.paa"
		};
	};	
	class Msp_SoloLocker_RedRusty_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Solo Locker Red Rusty Kit";
	};
	class Msp_SoloLocker_RedRusty: Msp_SoloLocker
	{
		displayName="Solo Locker Red Rusty";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\sololocker\sololocker_redrusty_co.paa"
		};
	};
	class Msp_SoloLocker_Yellow_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Solo Locker Yellow Kit";
	};
	class Msp_SoloLocker_Yellow: Msp_SoloLocker
	{
		displayName="Solo Locker Yellow";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\sololocker\sololocker_yellowflat_co.paa"
		};
	};	
	class Msp_SoloLocker_YellowRusty_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Solo Locker Yellow Rusty Kit";
	};
	class Msp_SoloLocker_YellowRusty: Msp_SoloLocker
	{
		displayName="Solo Locker Yellow Rusty";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\sololocker\sololocker_yellowrusty_co.paa"
		};
	};
	
	class Msp_OldLocker_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Old Locker Kit";
	};
    class Msp_OldLocker: Msp_Openable_Base
	{
		scope=2;
		displayName="Old Locker";
		descriptionShort="Locker that can store various items, slight increase in storage. Attachments: 2x Rifles, 1x Pistol, a full loadout";
		model="\MuchStuffPack\MSP_Storage_lockers\oldlocker\oldlocker.p3d";
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\oldlocker\oldlocker_blue_co.paa"
		};	
		class Cargo
		{
			itemsCargoSize[]={10,8};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[] = 
		{
			"Att_CombinationLock",
			"Vest",
			"Back",
			"Headgear",
			"Legs",
			"Body",
			"Shoulder2",
			"Shoulder1",
			"Gloves",
			"Feet",
			"Armband",
			"Eyewear",
			"Mask",
			"Hips",
			"Pistol"
		};
		class GUIInventoryAttachmentsProps
		{
			class Guns
			{
				name = "Guns";
				description = "";
				attachmentSlots[] = {"Shoulder1","Shoulder2","Pistol"};
				icon = "shoulderleft";
			};
			class Accessories
			{
				name = "Accessories";
				description = "";
				attachmentSlots[] = 
				{
					"Mask",
					"Eyewear",
					"Gloves",
					"Feet",
					"Armband"
				};
				icon = "eyewear";
			};
			class Clothing
			{
				name = "Clothing";
				description = "";
				attachmentSlots[] = 
				{
					"Vest",
					"Body",
					"Hips",
					"Legs",
					"Back",
					"Headgear"
				};
				icon = "body";
			};
			class CodeLock
			{
				name="CodeLock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_bb_attachments";
				view_index=3;
			};
		};
	};	
	class Msp_OldLocker_Green_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Old Locker Green Kit";
	};
	class Msp_OldLocker_Green: Msp_OldLocker
	{
		displayName="Old Locker Green";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\oldlocker\oldlocker_green_co.paa"
		};
	};
	
	class Msp_FourDoor_MilitaryLocker_Kit: Msp_Kit
	{		
		scope=2;
		displayName="4 Door Military Locker Kit";
	};
    class Msp_FourDoor_MilitaryLocker: Msp_Openable_Base
	{
		scope=2;
		displayName="4 Door Military Locker";
		descriptionShort="Locker that can store various items. Attachments: 7x Rifles, 4x Pistols, 1x First Aid Kit, 3x Ammo Boxes, 1x Protector Case, 1x Walkie Talkie, a full loadout";
		model="\MuchStuffPack\MSP_Storage_lockers\tanmilitarylocker\tanmilitarylocker.p3d";
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\tanmilitarylocker\tanmilitarylocker_co.paa"
		};	
		class Cargo
		{
			itemsCargoSize[]={10,6};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[] = 
		{
			"Att_CombinationLock",
			"Vest",
			"Back",
			"Headgear",
			"Legs",
			"Body",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Shoulder7",
			"Pistol1",
			"Pistol2",
			"Pistol3",
			"Pistol4",
			"Gloves",
			"Feet",
			"Armband",
			"Eyewear",
			"Mask",
			"Hips",
			"FirstAid",
			"AmmoBox1",
			"AmmoBox2",
			"AmmoBox3",
			"ProtectorCase",
			"WalkieTalkie"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name = "Rifles";
				description = "";
				attachmentSlots[] = 
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5",
					"Shoulder6",
					"Shoulder7"
				};
				icon = "shoulderleft";
			};
			class Pistols
			{
				name = "Pistols";
				description = "";
				attachmentSlots[] = 
				{
					"Pistol1",
					"Pistol2",
					"Pistol3",
					"Pistol4"
				};
				icon = "pistol";
			};
			class Accessories
			{
				name = "Accessories";
				description = "";
				attachmentSlots[] = 
				{
					"Mask",
					"Eyewear",
					"Gloves",
					"Feet",
					"Armband",
					"WalkieTalkie"
				};
				icon = "eyewear";
			};
			class Clothing
			{
				name = "Clothing";
				description = "";
				attachmentSlots[] = 
				{
					"Vest",
					"Body",
					"Hips",
					"Legs",
					"Back",
					"Headgear"
				};
				icon = "body";
			};
			class Containers
			{
				name = "Containers";
				description = "";
				attachmentSlots[] = 
				{
					"AmmoBox1",
					"AmmoBox2",
					"AmmoBox3",
					"ProtectorCase",
					"FirstAid"
				};
				icon = "";
			};
			class CodeLock
			{
				name="CodeLock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_bb_attachments";
				view_index=3;
			};
		};
	};
	class Msp_FourDoor_MilitaryLocker_Green_Kit: Msp_Kit
	{		
		scope=2;
		displayName="4 Door Military Locker Green Kit";
	};
	class Msp_FourDoor_MilitaryLocker_Green: Msp_FourDoor_MilitaryLocker
	{
		displayName="4 Door Military Locker Green";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\tanmilitarylocker\tanmilitarylocker_green_co.paa"
		};
	};
	
	class Msp_RifleSafe_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Rifle Safe Kit";
	};
    class Msp_RifleSafe: Msp_Openable_Base
	{
		scope=2;
		displayName="Rifle Safe";
		descriptionShort="Sturdy Rifle Safe that can store various items. Attachments: 6x Rifles, 3x Pistol";
		model="\MuchStuffPack\MSP_Storage_lockers\riflesafe\riflesafe.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\riflesafe\data\riflesafe_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,10};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		attachments[]=
		{
			"Att_CombinationLock",
			"Shoulder1",
			"Shoulder2",
			"Shoulder3",
			"Shoulder4",
			"Shoulder5",
			"Shoulder6",
			"Pistol1",
			"Pistol2",
			"Pistol3"
		};
		class GUIInventoryAttachmentsProps
		{
			class Pistols
			{
				name="Pistols";
				description="";
				attachmentSlots[]=
				{			
					"Pistol1",
					"Pistol2",
					"Pistol3"
				};
				icon="pistol";
			};
			class Rifle_Storage
			{
				name="Rifle Storage";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5",
					"Shoulder6"
				};
				icon="shoulderleft";
			};	
			class CodeLock
			{
				name="CodeLock";
				description="";
				attachmentSlots[]=
				{
					"Att_CombinationLock"
				};
				icon="cat_bb_attachments";
				view_index=3;
			};		
		};
	};
	
	class Msp_RifleSafe_Grey_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Rifle Safe - Grey Kit";
	};
    class Msp_RifleSafe_Grey: Msp_RifleSafe
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\riflesafe\data\riflesafe_grey_co.paa"
		};
	};
	class Msp_RifleSafe_Green_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Rifle Safe - Green Kit";
	};
    class Msp_RifleSafe_Green: Msp_RifleSafe
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\riflesafe\data\riflesafe_green_co.paa"
		};
	};
	class Msp_RifleSafe_Purple_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Rifle Safe - Purple Kit";
	};
    class Msp_RifleSafe_Purple: Msp_RifleSafe
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\riflesafe\data\riflesafe_purple_co.paa"
		};
	};
	class Msp_RifleSafe_Tan_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Rifle Safe - Tan Kit";
	};
    class Msp_RifleSafe_Tan: Msp_RifleSafe
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_lockers\riflesafe\data\riflesafe_tan_co.paa"
		};
	};
};