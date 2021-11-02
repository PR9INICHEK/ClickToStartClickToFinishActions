class ClickContinuousDefaultActionInput : ContinuousDefaultActionInput
{
	void ClickContinuousDefaultActionInput(PlayerBase player)
	{
		m_InputType = ActionInputType.AIT_CLICKCONTINUOUS;
	}	
}

class ClickContinuousWeaponManipulationActionInput : ClickContinuousDefaultActionInput
{
	void ClickContinuousWeaponManipulationActionInput(PlayerBase player)
	{
		SetInput("UAReloadMagazine");
	}
}