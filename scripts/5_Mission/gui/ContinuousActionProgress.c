modded class ContinuousActionProgress
{
	override private void GetActions()
	{
		if(!m_AM) return;

		m_Action = null;
		m_ActionState = -1;
		m_Action = m_AM.GetRunningAction();

		if( m_Action && ( (m_Action.GetInput().GetInputType() == ActionInputType.AIT_CONTINUOUS) || (m_Action.GetInput().GetInputType() == ActionInputType.AIT_CLICKCONTINUOUS) ) )
			m_ActionState = m_AM.GetActionState(m_Action);
		else
			m_Action = null;
	}
}