[eAIRegisterFaction(eAIFactionRossi)]
class eAIFactionRossi : eAIFaction
{
	void eAIFactionRossi()
	{
		m_Name = "#STR_RED_DISPLAYNAME";
        m_Loadout = "RossiLoadout";
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

	override string GetName()
	{
		return m_Name;
	}
};

[eAIRegisterFaction(eAIFactionRossiGod)]
class eAIFactionRossiGod : eAIFactionRossi
{
	void eAIFactionRossiGod()
	{
		m_IsInvincible = true;
	}
};

[eAIRegisterFaction(eAIFactionRossiWanted)]
class eAIFactionRossiWanted : eAIFaction
{
	void eAIFactionRossiWanted()
	{
		m_Name = "#STR_RED_WANTED_DISPLAYNAME";
        m_Loadout = "RossiLoadout";
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

	override string GetName()
	{
		return m_Name;
	}
};