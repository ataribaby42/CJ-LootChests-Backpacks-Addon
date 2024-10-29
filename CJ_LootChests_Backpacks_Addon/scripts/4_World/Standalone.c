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

class CJ_LootChest_HuntingBag_Base : CJ_WoodenCrate_Base 
{    
	override void SoundChestOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "LootBackpackOpenNoZip_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWoodenLootChestOpen);
	}
};

class CJ_LootChest_TortillaBag_Base : CJ_WoodenCrate_Base 
{    
	override void SoundChestOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "LootBackpackOpenNoZip_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWoodenLootChestOpen);
	}
};

class CJ_LootChest_QuiltedJacket_Base : CJ_WoodenCrate_Base 
{    
	override void SoundChestOpenPlay()
	{
		EffectSound sound =	SEffectManager.PlaySound( "LootJacketOpenZip_SoundSet", GetPosition() );
		sound.SetSoundAutodestroy( true );
	}
	
	override void SetActions()
	{
		super.SetActions();
		AddAction(ActionWoodenLootChestOpen);
	}
};


