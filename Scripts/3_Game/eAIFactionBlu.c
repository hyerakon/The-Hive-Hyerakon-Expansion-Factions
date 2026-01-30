[eAIRegisterFaction(eAIFactionBlu)]
class eAIFactionBlu : eAIFaction
{
	void eAIFactionBlu()
	{
        //m_Loadout = "BluLoadout";
		m_Loadout = extractLoadout();
		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name);
	}

	private string extractLoadout()
	{
		string loadout = "BluLoadout";

		int selector = Math.RandomIntInclusive(0, 9);
		if (selector <= 5) loadout = "BluT1Loadout";
		if (selector >= 6 && selector <= 8) loadout = "BluT2Loadout";
		if (selector == 9) loadout = "BluT3Loadout";

		return loadout;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?		
		
		if (other.IsInherited(eAIFactionVerdi)) return true;
		
		if (other.IsInherited(eAIFactionBlu)) return true;
		if (other.IsInherited(eAIFactionBluWanted)) return true;


		if (other.IsInherited(eAIFactionGialli)) return true;
		
        
		if (other.IsGuard()) return true;
		if (other.IsPassive()) return true;
		

		return false;
	}

	override string GetDisplayName()
	{
		return "#STR_BLUE_DISPLAYNAME";
	}

	override string GetDefaultLoadout()
	{
		return extractLoadout();
	}
};

[eAIRegisterFaction(eAIFactionBluGod)]
class eAIFactionBluGod : eAIFaction
{
	void eAIFactionBluGod()
	{
		m_IsInvincible = true;

		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (God)");
	}
};

[eAIRegisterFaction(eAIFactionBluWanted)]
class eAIFactionBluWanted : eAIFaction
{
	void eAIFactionBluWanted()
	{
        //m_Loadout = "BluLoadout";
		m_Loadout = extractLoadout();
		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (Wanted)");
	}

	private string extractLoadout()
	{
		string loadout = "BluLoadout";

		int selector = Math.RandomIntInclusive(0, 9);
		if (selector <= 5) loadout = "BluT1Loadout";
		if (selector >= 6 && selector <= 8) loadout = "BluT2Loadout";
		if (selector == 9) loadout = "BluT3Loadout";

		return loadout;
	}

	
	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionBlu)) return true;
        
		return false;
	}

	override string GetDisplayName()
	{
		return "#STR_BLUE_WANTED_DISPLAYNAME";
	}

	override string GetDefaultLoadout()
	{
		return extractLoadout();
	}
};