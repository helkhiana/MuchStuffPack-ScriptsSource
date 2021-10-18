class CfgPatches
{
	class MSP_Weapons_Data
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Melee_Blunt",
			"DZ_Weapons_Melee_Blade"
		};
	};
};

class CfgMods
{
    class MSP_Weapons_Data
    {
        dir = "MSP_Weapons_Data";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "MSP_Weapons_Data";
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
                files[] = {"MuchStuffPack/MSP_Weapons_Data/scripts/3_Game"};
			};

            class worldScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Weapons_Data/scripts/4_World"};
			};

			class missionScriptModule
            {
                value = "";
                files[] = {"MuchStuffPack/MSP_Weapons_Data/scripts/5_Mission"};
			};
		};
    };
};

class CfgVehicles
{
	class BaseballBat;
	class Inventory_Base;
	class Msp_BeanBasher: BaseballBat
	{
		scope=2;
		displayName="Bean Basher";
		descriptionShort="An extremely strong melee weapon to bash zombies head in";
		model="\MuchStuffPack\MSP_Weapons_Data\beanbasher\beanbasher.p3d";
		itemBehaviour=2;
		itemSize[]={3,6};
		hiddenSelections[]=
		{
			"all"
		};   
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Weapons_Data\beanbasher\beanbasher_co.paa"
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBeanBasher";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeBeanBasher_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeBeanBasher_Heavy";
				range=4.0;
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
								"MuchStuffPack\MSP_Weapons_Data\beanbasher\beanbasher.rvmat"								
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\beanbasher\beanbasher.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\beanbasher\beanbasher_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\beanbasher\beanbasher_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\beanbasher\beanbasher_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class Msp_PipeAxe: Msp_BeanBasher
	{
		scope=2;
		displayName="Pipe Axe";
		descriptionShort="An extremely strong melee weapon to bash zombies head in";
		model="\MuchStuffPack\MSP_Weapons_Data\pipeaxe\pipeaxe.p3d";	
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Weapons_Data\pipeaxe\pipeaxe_co.paa"
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
								"MuchStuffPack\MSP_Weapons_Data\pipeaxe\pipeaxe.rvmat"								
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\pipeaxe\pipeaxe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\pipeaxe\pipeaxe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\pipeaxe\pipeaxe_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\pipeaxe\pipeaxe_destruct.rvmat"
							}
						}
					};
				};
			};
		};	
	};

	class Msp_PlainBat: BaseballBat
	{
		scope=2;
		displayName="Plain Baseball Bat Red";
		descriptionShort="An extremely strong melee weapon to bash zombies head in";
		model="\MuchStuffPack\MSP_Weapons_Data\murderbat\murderbat.p3d";
		itemSize[]={2,6};
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Weapons_Data\murderbat\murderbat_co.paa"
		};
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeMSPBat";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeMSPBat_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeMSPBat_Heavy";
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
								"MuchStuffPack\MSP_Weapons_Data\murderbat\murderbat.rvmat"								
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\murderbat\murderbat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\murderbat\murderbat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\murderbat\murderbat_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\murderbat\murderbat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class Msp_PlainBat_Blue: Msp_PlainBat
	{
		scope=2;
		displayName="Plain Baseball Bat Blue";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Weapons_Data\murderbat\murderbat_blue_co.paa"
		};	
	};
	class Msp_PlainBat_Black: Msp_PlainBat
	{
		scope=2;
		displayName="Plain Baseball Bat Black";
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Weapons_Data\murderbat\murderbat_black_co.paa"
		};	
	};
	class Msp_GoodNightBat: BaseballBat
	{
		scope=2;
		displayName="Good night bat";
		model="\MuchStuffPack\MSP_Weapons_Data\goodnightbat\goodnight_bat.p3d";
		itemBehaviour=2;
		itemSize[]={2,6};
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Weapons_Data\goodnightbat\goodnight_bat_co.paa"
		};
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
								"MuchStuffPack\MSP_Weapons_Data\goodnightbat\goodnight_bat.rvmat"								
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\goodnightbat\goodnight_bat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\goodnightbat\goodnight_bat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\goodnightbat\goodnight_bat_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\goodnightbat\goodnight_bat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class CombatKnife;	
	class Msp_VorpalKnife: CombatKnife
	{
		scope=2;
		displayName="Vorpal Knife";
		descriptionShort="An extremely durable knife. Might have been used to commit a murder, possible hauntings.";
		model="\MuchStuffPack\MSP_Weapons_Data\vorpalknife\vorpalknife.p3d";
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
								"MuchStuffPack\MSP_Weapons_Data\vorpalknife\vorpalknife_blade.rvmat"								
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\vorpalknife\vorpalknife_blade.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\vorpalknife\vorpalknife_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\vorpalknife\vorpalknife_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\vorpalknife\vorpalknife_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class Msp_BlunderBat: BaseballBat
	{
		scope=2;
		displayName="Blunder Bat";
		descriptionShort="An extremely strong melee weapon to bash zombies head in";
		model="\MuchStuffPack\MSP_Weapons_Data\blunderbat\blunderbat.p3d";
		itemBehaviour=2;
		itemSize[]={3,6};
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Weapons_Data\blunderbat\blunderbat_co.paa"
		};	
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBlunderBat";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeBlunderBat_Heavy";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeBlunderBat_Heavy";
				range=4.0;
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
								"MuchStuffPack\MSP_Weapons_Data\blunderbat\blunderbat.rvmat"								
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\blunderbat\blunderbat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\blunderbat\blunderbat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\blunderbat\blunderbat_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\blunderbat\blunderbat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	
	class Msp_BassAxe: Msp_BlunderBat
	{
		scope=2;
		displayName="Bass Axe";
		descriptionShort="An extremely strong melee weapon to bash zombies head in";
		model="\MuchStuffPack\MSP_Weapons_Data\bassaxe\bassaxe.p3d";
		itemSize[]={8,3};
		rotationflags=17;
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Weapons_Data\bassaxe\bassaxe_co.paa"
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
								"MuchStuffPack\MSP_Weapons_Data\bassaxe\bassaxe.rvmat"								
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\bassaxe\bassaxe.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\bassaxe\bassaxe_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\bassaxe\bassaxe_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\bassaxe\bassaxe_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class Msp_BaseballBat: BaseballBat
	{
		scope=2;
		model="\MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement.p3d";
		itemBehaviour=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{						
						{
							1.0,
							{
								"MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement.rvmat"								
							}
						},						
						{
							0.7,
							{
								"MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement_worn.rvmat"
							}
						},						
						{
							0.5,
							{
								"MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement_damage.rvmat"
							}
						},						
						{
							0.3,
							{
								"MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement_damage.rvmat"
							}
						},						
						{
							0.0,							
							{
								"MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class Msp_BaseballBat_SawBarbedWire: Msp_BaseballBat
	{
		scope=2;
		itemSize[]={2,6};
		rotationflags=4;
		displayName="Baseball Bat Saw";
		descriptionShort="An upgraded baseball bat with a saw blade and barbed wire. If you're not on the receiving end, it may bring you good luck.";
		model="\MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_sawbarbedwire.p3d";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBeanBasher";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeBeanBasher_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeBeanBasher_Heavy";
				range=2.8;
			};
		};
	};

	class Msp_BaseballBat_Chain: Msp_BaseballBat
	{
		scope=2;
		displayName="Baseball Bat Chain";
		descriptionShort="An upgraded baseball bat with a chain. If you're not on the receiving end, it may bring you good luck.";
		model="\MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_chain.p3d";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeMSPBatB";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeMSPBatB_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeMSPBatB_Heavy";
				range=2.8;
			};
		};
	};
	class Msp_BaseballBat_Nailed: Msp_BaseballBat
	{
		scope=2;
		displayName="$STR_CfgVehicles_NailedBaseballBat0";
		descriptionShort="$STR_CfgVehicles_NailedBaseballBat1";
		model="\MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_nails.p3d";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeMSPBatB";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeMSPBatB_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeMSPBatB_Heavy";
				range=2.8;
			};
		};
	};
	class Msp_BaseballBat_BarbedWire: Msp_BaseballBat
	{
		scope=2;
		displayName="Baseball Bat Barbed Wire";
		descriptionShort="An upgraded baseball bat with barbed wire. If you're not on the receiving end, it may bring you good luck.";
		model="\MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_barbedwire.p3d";
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeMSPBatB";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeMSPBatB_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeMSPBatB_Heavy";
				range=2.8;
			};
		};
	};

	class Msp_Sawblade: Inventory_Base
	{
		scope=2;
		displayName="Sawblade";
		descriptionShort="An old sawblade, could be used in crafting.";
		model="\MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\material_saw.p3d";
		rotationFlags=34;
		weight=1200;
		itemSize[]={2,2};
		itemBehaviour=1;
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
								"MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement.rvmat"								
							}
						},						
						{
							0.7,
							{
								"MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement_worn.rvmat"
							}
						},						
						{
							0.5,
							{
								"MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement_damage.rvmat"
							}
						},						
						{
							0.3,
							{
								"MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement_damage.rvmat"
							}
						},						
						{
							0.0,							
							{
								"MuchStuffPack\MSP_Weapons_Data\baseballbatvariants\baseballbat_replacement_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		
	};

	class HuntingKnife;
	
	class Msp_Scissors: HuntingKnife
	{
		scope=2;
		displayName="Scissors";
		descriptionShort="These scissors are pretty old but still better than a knife to cut some rags. Not recommended to be used to open cans.";
		model="\MuchStuffPack\MSP_Weapons_Data\scissors\scissors.p3d";
		hiddenSelections[]=
		{
			"all"
		};
		hiddenSelectionsTextures[]=
		{
			"MuchStuffPack\MSP_Weapons_Data\scissors\scissors_co.paa"
		};
		openItemSpillRange[]={30,50};
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
								"MuchStuffPack\MSP_Weapons_Data\scissors\scissors.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\scissors\scissors.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\scissors\scissors_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\scissors\scissors_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"MuchStuffPack\MSP_Weapons_Data\scissors\scissors_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};

class CfgAmmo
{
	class MeleeMachete;
	class MeleeMachete_Heavy;
	class MeleeBat;
	class MeleeBat_Heavy;
	class MeleeBeanBasher: MeleeMachete
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=40;
			};
			class Blood
			{
				damage=50;
			};
			class Shock
			{
				damage=30;
			};
		};
	};
	class MeleeBeanBasher_Heavy: MeleeMachete_Heavy
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=65;
			};
			class Blood
			{
				damage=80;
			};
			class Shock
			{
				damage=40;
			};
		};
	};

	class MeleeBlunderBat: MeleeMachete
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=50;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=30;
			};
		};
	};
	class MeleeBlunderBat_Heavy: MeleeMachete_Heavy
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=75;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=40;
			};
		};
	};
	
	class MeleeMSPBat: MeleeBat
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=30;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=40;
			};
		};
	};
	class MeleeMSPBat_Heavy: MeleeBat_Heavy
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=40;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=50;
			};
		};
	};

	class MeleeMSPBatB: MeleeBat
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=30;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=40;
			};
		};
	};
	class MeleeMSPBatB_Heavy: MeleeBat_Heavy
	{
		class DamageApplied
		{
			type="Melee";
			bleedThreshold=1;
			class Health
			{
				damage=40;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=50;
			};
		};
	};


};