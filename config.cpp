class CfgPatches
{
	class ClickToStartClickToFinishActionsScripts
	{
		requiredAddons[]={};
	};
};
class CfgMods
{
	class ClickToStartClickToFinishActions
	{
		type="mod";
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"ClickToStartClickToFinishActions/scripts/4_World"
				};
			};
		};
	};
};
