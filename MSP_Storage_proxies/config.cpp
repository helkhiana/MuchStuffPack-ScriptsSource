class CfgPatches
{
	class Msp_Storage_Proxies
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"DZ_Scripts",
			"DZ_Gear_Cooking",
			"DZ_Weapons_Melee_Blade",
			"DZ_Gear_Tools",
			"DZ_Weapons_Melee",
			"DZ_Gear_Crafting",
			"DZ_Gear_Books",
			"DZ_Gear_Containers",
			"Mass_Textures",
			"Munghardsgunwall",
			"Skyline_Furniture_Base",
			"MassBuildings"
		};
	};
};

class CfgWeapons
{
	class RifleCore;
	class Rifle_Base: RifleCore
	{
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
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
			"Shoulder20",
			"Shoulder21",
			"Shoulder22",
			"Shoulder23",
			"Shoulder24",
			"Shoulder25",
			"Shoulder26",
			"Shoulder27",
			"Shoulder28",
			"Shoulder29",
			"Shoulder30"
		};
	};
	class PistolCore;
	class Pistol_Base: PistolCore
	{
		inventorySlot[]=
		{
			"Pistol",
			"Pistol1",
			"Pistol2",
			"Pistol3",
			"Pistol4"
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
	class Slot_fishingrod1
	{
		name="fishingrod1";
		displayName="Fishing Rod";
		selection="fishingrod1";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_fishingrod2
	{
		name="fishingrod2";
		displayName="Fishing Rod";
		selection="fishingrod2";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_fishingrod3
	{
		name="fishingrod3";
		displayName="Fishing Rod";
		selection="fishingrod3";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_fishingrod4
	{
		name="fishingrod4";
		displayName="Fishing Rod";
		selection="fishingrod4";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_fishingrod5
	{
		name="fishingrod5";
		displayName="Fishing Rod";
		selection="fishingrod5";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_fishingrod6
	{
		name="fishingrod6";
		displayName="Fishing Rod";
		selection="fishingrod6";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_fishingrod7
	{
		name="fishingrod7";
		displayName="Fishing Rod";
		selection="fishingrod7";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_fishingrod8
	{
		name="fishingrod8";
		displayName="Fishing Rod";
		selection="fishingrod8";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_fishingrod9
	{
		name="fishingrod9";
		displayName="Fishing Rod";
		selection="fishingrod9";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_fishingrod10
	{
		name="fishingrod10";
		displayName="Fishing Rod";
		selection="fishingrod10";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_WaterBarrel1
	{
		name="WaterBarrel1";
		displayName="Water barrel";
		ghostIcon="missing";
	};
	class Slot_Valve
	{
		name="Valve";
		displayName="Valve";
		ghostIcon="missing";
	};
	class Slot_Axe1
	{
		name="Axe1";
		displayName="Axe";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Hatchet
	{
		name="Hatchet";
		displayName="Hatchet";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Hatchet1
	{
		name="Hatchet1";
		displayName="Hatchet";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Hatchet2
	{
		name="Hatchet2";
		displayName="Hatchet";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Hatchet3
	{
		name="Hatchet3";
		displayName="Hatchet";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Hatchet4
	{
		name="Hatchet4";
		displayName="Hatchet";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Pickaxe1
	{
		name="Pickaxe1";
		displayName="Pickaxe";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Pliers1
	{
		name="Pliers1";
		displayName="Pliers";
		ghostIcon="";
	};
	class Slot_Screwdriver1
	{
		name="Screwdriver1";
		displayName="Screwdriver";
		ghostIcon="";
	};
	class Slot_Screwdriver2
	{
		name="Screwdriver2";
		displayName="Screwdriver";
		ghostIcon="";
	};
	class Slot_Shovel1
	{
		name="Shovel1";
		displayName="Shovel";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Hammer1
	{
		name="Hammer1";
		displayName="Hammer";
		ghostIcon="";
	};
	class Slot_Hammer2
	{
		name="Hammer2";
		displayName="Hammer";
		ghostIcon="";
	};
	class Slot_Hammer3
	{
		name="Hammer3";
		displayName="Hammer";
		ghostIcon="";
	};
	class Slot_Saw1
	{
		name="Saw1";
		displayName="Saw";
		ghostIcon="";
	};
	class Slot_Saw2
	{
		name="Saw2";
		displayName="Saw";
		ghostIcon="";
	};
	class Slot_Saw3
	{
		name="Saw3";
		displayName="Saw";
		ghostIcon="";
	};
	class Slot_Wire1
	{
		name="Wire1";
		displayName="Wire";
		ghostIcon="metalwire";
	};
	class Slot_Wire2
	{
		name="Wire2";
		displayName="Wire";
		ghostIcon="metalwire";
	};
	class Slot_Wire3
	{
		name="Wire3";
		displayName="Wire";
		ghostIcon="metalwire";
	};

	class Slot_Pistol1
	{
		name="Pistol1";
		displayName="Pistol";
		ghostIcon="pistol";
	};
	class Slot_Pistol2
	{
		name="Pistol2";
		displayName="Pistol";
		ghostIcon="pistol";
	};
	class Slot_Pistol3
	{
		name="Pistol3";
		displayName="Pistol";
		ghostIcon="pistol";
	};
	class Slot_Pistol4
	{
		name="Pistol4";
		displayName="Pistol";
		ghostIcon="pistol";
	};
	class Slot_FirstAid
	{
		name = "FirstAid";
		displayName = "First Aid Kit";
		ghostIcon = "medicalbandage";
	};
	class Slot_FirstAidKit1
	{
		name = "FirstAidKit1";
		displayName = "First Aid Kit";
		ghostIcon = "medicalbandage";
	};
	class Slot_FirstAidKit2
	{
		name = "FirstAidKit2";
		displayName = "First Aid Kit";
		ghostIcon = "medicalbandage";
	};
	class Slot_FirstAidKit3
	{
		name = "FirstAidKit3";
		displayName = "First Aid Kit";
		ghostIcon = "medicalbandage";
	};
	class Slot_FirstAidKit4
	{
		name = "FirstAidKit4";
		displayName = "First Aid Kit";
		ghostIcon = "medicalbandage";
	};
	class Slot_protectorcase
	{
		name = "protectorcase";
		displayName = "Protector Case";
		ghostIcon = "pouches";
	};
	class Slot_AmmoBox1
	{
		name="AmmoBox1";
		displayName="Ammo Box";
		ghostIcon="";
	};
	class Slot_AmmoBox2
	{
		name="AmmoBox2";
		displayName="Ammo Box";
		ghostIcon="";
	};
	class Slot_AmmoBox3
	{
		name="AmmoBox3";
		displayName="Ammo Box";
		ghostIcon="";
	};
	class Slot_GasLamp
	{
		name="GasLamp";
		displayName="Gas Lamp";
		ghostIcon="cookingequipment";
	};
	class Slot_FGrenade1
	{
		name="FGrenade1";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_FGrenade2
	{
		name="FGrenade2";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_FGrenade3
	{
		name="FGrenade3";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_FGrenade4
	{
		name="FGrenade4";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_FGrenade5
	{
		name="FGrenade5";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_FGrenade6
	{
		name="FGrenade6";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_FGrenade7
	{
		name="FGrenade7";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_FGrenade8
	{
		name="FGrenade8";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_FGrenade9
	{
		name="FGrenade9";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_FGrenade10
	{
		name="FGrenade10";
		displayName="Grenade";
		ghostIcon="grenade";
	};
	class Slot_Shoulder1
	{
		name="Shoulder1";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder2
	{
		name="Shoulder2";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder3
	{
		name="Shoulder3";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder4
	{
		name="Shoulder4";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder5
	{
		name="Shoulder5";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder6
	{
		name="Shoulder6";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder7
	{
		name="Shoulder7";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder8
	{
		name="Shoulder8";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};	
	class Slot_Shoulder9
	{
		name="Shoulder9";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder10
	{
		name="Shoulder10";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder11
	{
		name="Shoulder11";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder12
	{
		name="Shoulder12";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder13
	{
		name="Shoulder13";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder14
	{
		name="Shoulder14";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder15
	{
		name="Shoulder15";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder16
	{
		name="Shoulder16";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder17
	{
		name="Shoulder17";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder18
	{
		name="Shoulder18";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder19
	{
		name="Shoulder19";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Shoulder20
	{
		name="Shoulder20";
		displayName="$STR_CfgShoulder0";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Sword1
	{
		name="Sword1";
		displayName="Sword1";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Sword2
	{
		name="Sword2";
		displayName="Sword2";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};
	class Slot_Sword3
	{
		name="Sword3";
		displayName="Sword3";
		ghostIcon="set:dayz_inventory image:shoulderleft";
	};	
	class Slot_Book1
	{
		name="Book1";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book2
	{
		name="Book2";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book3
	{
		name="Book3";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book4
	{
		name="Book4";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book5
	{
		name="Book5";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book6
	{
		name="Book6";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book7
	{
		name="Book7";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book8
	{
		name="Book8";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book9
	{
		name="Book9";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book10
	{
		name="Book10";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book11
	{
		name="Book11";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book12
	{
		name="Book12";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book13
	{
		name="Book13";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book14
	{
		name="Book14";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book15
	{
		name="Book15";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book16
	{
		name="Book16";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book17
	{
		name="Book17";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book18
	{
		name="Book18";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book19
	{
		name="Book19";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book20
	{
		name="Book20";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book21
	{
		name="Book21";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book22
	{
		name="Book22";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book23
	{
		name="Book23";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book24
	{
		name="Book24";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book25
	{
		name="Book25";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book26
	{
		name="Book26";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book27
	{
		name="Book27";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book28
	{
		name="Book28";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book29
	{
		name="Book29";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book30
	{
		name="Book30";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book31
	{
		name="Book31";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book32
	{
		name="Book32";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book33
	{
		name="Book33";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book34
	{
		name="Book34";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book35
	{
		name="Book35";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book36
	{
		name="Book36";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book37
	{
		name="Book37";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book38
	{
		name="Book38";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book39
	{
		name="Book39";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book40
	{
		name="Book40";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book41
	{
		name="Book41";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book42
	{
		name="Book42";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book43
	{
		name="Book43";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book44
	{
		name="Book44";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book45
	{
		name="Book45";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book46
	{
		name="Book46";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book47
	{
		name="Book47";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book48
	{
		name="Book48";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book49
	{
		name="Book49";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
	class Slot_Book50
	{
		name="Book50";
		displayName="Book";
		ghostIcon="set:dayz_inventory image:book";
	};
};

class CfgVehicles
{
	class Inventory_Base;
    class Container_Base;

	class PortableGasLamp: Inventory_Base
	{
        inventorySlot[]=
		{
			"GasLamp"
		};
    };

	class Grenade_Base: Inventory_Base
	{
		inventorySlot[]=
		{
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"tripWireAttachment",
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
	};
	class Sword: Inventory_Base
	{
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
			"Sword1",
			"Sword2",
			"Sword3"
		};
	};
	class WoodAxe: Inventory_Base
	{
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
			"Axe1"
		};
	};
	class FirefighterAxe: Inventory_Base
	{
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
			"Axe1"
		};
	};
	class Pickaxe: Inventory_Base
	{
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
			"Pickaxe1"
		};
	};
	class Hatchet: Inventory_Base
	{
		inventorySlot[]=
		{
			"MassTool",
			"Hatchet",
			"Hatchet1",
			"Hatchet2",
			"Hatchet3",
			"Hatchet4"
		};
	};
	class Hammer: Inventory_Base
	{
		inventorySlot[]=
		{
			"Hammer",
			"MassHammer",
			"Hammer1",
			"Hammer2",
			"Hammer3"
		};
	};
	class Shovel: Inventory_Base
	{
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
			"Shovel1"
		};
	};
	class Pliers: Inventory_Base
	{
		inventorySlot[]=
		{
			"Pliers",
			"Pliers1"
		};
	};
	class HandSaw: Inventory_Base
	{
		inventorySlot[]=
		{
			"HandSaw",
			"Saw",
			"Saw1",
			"Saw2",
			"Saw3"
		};
	};
	class Hacksaw: Inventory_Base
	{
		inventorySlot[]=
		{
			"Hacksaw",
			"Saw",
			"Saw1",
			"Saw2",
			"Saw3"
		};
	};
	class Screwdriver: Inventory_Base
	{
		inventorySlot[]=
		{
			"Screwdriver",
			"MassScrewDriver",
			"Screwdriver1",
			"Screwdriver2"
		};
	};
	class MetalWire: Inventory_Base
	{
		inventorySlot[]=
		{
			"MetalWire",
			"Material_MetalWire",
			"Material_FPole_MetalWire",
			"Wire1",
			"Wire2",
			"Wire3"
		};
	};
	class Book_Base: Inventory_Base
	{
		inventorySlot[]=
		{
			"Book",
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
	};	
	class ItemBook;
	class BookBible: ItemBook
	{
		displayName="The Bible";
		descriptionShort="The Bible";
	};

	class FishingRod_Base;
	class FishingRod_Base_New: FishingRod_Base
	{
		inventorySlot[]=
		{
			"Shoulder",
			"Melee",
			"fishingpole",
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
	};
	class FirstAidKit: Container_Base
	{
		inventorySlot[] = {"FirstAid","FirstAidKit1","FirstAidKit2","FirstAidKit3","FirstAidKit4"};
	};
	class SmallProtectorCase: Container_Base
	{
		inventorySlot[] = {"protectorcase"};
	};
	class AmmoBox: Container_Base
	{
		inventorySlot[] = {"300RoundBox","AmmoBox1","AmmoBox2","AmmoBox3"};
	};

	class Flashlight: Inventory_Base
	{
		inventorySlot[] = {"Flashlight","Flashlight1","Flashlight2","Flashlight3"};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyFirstAidKit: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"FirstAid"};
		model = "DZ\gear\containers\FirstAidKit.p3d";
	};
	class Proxyflashlight: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"Flashlight"};
		model = "\DZ\gear\tools\flashlight.p3d";
	};
	class Proxyprotector_case: ProxyAttachment
	{
		scope = 2;
		inventorySlot[] = {"protectorcase"};
		model = "\dz\gear\containers\protector_case.p3d";
	};
	class Proxypistol1: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"Pistol1"};
		model="\MuchStuffPack\MSP_Storage_proxies\pistol1.p3d";
	};
	class Proxypistol2: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"Pistol2"};
		model="\MuchStuffPack\MSP_Storage_proxies\pistol2.p3d";
	};
	class Proxypistol3: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"Pistol3"};
		model="\MuchStuffPack\MSP_Storage_proxies\pistol3.p3d";
	};
	class Proxypistol4: ProxyAttachment
	{
		scope=2;
		inventorySlot[]={"Pistol4"};
		model="\MuchStuffPack\MSP_Storage_proxies\pistol4.p3d";
	};
	class Proxyfishing_rod1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = {	"fishingrod1" };
		model="MuchStuffPack\MSP_Storage_proxies\fishingrods\fishing_rod1.p3d";
	};
	class Proxyfishing_rod2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = {	"fishingrod2" };
		model="MuchStuffPack\MSP_Storage_proxies\fishingrods\fishing_rod2.p3d";
	};
	class Proxyfishing_rod3: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = {	"fishingrod3" };
		model="MuchStuffPack\MSP_Storage_proxies\fishingrods\fishing_rod3.p3d";
	};
	class Proxyfishing_rod4: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = {	"fishingrod4" };
		model="MuchStuffPack\MSP_Storage_proxies\fishingrods\fishing_rod4.p3d";
	};
	class Proxyfishing_rod5: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = {	"fishingrod5" };
		model="MuchStuffPack\MSP_Storage_proxies\fishingrods\fishing_rod5.p3d";
	};
	class Proxyfishing_rod6: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = {	"fishingrod6" };
		model="MuchStuffPack\MSP_Storage_proxies\fishingrods\fishing_rod6.p3d";
	};
	class Proxyfishing_rod7: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = {	"fishingrod7" };
		model="MuchStuffPack\MSP_Storage_proxies\fishingrods\fishing_rod7.p3d";
	};
	class Proxyfishing_rod8: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = {	"fishingrod8" };
		model="MuchStuffPack\MSP_Storage_proxies\fishingrods\fishing_rod8.p3d";
	};
	class Proxyfishing_rod9: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = {	"fishingrod9" };
		model="MuchStuffPack\MSP_Storage_proxies\fishingrods\fishing_rod9.p3d";
	};
	class Proxyfishing_rod10: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = {	"fishingrod10" };
		model="MuchStuffPack\MSP_Storage_proxies\fishingrods\fishing_rod10.p3d";
	};
	class ProxyWaterbarrel1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "WaterBarrel1" };
		model="\MuchStuffPack\MSP_Storage_proxies\Waterbarrel1.p3d";
	};
	class ProxyValve1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Valve" };
		model="\MuchStuffPack\MSP_Storage_proxies\Valve1.p3d";
	};
	class Proxygaslight: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "GasLamp" };
		model="\dz\gear\cooking\GasLight.p3d";
	};
	class Proxyaxe1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Axe1" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\axe1.p3d";
	};
	class Proxypickaxe1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Pickaxe1" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\pickaxe1.p3d";
	};
	class Proxypliers1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Pliers1" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\pliers1.p3d";
	};
	class Proxyhatchet1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Hatchet1" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\hatchet1.p3d";
	};
	class Proxyhatchet2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Hatchet2" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\hatchet2.p3d";
	};
	class Proxyhatchet3: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Hatchet3" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\hatchet3.p3d";
	};
	class Proxyhatchet4: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Hatchet4" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\hatchet4.p3d";
	};
	class Proxyhatchet5: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Hatchet" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\hatchet5.p3d";
	};
	class Proxyscrewdriver1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Screwdriver1" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\screwdriver1.p3d";
	};
	class Proxyscrewdriver2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Screwdriver2" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\screwdriver2.p3d";
	};
	class Proxyshovel1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shovel1" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\shovel1.p3d";
	};
	
	class Proxyhammer1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Hammer1" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\hammer1.p3d";
	};
	class Proxyhammer2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Hammer2" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\hammer2.p3d";
	};
	class Proxyhammer3: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Hammer3" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\hammer3.p3d";
	};
	class Proxysaw1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Saw1" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\saw1.p3d";
	};
	class Proxysaw2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Saw2" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\saw2.p3d";
	};
	class Proxysaw3: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Saw3" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\saw3.p3d";
	};
	class Proxywire1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Wire1" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\wire1.p3d";
	};
	class Proxywire2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Wire2" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\wire2.p3d";
	};
	class Proxywire3: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Wire3" };
		model="\MuchStuffPack\MSP_Storage_proxies\tools\wire3.p3d";
	};
	class ProxyAmmoBox1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "AmmoBox1" };
		model="\MuchStuffPack\MSP_Storage_proxies\AmmoBox1.p3d";
	};
	class ProxyAmmoBox2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "AmmoBox2" };
		model="\MuchStuffPack\MSP_Storage_proxies\AmmoBox2.p3d";
	};
	class ProxyAmmoBox3: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "AmmoBox3" };
		model="\MuchStuffPack\MSP_Storage_proxies\AmmoBox3.p3d";
	};
	class Proxygrenade1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "FGrenade1" };
		model="\MuchStuffPack\MSP_Storage_proxies\grenade1.p3d";
	};
	class Proxygrenade2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "FGrenade2" };
		model="\MuchStuffPack\MSP_Storage_proxies\grenade2.p3d";
	};
	class Proxygrenade3: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "FGrenade3" };
		model="\MuchStuffPack\MSP_Storage_proxies\grenade3.p3d";
	};
	class Proxygrenade4: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "FGrenade4" };
		model="\MuchStuffPack\MSP_Storage_proxies\grenade4.p3d";
	};
	class Proxygrenade5: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "FGrenade5" };
		model="\MuchStuffPack\MSP_Storage_proxies\grenade5.p3d";
	};
	class Proxygrenade6: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "FGrenade6" };
		model="\MuchStuffPack\MSP_Storage_proxies\grenade6.p3d";
	};
	class Proxygrenade7: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "FGrenade7" };
		model="\MuchStuffPack\MSP_Storage_proxies\grenade7.p3d";
	};
	class Proxygrenade8: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "FGrenade8" };
		model="\MuchStuffPack\MSP_Storage_proxies\grenade8.p3d";
	};
	class Proxygrenade9: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "FGrenade9" };
		model="\MuchStuffPack\MSP_Storage_proxies\grenade9.p3d";
	};
	class Proxygrenade10: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "FGrenade10" };
		model="\MuchStuffPack\MSP_Storage_proxies\grenade10.p3d";
	};
	class Proxyshoulder1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder1" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder1.p3d";
	};
	class Proxyshoulder2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder2" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder2.p3d";
	};
	class Proxyshoulder3: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder3" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder3.p3d";
	};
	class Proxyshoulder4: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder4" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder4.p3d";
	};
	class Proxyshoulder5: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder5" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder5.p3d";
	};
	class Proxyshoulder6: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder6" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder6.p3d";
	};
	class Proxyshoulder7: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder7" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder7.p3d";
	};
	class Proxyshoulder8: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder8" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder8.p3d";
	};
	class Proxyshoulder9: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder9" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder9.p3d";
	};
	class Proxyshoulder10: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder10" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder10.p3d";
	};
	class Proxyshoulder11: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder11" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder11.p3d";
	};
	class Proxyshoulder12: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder12" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder12.p3d";
	};
	class Proxyshoulder13: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder13" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder13.p3d";
	};
	class Proxyshoulder14: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder14" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder14.p3d";
	};
	class Proxyshoulder15: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder15" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder15.p3d";
	};
	class Proxyshoulder16: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder16" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder16.p3d";
	};
	class Proxyshoulder17: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder17" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder17.p3d";
	};
	class Proxyshoulder18: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder18" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder18.p3d";
	};
	class Proxyshoulder19: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder19" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder19.p3d";
	};
	class Proxyshoulder20: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Shoulder20" };
		model="\MuchStuffPack\MSP_Storage_proxies\shoulder20.p3d";
	};
	class ProxySword1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Sword1" };
		model="\MuchStuffPack\MSP_Storage_proxies\Sword1.p3d";
	};
	class ProxySword2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Sword2" };
		model="\MuchStuffPack\MSP_Storage_proxies\Sword2.p3d";
	};
	class ProxySword3: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Sword3" };
		model="\MuchStuffPack\MSP_Storage_proxies\Sword3.p3d";
	};
	
	class Proxybook1: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book1" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book1.p3d";
	};
	class Proxybook2: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book2" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book2.p3d";
	};
	class Proxybook3: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book3" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book3.p3d";
	};
	class Proxybook4: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book4" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book4.p3d";
	};
	class Proxybook5: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book5" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book5.p3d";
	};
	class Proxybook6: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book6" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book6.p3d";
	};
	class Proxybook7: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book7" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book7.p3d";
	};
	class Proxybook8: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book8" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book8.p3d";
	};
	class Proxybook9: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book9" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book9.p3d";
	};
	class Proxybook10: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book10" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book10.p3d";
	};
	class Proxybook11: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book11" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book11.p3d";
	};
	class Proxybook12: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book12" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book12.p3d";
	};
	class Proxybook13: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book13" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book13.p3d";
	};
	class Proxybook14: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book14" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book14.p3d";
	};
	class Proxybook15: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book15" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book15.p3d";
	};
	class Proxybook16: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book16" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book16.p3d";
	};
	class Proxybook17: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book17" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book17.p3d";
	};
	class Proxybook18: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book18" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book18.p3d";
	};
	class Proxybook19: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book19" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book19.p3d";
	};
	class Proxybook20: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book20" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book20.p3d";
	};
	class Proxybook21: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book21" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book21.p3d";
	};
	class Proxybook22: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book22" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book22.p3d";
	};
	class Proxybook23: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book23" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book23.p3d";
	};
	class Proxybook24: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book24" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book24.p3d";
	};
	class Proxybook25: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book25" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book25.p3d";
	};
	class Proxybook26: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book26" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book26.p3d";
	};
	class Proxybook27: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book27" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book27.p3d";
	};
	class Proxybook28: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book28" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book28.p3d";
	};
	class Proxybook29: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book29" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book29.p3d";
	};
	class Proxybook30: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book30" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book30.p3d";
	};
	class Proxybook31: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book31" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book31.p3d";
	};
	class Proxybook32: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book32" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book32.p3d";
	};
	class Proxybook33: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book33" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book33.p3d";
	};
	class Proxybook34: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book34" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book34.p3d";
	};
	class Proxybook35: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book35" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book35.p3d";
	};
	class Proxybook36: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book36" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book36.p3d";
	};
	class Proxybook37: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book37" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book37.p3d";
	};
	class Proxybook38: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book38" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book38.p3d";
	};
	class Proxybook39: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book39" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book39.p3d";
	};
	class Proxybook40: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book40" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book40.p3d";
	};
	class Proxybook41: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book41" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book41.p3d";
	};
	class Proxybook42: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book42" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book42.p3d";
	};
	class Proxybook43: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book43" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book43.p3d";
	};
	class Proxybook44: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book44" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book44.p3d";
	};
	class Proxybook45: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book45" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book45.p3d";
	};
	class Proxybook46: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book46" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book46.p3d";
	};
	class Proxybook47: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book47" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book47.p3d";
	};
	class Proxybook48: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book48" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book48.p3d";
	};
	class Proxybook49: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book49" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book49.p3d";
	};
	class Proxybook50: ProxyAttachment
	{
		scope=2;
		inventorySlot[] = { "Book50" };
		model="\MuchStuffPack\MSP_Storage_proxies\books\book50.p3d";
	};
};
