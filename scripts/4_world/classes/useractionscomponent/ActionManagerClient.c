modded class ActionManagerClient
{
	override bool CanSetActionFromInventory(ItemBase mainItem, ItemBase targetItem)
	{
		super.CanSetActionFromInventory( mainItem, targetItem );
		
		ItemBase itemInHand = m_Player.GetItemInHands();
		ActionTarget target;
		target = new ActionTarget(targetItem, null, -1, vector.Zero, -1);
		bool hasTarget = targetItem != NULL;
		
		if (mainItem)
		{
			array<ActionBase_Basic> actions;
			ActionBase picked_action;
			
			
			//third click continuous actions
			mainItem.GetActions(ClickContinuousDefaultActionInput, actions);
			if (actions)
			{
				for ( int k = 0; k < actions.Count(); k++ )
				{
					picked_action = ActionBase.Cast(actions[k]);
					if ( picked_action && picked_action.HasTarget() && picked_action.Can(m_Player, target, itemInHand) && picked_action.CanBeSetFromInventory() )
					{
						if( hasTarget == picked_action.HasTarget() )
							return true;
					}
				}
			}
		}
		
		return false;
	}
	
	override void SetActionFromInventory(ItemBase mainItem, ItemBase targetItem)
	{
		super.SetActionFromInventory(mainItem, targetItem);
		
		ItemBase itemInHand = m_Player.GetItemInHands();
		ActionTarget target;
		target = new ActionTarget(targetItem, null, -1, vector.Zero, -1);
		bool hasTarget = targetItem != NULL;
		
		if ( mainItem )
		{
			array<ActionBase_Basic> actions;
			ActionBase picked_action;
			
			//third click continuous actions
			mainItem.GetActions(ClickContinuousDefaultActionInput, actions);
			if (actions)
			{
				for ( int k = 0; k < actions.Count(); k++ )
				{
					picked_action = ActionBase.Cast(actions[k]);
					if ( picked_action && picked_action.HasTarget() && picked_action.Can(m_Player,target, itemInHand) && picked_action.CanBeSetFromInventory() )
					{
						if ( hasTarget == picked_action.HasTarget() )
						{
							SetInventoryAction( picked_action, target, itemInHand );
							return;
						}
					}
				}
			}
		}
	}
}