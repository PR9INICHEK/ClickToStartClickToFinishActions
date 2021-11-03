modded class ActionConstructor
{
	override void RegisterActions(TTypenameArray actions)
	{
		super.RegisterActions(actions);
		
		// Click Continuous use actions
		actions.Insert(ActionClickFillBottleBase);
	}
}