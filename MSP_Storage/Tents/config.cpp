class CfgPatches
{
	class MSP_Storage_Tents
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
    class MSP_Storage_Tents
    {
        dir = "MSP_Storage_Tents";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Storage_Tents";
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
                files[] = {"MuchStuffPack/MSP_Storage/Tents/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage/Tents/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Storage/Tents/scripts/5_Mission"};
			};
		};
    };
};


class CfgVehicles
{
	class Msp_Kit;
	class Msp_Item;	
	class Msp_Openable_Base;
	class WG_AdventurerTent_Kit: Msp_Kit
	{	
		scope=2;	
		displayName="Adventurer Tent Kit";
		descriptionShort="This can be packed by hands.";
		model="\MuchStuffPack\MSP_Storage\Tents\adventurertent\adventurertent_kit.p3d";
		rotationFlags=17;		
		itemSize[] = {2,5};
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Tents\adventurertent\adventurertent_co.paa"
		};
	};
	class WG_AdventurerTent: Msp_Item
	{
		scope=2;
		displayName="Adventurer Tent";
		descriptionShort="This can be packed by hands. It must be empty before packing.";
		model="\MuchStuffPack\MSP_Storage\Tents\adventurertent\adventurertent.p3d";
		itemsCargoSize[]={10,10};
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Tents\adventurertent\adventurertent_co.paa"
		};
	};

	class WG_CampingTent_Kit: Msp_Kit
	{	
		scope=0;	
		descriptionShort="This can be packed by hands.";
		model="\MuchStuffPack\MSP_Storage\Tents\campingtent\campingtent_kit.p3d";
		rotationFlags=17;	
		itemSize[]={7,3};
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Tents\campingtent\campingtent_kit_co.paa"
		};
	};
	class WG_CampingTent: Msp_Openable_Base
	{
		scope=0;
		descriptionShort="This can be packed by hands. It must be empty before packing.";
		model="\MuchStuffPack\MSP_Storage\Tents\campingtent\campingtent.p3d";
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Tents\campingtent\campingtent_blue_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,30};
			openable=0;
			allowOwnedCargoManipulation=1;
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
	
	class WG_CampingTent_Blue_Kit: WG_CampingTent_Kit
	{	
		scope=2;
		displayName="Camping Tent Blue Kit";
	};
	class WG_CampingTent_Blue: WG_CampingTent
	{
		scope=2;
		displayName="Camping Tent Blue";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Tents\campingtent\campingtent_blue_co.paa"
		};
	};
	
	class WG_CampingTent_Gray_Kit: WG_CampingTent_Kit
	{	
		scope=2;
		displayName="Camping Tent Gray Kit";
	};
	class WG_CampingTent_Gray: WG_CampingTent
	{
		scope=2;
		displayName="Camping Tent Gray";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage\Tents\campingtent\campingtent_red_co.paa"
		};
	};

};