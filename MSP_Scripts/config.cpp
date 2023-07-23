class CfgPatches
{
	class MSP_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"CodeLock",
			"DZ_Data"
		};
	};
};

class CfgMods
{
    class MuchStuffPack
    {
        dir = "MuchStuffPack";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MuchStuffPack";
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
                files[] = {"MuchStuffPack/MSP_Scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
	class Container_Base;
	class Msp_Item: Container_Base
	{
		scope=0;
		destroyOnEmpty=0;
		varQuantityDestroyOnMin=0;
		descriptionShort="This can be dismantled with a screwdriver, pliers or hammer.";
		quantityBar=1;
		carveNavmesh=1;
		bounding="BSphere";
		overrideDrawArea="3.0";
		visibilityModifier=0.94999999;
		canBeDigged=0;
		alignHologramToTerain=1;
		heavyItem=1;
		weight=10;
		itemSize[]={10,10};
		itemBehaviour=1;
		physLayer="item_large";
		simulation="inventoryItem";
		hiddenSelections[]=
		{
			"all"
		};			
		simpleHiddenSelections[]=
		{
			"proxy_weapons", "proxy_clothes", "proxy_other"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
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
						damage=0;
					};
				};
				class FragGrenade
				{
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
						damage=0;
					};
				};
			};
		};
	};

	class Msp_Kit: Container_Base
	{
		scope=0;
		displayName="Box Kit";
		descriptionShort="A cardboard box used to transport small items. Place to deploy item inside. The items can be dismantled with a screwdriver, pliers or hammer after deployment.";
		model="\MuchStuffPack\MSP_Storage_boxes\kitbox\kitbox.p3d";
		itemsCargoSize[]={0,0};
		itemSize[]={6,4};
		carveNavmesh=1;
		canBeDigged=0;
		simulation="inventoryItem";
		physLayer="item_small";
		rotationFlags=2;
		heavyItem=1;
		weight=3000;
		itemBehaviour=2;
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Storage_boxes\kitbox\kitbox_co.paa"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
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
						damage=0;
					};
				};
				class FragGrenade
				{
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
						damage=0;
					};
				};
			};
		};
	};

	class Msp_Storage_Base: Container_Base
	{
		scope=0;      
		itemSize[]={10,15};
		overrideDrawArea="8.0";
		physLayer="item_small";
		carveNavmesh=0;
		canBeDigged=0;
		weight=1000;
		itemBehaviour=1;
		itemsCargoSize[]={0,0};
		hiddenSelections[]=
		{
			"all"
		};			
		simpleHiddenSelections[]=
		{
			"proxy_weapons", "proxy_clothes", "proxy_other"
		};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
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
						damage=0;
					};
				};
				class FragGrenade
				{
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
						damage=0;
					};
				};
			};
		};
	};
	
	class Msp_InventoryStorage_Base : Container_Base 
	{
		scope=0;      
		itemSize[]={10,15};
		overrideDrawArea="8.0";
		physLayer="item_small";
		weight=1000;
		itemBehaviour=1;
		itemsCargoSize[]={0,0};
		allowOwnedCargoManipulation=1;
		repairableWithKits[]={2};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"all"
		};			
		simpleHiddenSelections[]=
		{
			"proxy_weapons", "proxy_clothes", "proxy_other"
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
				};
			};
		};
		soundImpactType="textile";
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};
	class Msp_AmmoStorage_Base : Msp_Storage_Base {};
	
	class Msp_Openable_Base: Msp_Item 
	{				
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Doors2
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Doors3
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Doors4
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};

	class Msp_Openable_Placeable_Base: Msp_Storage_Base
	{
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Doors2
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Doors3
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Doors4
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};

	class Msp_Fridge_Base : Msp_Item
	{
		class EnergyManager
		{
			hasIcon=1;
			powerSocketsCount=1;
			energyUsagePerSecond=0.03;
			cordTextureFile="DZ\gear\camping\Data\plug_black_CO.paa";
			cordLength=5;
			plugType=2;
			updateInterval=5;
		};						
		class AnimationSources
		{
			class Doors1
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class Doors2
			{
				source="user";
				initPhase=0;
				animPeriod=0.5;
			};
			class Doors3
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Doors4
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
		};
	};
	
	class Msp_Foldable_Item: Container_Base
	{
		descriptionShort="Deploy to unfold. Then it can be folded with your hands.";
		itemSize[] = {3,4};
		rotationFlags=16;
		weight = 2000;
		absorbency = 0;
		visibilityModifier=0.94999999;
		canBeDigged=0;
		alignHologramToTerain=1;
		itemBehaviour=2;
		physLayer="item_large";
		simulation="inventoryItem";
		hiddenSelections[]=
		{
			"all"
		};	
		class AnimationSources
		{
			class Placing
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class Inventory
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
		};
	};
};

