[eAIRegisterFaction(eAIFactionRossi)]
class eAIFactionRossi : eAIFaction
{
	void eAIFactionRossi()
	{
		//m_Loadout = "RossiLoadout";
		m_Loadout = extractLoadout();

		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name);
	}

	private string extractLoadout()
	{
		string loadout = "RossiLoadout";

		int selector = Math.RandomIntInclusive(0, 9);
		if (selector <= 5) loadout = "RossiT1Loadout";
		if (selector >= 6 && selector <= 8) loadout = "RossiT2Loadout";
		if (selector == 9) loadout = "RossiT3Loadout";

		return loadout;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?		
		
		if (other.IsInherited(eAIFactionVerdi)) return true;
		
		if (other.IsInherited(eAIFactionRossi)) return true;
		if (other.IsInherited(eAIFactionRossiWanted)) return true;
		
		
		if (other.IsInherited(eAIFactionGialli)) return true;   
		
        
		if (other.IsGuard()) return true;
		if (other.IsPassive()) return true;
		
		return false;
	}

	override string GetDisplayName()
	{
		return "#STR_RED_DISPLAYNAME";
	}

	override string GetDefaultLoadout()
	{
		return extractLoadout();
	}
};

[eAIRegisterFaction(eAIFactionRossiGod)]
class eAIFactionRossiGod : eAIFactionRossi
{
	void eAIFactionRossiGod()
	{
		m_IsInvincible = true;

		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (God)");
	}
};

[eAIRegisterFaction(eAIFactionRossiWanted)]
class eAIFactionRossiWanted : eAIFaction
{
	void eAIFactionRossiWanted()
	{
		
        //m_Loadout = "RossiLoadout";
		m_Loadout = extractLoadout();
		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (Wanted)");
	}

	private string extractLoadout()
	{
		string loadout = "RossiLoadout";

		int selector = Math.RandomIntInclusive(0, 9);
		if (selector <= 5) loadout = "RossiT1Loadout";
		if (selector >= 6 && selector <= 8) loadout = "RossiT2Loadout";
		if (selector == 9) loadout = "RossiT3Loadout";

		return loadout;
	}

	
	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionRossi)) return true;
		
		return false;
	}

	override string GetDisplayName()
	{
		return "#STR_RED_WANTED_DISPLAYNAME";
	}

	override string GetDefaultLoadout()
	{
		return extractLoadout();
	}
};