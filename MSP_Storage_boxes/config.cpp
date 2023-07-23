class CfgPatches
{
	class MSP_Storage_boxes
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
    class MSP_Storage_boxes
    {
        dir = "MSP_Storage_boxes";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Storage_boxes";
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
                files[] = {"MuchStuffPack/MSP_Storage_boxes/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_boxes/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage_boxes/scripts/5_Mission"};
			};
		};
    };
};


class CfgVehicles
{
    class Msp_Storage_Base;
	class Msp_Openable_Placeable_Base;
	class Msp_Kit;
	class Msp_Item;
    class Msp_AmmoStorage_Base;
	class Msp_InventoryStorage_Base;
	
	class Msp_LargeAmmoBox: Msp_AmmoStorage_Base
	{
		scope=2;
		displayName="Large Ammo Box";
		descriptionShort="$STR_CfgVehicles_AmmoBox1";
		model="\dz\gear\containers\300RoundBox.p3d";
		weight=2250;
		itemSize[]={5,4};	
		itemBehaviour=1;			
		hasCargoRestrictions=1;
		itemsCargoSize[]={10,4};
		inventorySlot[]=
		{
			"AmmoBox1",
			"AmmoBox2",
			"AmmoBox3"
		};
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

	class Msp_GrenadeBox: Msp_Openable_Placeable_Base
	{
		scope=2;
		displayName="Grenade Box";
		descriptionShort="A grenade box that can store 10 grenades.";
		model="\MuchStuffPack\MSP_Storage_boxes\grenadebox\grenadebox.p3d";
		itemSize[]={5,4};
		rotationFlags=16;
		attachments[]=
		{
			"FGrenade1",
			"FGrenade2",
			"FGrenade3",
			"FGrenade4",	
			"FGrenade5",
			"FGrenade6",
			"FGrenade7",
			"FGrenade8",
			"FGrenade9",
			"FGrenade10"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_boxes\grenadebox\grenadebox_co.paa"
		};			
		class GUIInventoryAttachmentsProps
		{
			class GrenadesRow1
			{
				name="Grenades Row 1";
				description="";
				attachmentSlots[]=
				{					
					"FGrenade1",
					"FGrenade2",
					"FGrenade3",
					"FGrenade4"
				};
				icon="set:dayz_inventory image:grenade";
			};
			class GrenadesRow2
			{
				name="Grenades Row 2";
				description="";
				attachmentSlots[]=
				{					
					"FGrenade5",
					"FGrenade6",
					"FGrenade7",
					"FGrenade8"
				};
				icon="set:dayz_inventory image:grenade";
			};
			class GrenadesRow3
			{
				name="Grenades Row 3";
				description="";
				attachmentSlots[]=
				{					
					"FGrenade9",
					"FGrenade10"
				};
				icon="set:dayz_inventory image:grenade";
			};
		};
	};

    class Msp_TackleBox : Msp_InventoryStorage_Base
	{
		scope=2;
		displayName="Tackle Box";
		descriptionShort="A medium sized tackle box to store your hooks and bait.";
		model="\MuchStuffPack\MSP_Storage_boxes\tacklebox\tacklebox.p3d";
		itemsCargoSize[]={8,6};
		itemSize[]={6,4};
		itemBehaviour=2;
		hasCargoRestrictions=1;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_boxes\tacklebox\tacklebox_co.paa"
		};
	};

	class Msp_TackleBox_Black : Msp_TackleBox
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_boxes\tacklebox\tacklebox_black_co.paa"
		};
	};
	
    class Msp_CoolerBox : Msp_InventoryStorage_Base
	{
		scope=2;
		displayName="Cooler Box";
		descriptionShort="A medium sized cooler box to store your fish.";
		model="\MuchStuffPack\MSP_Storage_boxes\coolerbox\coolerbox.p3d";
		itemsCargoSize[]={8,8};
		itemSize[]={5,6};
		itemBehaviour=2;
		hasCargoRestrictions=1;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_boxes\coolerbox\coolerbox_co.paa"
		};
	};

	class Msp_CoolerBox_Black : Msp_CoolerBox
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_boxes\coolerbox\coolerbox_black_co.paa"
		};
	};
	
    class Msp_Basket_Rectangular : Msp_Openable_Placeable_Base
	{
		scope=2;
		displayName="Rectangular Basket";
		descriptionShort="A picnic basket for easter event.";
		model="\MuchStuffPack\MSP_Storage_boxes\basket\rectangular_basket.p3d";
		itemsCargoSize[]={8,6};
		itemSize[]={6,4};
		itemBehaviour=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_boxes\basket\basket_co.paa"
		};
		class AnimationSources
		{
			class Lid0
			{
				source="user";
				initPhase=1;
				animPeriod=0.001;
			};
			class Lid1
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
		};
	};

    class Msp_Basket_Wicker : Msp_Openable_Placeable_Base
	{
		scope=2;
		displayName="Wicker Basket";
		descriptionShort="A picnic basket for easter event.";
		model="\MuchStuffPack\MSP_Storage_boxes\basket\wicker_basket.p3d";
		itemsCargoSize[]={8,6};
		itemSize[]={6,4};
		itemBehaviour=2;
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_boxes\basket\basket_co.paa"
		};
	};

    class Msp_MedCase : Msp_Openable_Placeable_Base
	{
		scope=2;
		displayName="Medical Case";
		descriptionShort="A case to store medical items.";
		model="\MuchStuffPack\MSP_Storage_boxes\medcase\medcase.p3d";
		itemsCargoSize[]={10,6};
		itemSize[]={5,4};
		itemBehaviour=2;
		hasCargoRestrictions=1;
		hiddenSelections[]=
		{
			"medcase"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_boxes\medcase\medcase_co.paa"
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
	//Kits
	class Msp_StorageBox_Kit: Msp_Kit
	{
		scope=2;
		displayName="Storage Box Kit";
	};
    class Msp_StorageBox: Msp_Item
	{
		scope=2;
		displayName="Storage Box";
		descriptionShort="A large military box that can store a hefty load of items.";
		model="\MuchStuffPack\MSP_Storage_boxes\storagebox\storagebox.p3d";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_boxes\storagebox\storagebox_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,25};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
	};
};