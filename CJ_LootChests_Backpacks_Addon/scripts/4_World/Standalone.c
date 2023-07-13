class CJ_LootChest_TaloonBag_Base : CJ_WoodenCrate_Base 
{    
	override void SoundChestOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "LootBackpackOpen_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWoodenLootChestOpen);
	}
};

class CJ_LootChest_MountainBag_Base : CJ_WoodenCrate_Base 
{    
	override void SoundChestOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "LootBackpackOpen_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWoodenLootChestOpen);
	}
};



