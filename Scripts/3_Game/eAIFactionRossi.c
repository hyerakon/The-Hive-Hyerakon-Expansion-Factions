[eAIRegisterFaction(eAIFactionRossi)]
class eAIFactionRossi : eAIFaction
{
	void eAIFactionRossi()
	{
		m_Loadout = "RossiLoadout";

		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name);
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?		
		
		if (other.IsInherited(eAIFactionVerde)) return true;
		
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
		
        m_Loadout = "RossiLoadout";

		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (Wanted)");
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
};