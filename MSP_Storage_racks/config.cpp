class CfgPatches
{
	class MSP_Storage_racks
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
    class MSP_Storage_racks
    {
        dir = "MSP_Storage_racks";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Storage_racks";
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
                files[] = {"MuchStuffPack/MSP_Storage_racks/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_racks/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_racks/scripts/5_Mission"};
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

	class Msp_GunCabinet_Kit: Msp_Kit
	{	
		scope=2;
		displayName="Gun Cabinet Kit";
	};
    class Msp_GunCabinet: Msp_Openable_Base
	{
		scope=2;
		displayName="Gun Cabinet";
		descriptionShort="Gun Cabinet that can store 8 rifles";
		model="\MuchStuffPack\MSP_Storage_racks\guncabinet\GunCabinet.p3d";
		hasProxiesToHide=1;
		hiddenSelections[]=
		{
			"body",
			"glass"
		};
		hiddenSelectionsTextures[]=
		{
			"muchstuffpack\msp_storage_racks\guncabinet\gun_cabinet_co.paa",
			"muchstuffpack\msp_storage_racks\guncabinet\gun_cabinet_glass_co.paa"
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
			"Shoulder8",
			"Shoulder3",
			"Shoulder2",
			"Shoulder1",
			"Shoulder6",
			"Shoulder5",
			"Shoulder4",
			"Shoulder7"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Shoulder8",
					"Shoulder3",
					"Shoulder2",
					"Shoulder1",
					"Shoulder6",
					"Shoulder5",
					"Shoulder4",
					"Shoulder7"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
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
	
	class Msp_GunRack_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Gun Rack Kit";
	};
    class Msp_GunRack: Msp_Item
	{
		scope=2;
		displayName="Gun Rack";
		descriptionShort="Gun Rack that can store 10 rifles";
		model="\MuchStuffPack\MSP_Storage_racks\gunrack\gunrack.p3d";
		hasProxiesToHide=1;
		hiddenSelectionsTextures[]=
		{
			"muchstuffpack\msp_storage_racks\gunrack\gunrack_co.paa"
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
			"Shoulder7",
			"Shoulder8",
			"Shoulder9",
			"Shoulder10"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5",
					"Shoulder6",
					"Shoulder7",
					"Shoulder8",
					"Shoulder9",
					"Shoulder10"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
		};
	};
	
	class Msp_DoubleGunRack_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Double Gun Rack Kit";
	};
    class Msp_DoubleGunRack: Msp_Item
	{
		scope=2;
		displayName="Double Gun Rack";
		descriptionShort="Double Gun Rack that can store 20 rifles";
		model="\MuchStuffPack\MSP_Storage_racks\gunrack\doublegunrack.p3d";
		hasProxiesToHide=1;
		hiddenSelectionsTextures[]=
		{
			"muchstuffpack\msp_storage_racks\gunrack\gunrack_co.paa"
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
			"Shoulder7",
			"Shoulder8",
			"Shoulder9",
			"Shoulder10",
			"Shoulder11",
			"Shoulder12",
			"Shoulder13",
			"Shoulder14",
			"Shoulder15",
			"Shoulder16",
			"Shoulder17",
			"Shoulder18",
			"Shoulder19",
			"Shoulder20"
		};
		class GUIInventoryAttachmentsProps
		{
			class Left
			{
				name="Left Side";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5",
					"Shoulder6",
					"Shoulder7",
					"Shoulder8",
					"Shoulder9",
					"Shoulder10"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
			class Right
			{
				name="Right Side";
				description="";
				attachmentSlots[]=
				{
					"Shoulder20",
					"Shoulder19",
					"Shoulder18",
					"Shoulder17",
					"Shoulder16",
					"Shoulder15",
					"Shoulder14",
					"Shoulder13",
					"Shoulder12",
					"Shoulder11"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
		};
	};
	
	class Msp_FishingRodsRack_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Fishing Rods Rack Kit";
	};
    class Msp_FishingRodsRack: Msp_Item
	{
		scope=2;
		displayName="Fishing Rods Rack";
		descriptionShort="Fishing Rods Rack that can store 5 rods";
		model="\MuchStuffPack\MSP_Storage_racks\fishingrodsrack\fishingrodsrack.p3d";
		hasProxiesToHide=1;
		hiddenSelectionsTextures[]=
		{
			"muchstuffpack\msp_storage_racks\swordstand\swordstand_co.paa"
		};
		attachments[]=
		{
			"fishingrod1",
			"fishingrod2",
			"fishingrod3",
			"fishingrod4",
			"fishingrod5",
			"fishingrod6",
			"fishingrod7",
			"fishingrod8",
			"fishingrod9",
			"fishingrod10"
		};
		class GUIInventoryAttachmentsProps
		{
			class FishingRods
			{
				name="Fishing Rods";
				description="";
				attachmentSlots[]=
				{
					"fishingrod1",
					"fishingrod2",
					"fishingrod3",
					"fishingrod4",
					"fishingrod5",
					"fishingrod6",
					"fishingrod7",
					"fishingrod8",
					"fishingrod9",
					"fishingrod10"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
		};
	};
		
	class Msp_WoodenGunRack_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Wooden Gun Rack Kit";
	};
    class Msp_WoodenGunRack: Msp_Item
	{
		scope=2;
		displayName="Wooden Gun Rack";
		descriptionShort="Gun Rack that can store 8 rifles";
		model="\MuchStuffPack\MSP_Storage_racks\weaponrack\weaponrack.p3d";
		hasProxiesToHide=1;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_racks\weaponrack\weaponrack_co.paa"
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
			"Shoulder7",
			"Shoulder8"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5",
					"Shoulder6",
					"Shoulder7",
					"Shoulder8"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
		};
	};
	
	class Msp_Gunwall_Kit: Msp_Kit
	{		
		scope=2;
		displayName="Gun Wall Kit";
	};
    class Msp_Gunwall: Msp_Item
	{
		scope=2;
		displayName="Gun Wall";
		descriptionShort="Gun Wall that can store 8 rifles";
		model="\MuchStuffPack\MSP_Storage_racks\gunwall\gunwall.p3d";
		hasProxiesToHide=1;
		hiddenSelectionsTextures[]=
		{
			"muchstuffpack\msp_storage_racks\gunwall\data\gunwall_co.paa"
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
			"Shoulder7",
			"Shoulder8"
		};
		class GUIInventoryAttachmentsProps
		{
			class Rifles
			{
				name="Rifles";
				description="";
				attachmentSlots[]=
				{
					"Shoulder1",
					"Shoulder2",
					"Shoulder3",
					"Shoulder4",
					"Shoulder5",
					"Shoulder6",
					"Shoulder7",
					"Shoulder8"
				};
				icon="set:dayz_inventory image:shoulderleft";
			};
		};
	};
};