modded class ActionLoadMagazine
{
	override typename GetInputType()
	{
		return ClickContinuousDefaultActionInput;
	}
}

modded class ActionLoadMagazineQuick
{
	override typename GetInputType()
	{
		return ClickContinuousWeaponManipulationActionInput;
	}
}