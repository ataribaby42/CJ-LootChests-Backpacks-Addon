class CfgPatches
{
	class CJ_LootChests_Backpacks_Addon
	{
		units[]=
		{
			"CJ_LootChest_TaloonBag_Blue",
			"CJ_LootChest_TaloonBag_Green",
			"CJ_LootChest_TaloonBag_Orange",
			"CJ_LootChest_TaloonBag_Violet",
			"CJ_LootChest_MountainBag_Blue",
			"CJ_LootChest_MountainBag_Red",
			"CJ_LootChest_MountainBag_Orange",
			"CJ_LootChest_MountainBag_Green",
			"CJ_LootChest_HuntingBag"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"JM_CF_Scripts",
			"CJ_LootChests"
		};
	};
};
class CfgMods
{
	class CJ_LootChests_Backpacks_Addon
	{
		dir="CJ_LootChests_Backpacks_Addon";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="CJ_LootChests_Backpacks_Addon";
		credits="";
		author="ataribaby";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"CJ_LootChests_Backpacks_Addon/scripts/4_World"
				};
			};
		};
	};
};
class CfgVehicles
{
	class CJ_WoodenCrate_Base;
	class CJ_LootChest_TaloonBag_Base: CJ_WoodenCrate_Base
	{
		scope=0;
		displayName="Taloon Supply Backpack";
		itemsCargoSize[]={7,6};
		descriptionShort="Backpack to store some supplies.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		model="\dz\characters\backpacks\taloon_g.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\taloon.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\taloon.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\taloon_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\taloon_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\taloon_destruct.rvmat"
							}
						}
					};
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
	class CJ_LootChest_TaloonBag_Blue: CJ_LootChest_TaloonBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa",
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa",
			"DZ\characters\backpacks\data\Taloon_Blue_co.paa"
		};
	};
	class CJ_LootChest_TaloonBag_Green: CJ_LootChest_TaloonBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Green_co.paa",
			"DZ\characters\backpacks\data\Taloon_Green_co.paa",
			"DZ\characters\backpacks\data\Taloon_Green_co.paa"
		};
	};
	class CJ_LootChest_TaloonBag_Orange: CJ_LootChest_TaloonBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Orange_co.paa",
			"DZ\characters\backpacks\data\Taloon_Orange_co.paa",
			"DZ\characters\backpacks\data\Taloon_Orange_co.paa"
		};
	};
	class CJ_LootChest_TaloonBag_Violet: CJ_LootChest_TaloonBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Taloon_Violet_co.paa",
			"DZ\characters\backpacks\data\Taloon_Violet_co.paa",
			"DZ\characters\backpacks\data\Taloon_Violet_co.paa"
		};
	};
	class CJ_LootChest_MountainBag_Base: CJ_WoodenCrate_Base
	{
		scope=0;
		displayName="Mountain Supply Backpack";
		itemsCargoSize[]={10,8};
		descriptionShort="Backpack to store some supplies.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		model="\dz\characters\backpacks\mountain_g.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\mountain.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\mountain.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\mountain_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\mountain_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\mountain_destruct.rvmat"
							}
						}
					};
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
	class CJ_LootChest_MountainBag_Blue: CJ_LootChest_MountainBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Blue_co.paa",
			"DZ\characters\backpacks\data\Mountain_Blue_co.paa",
			"DZ\characters\backpacks\data\Mountain_Blue_co.paa"
		};
	};
	class CJ_LootChest_MountainBag_Red: CJ_LootChest_MountainBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Red_co.paa",
			"DZ\characters\backpacks\data\Mountain_Red_co.paa",
			"DZ\characters\backpacks\data\Mountain_Red_co.paa"
		};
	};
	class CJ_LootChest_MountainBag_Orange: CJ_LootChest_MountainBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Orange_co.paa",
			"DZ\characters\backpacks\data\Mountain_Orange_co.paa",
			"DZ\characters\backpacks\data\Mountain_Orange_co.paa"
		};
	};
	class CJ_LootChest_MountainBag_Green: CJ_LootChest_MountainBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\backpacks\data\Mountain_Green_co.paa",
			"DZ\characters\backpacks\data\Mountain_Green_co.paa",
			"DZ\characters\backpacks\data\Mountain_Green_co.paa"
		};
	};
	class CJ_LootChest_HuntingBag_Base: CJ_WoodenCrate_Base
	{
		scope=0;
		displayName="Hunting Supply Backpack";
		itemsCargoSize[]={9,7};
		descriptionShort="Backpack to store some supplies.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		model="\dz\characters\backpacks\hunting_g.p3d";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\Characters\backpacks\data\hunting.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\hunting.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\hunting_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\hunting_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\hunting_destruct.rvmat"
							}
						}
					};
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
	class CJ_LootChest_HuntingBag: CJ_LootChest_HuntingBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\hunting_co.paa",
			"\dz\characters\backpacks\data\hunting_co.paa",
			"\dz\characters\backpacks\data\hunting_co.paa"
		};
	};
};
class CfgSoundShaders
{
	class LootBackpackOpen_SoundShader
	{
		samples[]=
		{
			
			{
				"CJ_LootChests_Backpacks_Addon\sound\zip_open",
				1
			}
		};
		range=10;
		volume=10;
	};
	class LootBackpackOpenNoZip_SoundShader
	{
		samples[]=
		{
			
			{
				"CJ_LootChests_Backpacks_Addon\sound\bag_open",
				1
			}
		};
		range=10;
		volume=10;
	};
};
class CfgSoundSets
{
	class LootBackpackOpenNoZip_SoundSet
	{
		soundShaders[]=
		{
			"LootBackpackOpenNoZip_SoundShader"
		};
	};
};
