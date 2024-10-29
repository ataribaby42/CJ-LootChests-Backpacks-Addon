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
			"CJ_LootChest_HuntingBag",
			"CJ_LootChest_TortillaBag",
			"CJ_LootChest_TortillaBag_Winter",
			"CJ_LootChest_QuiltedJacket_Black",
			"CJ_LootChest_QuiltedJacket_Green",
			"CJ_LootChest_QuiltedJacket_Blue",
			"CJ_LootChest_QuiltedJacket_Red",
			"CJ_LootChest_QuiltedJacket_Grey",
			"CJ_LootChest_QuiltedJacket_Orange",
			"CJ_LootChest_QuiltedJacket_Yellow",
			"CJ_LootChest_QuiltedJacket_Violet"
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
	class CJ_LootChest_TortillaBag_Base: CJ_WoodenCrate_Base
	{
		scope=0;
		displayName="Combat Supply Backpack";
		itemsCargoSize[]={10,9};
		descriptionShort="Backpack to store some supplies.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		model="\dz\characters\backpacks\tortilla_g.p3d";
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
								"DZ\Characters\backpacks\data\tortila.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\Characters\backpacks\data\tortila.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\Characters\backpacks\data\tortila_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\Characters\backpacks\data\tortila_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\Characters\backpacks\data\tortila_destruct.rvmat"
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
	class CJ_LootChest_TortillaBag: CJ_LootChest_TortillaBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\tortila_co.paa",
			"\dz\characters\backpacks\data\tortila_co.paa",
			"\dz\characters\backpacks\data\tortila_co.paa"
		};
	};
	class CJ_LootChest_TortillaBag_Winter: CJ_LootChest_TortillaBag_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\backpacks\data\tortila_winter_co.paa",
			"\dz\characters\backpacks\data\tortila_winter_co.paa",
			"\dz\characters\backpacks\data\tortila_winter_co.paa"
		};
	};
	class CJ_LootChest_QuiltedJacket_Base: CJ_WoodenCrate_Base
	{
		scope=0;
		displayName="Quilted Supply Jacket";
		itemsCargoSize[]={6,5};
		descriptionShort="Jacket to store some supplies.";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		model="\DZ\characters\tops\QuiltedJacket_g.p3d";
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
								"DZ\characters\tops\Data\QuiltedJacket.rvma"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\tops\Data\QuiltedJacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\tops\Data\QuiltedJacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\tops\Data\QuiltedJacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\tops\Data\QuiltedJacket_destruct.rvmat"
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
	class CJ_LootChest_QuiltedJacket_Black: CJ_LootChest_QuiltedJacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\QuiltedJacket_black_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_black_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_black_co.paa"
		};
	};
	class CJ_LootChest_QuiltedJacket_Green: CJ_LootChest_QuiltedJacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\QuiltedJacket_green_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_green_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_green_co.paa"
		};
	};
	class CJ_LootChest_QuiltedJacket_Blue: CJ_LootChest_QuiltedJacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\QuiltedJacket_blue_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_blue_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_blue_co.paa"
		};
	};
	class CJ_LootChest_QuiltedJacket_Red: CJ_LootChest_QuiltedJacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\QuiltedJacket_red_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_red_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_red_co.paa"
		};
	};
	class CJ_LootChest_QuiltedJacket_Grey: CJ_LootChest_QuiltedJacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\QuiltedJacket_grey_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_grey_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_grey_co.paa"
		};
	};
	class CJ_LootChest_QuiltedJacket_Orange: CJ_LootChest_QuiltedJacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\QuiltedJacket_orange_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_orange_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_orange_co.paa"
		};
	};
	class CJ_LootChest_QuiltedJacket_Yellow: CJ_LootChest_QuiltedJacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\QuiltedJacket_yellow_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_yellow_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_yellow_co.paa"
		};
	};
	class CJ_LootChest_QuiltedJacket_Violet: CJ_LootChest_QuiltedJacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\tops\data\QuiltedJacket_violet_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_violet_co.paa",
			"\dz\characters\tops\data\QuiltedJacket_violet_co.paa"
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
	class LootJacketOpenZip_SoundShader
	{
		samples[]=
		{
			
			{
				"CJ_LootChests_Backpacks_Addon\sound\zip_jacket_open",
				1
			}
		};
		range=10;
		volume=10;
	};
};
class CfgSoundSets
{
	class LootBackpackOpen_SoundSet
	{
		soundShaders[]=
		{
			"LootBackpackOpen_SoundShader"
		};
	};
	class LootBackpackOpenNoZip_SoundSet
	{
		soundShaders[]=
		{
			"LootBackpackOpenNoZip_SoundShader"
		};
	};
	class LootJacketOpenZip_SoundSet
	{
		soundShaders[]=
		{
			"LootJacketOpenZip_SoundShader"
		};
	};
};
