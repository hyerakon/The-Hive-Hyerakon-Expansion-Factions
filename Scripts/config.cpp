#define _ARMA_

class CfgPatches
{
	class TheHive_Hyerakon_Expansion_Factions_Scripts
	{
		requiredAddons[] = 
		{
			"DayZExpansion_AI_Scripts"
		};
	};
};
class CfgMods
{
	class TheHive_Hyerakon_Expansion_Factions
	{
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "The Hive - Hyerakon - Expansion Factions";
		credits = "DayZ Expansion and Hyerakon";
		author = "Hyerakon - Luigi Francesco Ricatti";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"TheHive_Hyerakon_Expansion_Factions/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"TheHive_Hyerakon_Expansion_Factions/Scripts/4_World"};
			};
		};
	};
};