class CfgSoundShaders
{
	class base_SoundShaderFlies
	{
		range=20;
		rangeCurve="defaultLFECurve";
		volume=3;
	};

    class MSP_doorMetalSlideLargeOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeOpen_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeOpen_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeOpen_4",
				1
			}
		};
	};

	
    class MSP_doorMetalSlideLargeClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeClose_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeClose_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalSlideLarge\doorMetalSlideLargeClose_4",
				1
			}
		};
	};

	class MSP_doorWoodGateSmallOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodGateSmall\doorWoodGateSmallOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodGateSmall\doorWoodGateSmallOpen_2",
				1
			}
		};
	};

	class MSP_doorWoodGateSmallClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodGateSmall\doorWoodGateSmallClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodGateSmall\doorWoodGateSmallClose_2",
				1
			}
		};
	};

	class MSP_doorMetalGateMeshOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalGateMesh\doorMetalGateMeshOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalGateMesh\doorMetalGateMeshOpen_1",
				1
			}
		};
	};

	class MSP_doorMetalGateMeshClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalGateMesh\doorMetalGateMeshClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalGateMesh\doorMetalGateMeshClose_1",
				1
			}
		};
	};

	class MSP_doorMetalGateOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalGate\doorMetalGateOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalGate\doorMetalGateOpen_2",
				1
			}
		};
	};

	class MSP_doorMetalGateClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalGate\doorMetalGateClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\MetalGate\doorMetalGateClose_2",
				1
			}
		};
	};

	
	class MSP_doorWoodSmallOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallOpen_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallOpen_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallOpen_4",
				1
			}
		};
	};

	class MSP_doorWoodSmallClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_4",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_5",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_6",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodSmall\doorWoodSmallClose_7",
				1
			}
		};
	};
	
	class MSP_doorWoodGreenhouseOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseOpen_2",
				1
			}
		};
	};

	class MSP_doorWoodGreenhouseClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseClose_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodGreenhouse\doorWoodGreenhouseClose_3",
				1
			}
		};
	};
	
	class MSP_doorMetalSmallOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalSmall\doorMetalSmallOpen_1",
				1
			}
		};
	};

	class MSP_doorMetalSmallClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\MetalSmall\doorMetalSmallClose_1",
				1
			}
		};
	};
	
	class MSP_doorWoodNolatchOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchOpen_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchOpen_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchOpen_4",
				1
			}
		};
	};

	class MSP_doorWoodNolatchClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchClose_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchClose_3",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\WoodNolatch\doorWoodNolatchClose_4",
				1
			}
		};
	};

	class MSP_doorMetalShedOpen_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\metalshed\doorMetalShedOpen_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\metalshed\doorMetalShedOpen_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\metalshed\doorMetalShedOpen_3",
				1
			}
		};
	};

	class MSP_doorMetalShedClose_SoundShader: base_SoundShaderFlies
	{
		samples[]=
		{
			{
				"\DZ\sounds\environment\buildings\doors\metalshed\doorMetalShedClose_1",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\metalshed\doorMetalShedClose_2",
				1
			},
			{
				"\DZ\sounds\environment\buildings\doors\metalshed\doorMetalShedClose_3",
				1
			}
		};
	};
	
	class baseCharacter_SoundShader;
    class MSP_RefrigeratorHumming_SoundShader: baseCharacter_SoundShader
	{
		range=15;
		volume=1;
		samples[]=
		{
			
			{
				"\MuchStuffPack\MSP_Scripts\4_World\Sounds\refrigerator_humming",
				1
			}
		};
	};
    class MSP_RefrigeratorClose_SoundShader: baseCharacter_SoundShader
	{
		range=15;
		volume=1;
		samples[]=
		{
			{
				"\MuchStuffPack\MSP_Scripts\4_World\Sounds\refrigerator_close",
				1
			}
		};
	};
    class MSP_RefrigeratorOpen_SoundShader: baseCharacter_SoundShader
	{
		range=15;
		volume=1;
		samples[]=
		{
			{
				"\MuchStuffPack\MSP_Scripts\4_World\Sounds\refrigerator_open",
				1
			}
		};
	};
};
class CfgSoundSets
{
	class base_SoundSet
	{
		sound3DProcessingType="defaultLFECurve";
		spatial=1;
		doppler=0;
		loop=0;
		volume=30;
	};

