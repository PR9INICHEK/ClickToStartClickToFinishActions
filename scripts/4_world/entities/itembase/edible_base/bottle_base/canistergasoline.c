modded class CanisterGasoline
{
	override void SetActions()
	{
		super.SetActions();
		
		RemoveAction(ActionFillBottleBase);
		
		AddAction(ActionClickFillBottleBase);
	}
}