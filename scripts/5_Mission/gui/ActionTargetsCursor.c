modded class ActionTargetsCursor
{
	protected ActionBase					m_ClickContinuous;
	
	override protected void GetActions()
	{
		super.GetActions();
		
		m_ClickContinuous = null;		
		
		m_ClickContinuous = m_AM.GetPossibleAction(ClickContinuousDefaultActionInput);
	}
	
	override protected void PrepareCursorContent()
	{
		super.PrepareCursorContent();
		
		SetActionWidget(m_ClickContinuous, GetActionDesc(m_ClickContinuous), "continuous", "continuous_action_name");
	}
}