    class base_SoundSetLoop
	{
		sound3DProcessingType="defaultLFECurve";
		spatial=1;
		doppler=0;
		loop=1;
	};
    
	class MSP_doorMetalSlideLargeOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorMetalSlideLargeOpen_SoundShader"
		};
	};
	class MSP_doorMetalSlideLargeClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorMetalSlideLargeClose_SoundShader"
		};
	};
	class MSP_doorWoodGateSmallOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorWoodGateSmallOpen_SoundShader"
		};
	};
	
	class MSP_doorWoodGateSmallClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorWoodGateSmallClose_SoundShader"
		};
	};

	
	class MSP_doorMetalGateMeshOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorMetalGateMeshOpen_SoundShader"
		};
	};
	
	class MSP_doorMetalGateMeshClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorMetalGateMeshClose_SoundShader"
		};
	};
	
	class MSP_doorMetalGateOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorMetalGateOpen_SoundShader"
		};
	};
	
	class MSP_doorMetalGateClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorMetalGateClose_SoundShader"
		};
	};
	
	class MSP_doorWoodSmallOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorWoodSmallOpen_SoundShader"
		};
	};
	
	class MSP_doorWoodSmallClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorWoodSmallClose_SoundShader"
		};
	};
	
	class MSP_doorWoodGreenhouseOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorWoodGreenhouseOpen_SoundShader"
		};
	};
	
	class MSP_doorWoodGreenhouseClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorWoodGreenhouseClose_SoundShader"
		};
	};
	
	class MSP_doorMetalSmallOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorMetalSmallOpen_SoundShader"
		};
	};
	
	class MSP_doorMetalSmallClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorMetalSmallClose_SoundShader"
		};
	};
	
	class MSP_doorWoodNolatchOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorWoodNolatchOpen_SoundShader"
		};
	};
	
	class MSP_doorWoodNolatchClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorWoodNolatchClose_SoundShader"
		};
	};
	
	class MSP_doorMetalShedOpen_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorMetalShedOpen_SoundShader"
		};
	};
	
	class MSP_doorMetalShedClose_SoundSet: base_SoundSet
	{
		soundShaders[]=
		{
			"MSP_doorMetalShedClose_SoundShader"
		};
	};

	class baseCharacter_SoundSet;
	class MSP_RefrigeratorHumming_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"MSP_RefrigeratorHumming_SoundShader"
		};
		loop=1;
		volume=5;
	};
	class MSP_RefrigeratorClose_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"MSP_RefrigeratorClose_SoundShader"
		};
		volume=5;
	};
	class MSP_RefrigeratorOpen_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]=
		{
			"MSP_RefrigeratorOpen_SoundShader"
		};
		volume=5;
	};
};