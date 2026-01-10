[eAIRegisterFaction(eAIFactionRossi)]
class eAIFactionRossi : eAIFaction
{
	void eAIFactionRossi()
	{
		m_Name = "Legione Rossa";
        m_Loadout = "RossiLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?		
		
		if (other.IsInherited(eAIFactionVerde)) return true;
		
		if (other.IsInherited(eAIFactionRossi)) return true;
		if (other.IsInherited(eAIFactionRossiWanted)) return true;
		
		
		if (other.IsInherited(eAIFactionGialli)) return true;   
		
        
		if (other.IsInherited(eAIFactionEast)) return true; 
		if (other.IsInherited(eAIFactionWest)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsGuard()) return true;
		if (other.IsPassive()) return true;
		
		return false;
	}

	override string GetDisplayName()
	{
		return "Legione Rossa";
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
		m_Name = "Ricercato - L.Rossa";
        m_Loadout = "RossiLoadout";
	}
	
	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionRossi)) return true;
		
		return false;
	}

	override string GetDisplayName()
	{
		return "Ricercato - Legione Rossa";
	}

	override string GetName()
	{
		return m_Name;
	}
};