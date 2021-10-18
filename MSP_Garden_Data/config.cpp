class CfgPatches
{
	class MSP_Garden_Data
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MSP_Scripts"};
	};
};

class CfgMods
{
    class MSP_Garden_Data
    {
        dir = "MSP_Garden_Data";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Garden_Data";
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
                files[] = {"MuchStuffPack/MSP_Garden_Data/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Garden_Data/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Garden_Data/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
	class GardenPlotPolytunnel;
	class Msp_Storage_Base;
	class Msp_Kit;
	class Msp_Planter_Base : GardenPlotPolytunnel
	{
		scope = 0;
		physLayer = "item_small";
	};
	
	class Msp_Greenhouse_Base : GardenPlotPolytunnel
	{
		scope = 0;
	};
	class Msp_PlanterBox: Msp_Planter_Base
	{
		scope = 2;
		displayName = "Planter Box";
		model = "\MuchStuffPack\MSP_Garden_Data\planter\planter.p3d";
		attachments[] = {"SeedBase_1","SeedBase_2","SeedBase_3"};
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name = "$STR_attachment_Filling0";
				description = "";
				attachmentSlots[] = {"SeedBase_1","SeedBase_2","SeedBase_3"};
				icon="set:dayz_inventory image:cat_gp_filling";
			};
		};	
	};
	class Msp_SquarePlanterBox: Msp_Planter_Base
	{
		scope = 2;
		displayName = "Square Planter Box";
		model = "\MuchStuffPack\MSP_Garden_Data\planter\squareplanter.p3d";
		attachments[] = {"SeedBase_1"};
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name = "$STR_attachment_Filling0";
				description = "";
				attachmentSlots[] = {"SeedBase_1"};
				icon="set:dayz_inventory image:cat_gp_filling";
			};
		};
	};
	class Msp_EmptySquarePlanterBox: Msp_Storage_Base
	{
		scope = 2;
		displayName = "Empty square planter box";
		descriptionShort = "Place this then fill with dirt to plant 1 seed to grow your veggies.";
		model = "\MuchStuffPack\MSP_Garden_Data\planter\squareplanter_empty.p3d";
		itemSize[] = {5,5};
		itemBehaviour = 2;
		physLayer = "item_small";
		hiddenSelections[] = {"all"};
		hiddenSelectionsTextures[] = {"MuchStuffPack\MSP_Garden_Data\planter\planter_wood_co.paa"};
	};
	class Msp_EmptyPlanterBox: Msp_Storage_Base
	{
		scope = 2;
		displayName = "Empty planter box";
		descriptionShort = "Place this then fill with dirt to plant 3 seeds to grow your veggies.";
		model = "\MuchStuffPack\MSP_Garden_Data\planter\planter_empty.p3d";
		itemSize[] = {10,5};
		itemBehaviour = 2;
		physLayer = "item_small";
		hiddenSelections[] = {"all"};
		hiddenSelectionsTextures[] = {"MuchStuffPack\MSP_Garden_Data\planter\planter_wood_co.paa"};
	};
	class Msp_Greenhouse: Msp_Greenhouse_Base
	{
		scope = 2;
		displayName = "Greenhouse";
		model = "\MuchStuffPack\MSP_Garden_Data\greenhouse\greenhouse.p3d";
		storageCategory = 1;
		useEntityHierarchy = "true";
		physLayer = "item_large";
		slopeTolerance = 0.3;
		alignHologramToTerain = 1;
		yawPitchRollLimit[] = {10,10,10};
		attachments[] = { "Att_CombinationLock","SeedBase_1","SeedBase_2","SeedBase_3","SeedBase_4","SeedBase_5","SeedBase_6","SeedBase_7","SeedBase_8","SeedBase_9"};
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name = "$STR_attachment_Filling0";
				description = "";
				attachmentSlots[] = {"SeedBase_1","SeedBase_2","SeedBase_3","SeedBase_4","SeedBase_5","SeedBase_6","SeedBase_7","SeedBase_8","SeedBase_9"};
				icon="set:dayz_inventory image:cat_gp_filling";
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
		class AnimationSources
		{
			class Doors1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
		};
	};
	class Msp_Greenhouse_Kit: Msp_Kit
	{
		scope = 2;
		displayName = "Greenhouse Kit";
	};
	class Msp_GreenhouseWood_Kit: Msp_Kit
	{
		scope = 2;
		displayName = "Wood Greenhouse Kit";
	};
	class Msp_GreenhouseWood: Msp_Greenhouse_Base
	{
		scope = 2;
		displayName = "Greenhouse Wood";
		model = "\MuchStuffPack\MSP_Garden_Data\greenhouse_wood\greenhousewood.p3d";
		attachments[] = { "Att_CombinationLock","SeedBase_1","SeedBase_2","SeedBase_3","SeedBase_4","SeedBase_5","SeedBase_6","SeedBase_7","SeedBase_8"};
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name = "$STR_attachment_Filling0";
				description = "";
				attachmentSlots[] = {"SeedBase_1","SeedBase_2","SeedBase_3","SeedBase_4","SeedBase_5","SeedBase_6","SeedBase_7","SeedBase_8"};
				icon="set:dayz_inventory image:cat_gp_filling";
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
		class AnimationSources
		{
			class Doors1
			{
				source = "user";
				initPhase = 0;
				animPeriod = 1;
			};
		};
	};

	class Msp_EmptyPlanterPot: Msp_Storage_Base
	{
		scope = 2;
		displayName = "Terracotta Pot";
		descriptionShort = "Place this then fill with dirt to plant 1 seed to grow your veggies.";
		model = "\MuchStuffPack\MSP_Garden_Data\pot\pot_empty.p3d";
		itemSize[] = {4,4};
		itemBehaviour = 2;
		physLayer = "item_small";
		hiddenSelections[] = {"all"};
		hiddenSelectionsTextures[] = {"MuchStuffPack\MSP_Garden_Data\pot\data\pot_co.paa"};
	};	
	class Msp_PlanterPot: Msp_Planter_Base
	{
		scope = 2;
		displayName = "Terracotta Pot";
		model = "\MuchStuffPack\MSP_Garden_Data\pot\pot_filled.p3d";
		attachments[] = {"SeedBase_1"};
		class GUIInventoryAttachmentsProps
		{
			class Filling
			{
				name = "$STR_attachment_Filling0";
				description = "";
				attachmentSlots[] = {"SeedBase_1"};
				icon="set:dayz_inventory image:cat_gp_filling";
			};
		};
	};
};