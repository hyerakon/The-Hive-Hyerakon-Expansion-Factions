[eAIRegisterFaction(eAIFactionGialli)]
class eAIFactionGialli : eAIFaction
{
	void eAIFactionGialli()
	{
		m_Name = "Caschi Gialli";
        m_Loadout = "CaschiGialliLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?

		if (other.IsInherited(eAIFactionVerde)) return true;
		if (other.IsInherited(eAIFactionVerdeWanted)) return true;
				
		if (other.IsInherited(eAIFactionBlu)) return true;
		if (other.IsInherited(eAIFactionBluWanted)) return true;

        if (other.IsInherited(eAIFactionRossi)) return true;
        if (other.IsInherited(eAIFactionRossiWanted)) return true;
		
		
		if (other.IsInherited(eAIFactionGialli)) return true;
		if (other.IsInherited(eAIFactionGialliElite)) return true;
		
        
		if (other.IsInherited(eAIFactionEast)) return true; 
		if (other.IsInherited(eAIFactionWest)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsGuard()) return true;
		if (other.IsPassive()) return true;
		

		return false;
	}

	override string GetDisplayName()
	{
		return "Caschi Gialli";
	}

	override string GetName()
	{
		return m_Name;
	}
};

[eAIRegisterFaction(eAIFactionGialliGod)]
class eAIFactionGialliGod : eAIFactionGialli
{
	void eAIFactionGialliGod()
	{
		m_IsInvincible = true;
	}
};

[eAIRegisterFaction(eAIFactionGialliNBC)]
class eAIFactionGialliNBC : eAIFactionGialli
{
	void eAIFactionGialliNBC()
	{
		m_Name = "CG - NBC";
		m_Loadout = "CaschiGialli_NBC_Loadout";
	}

	override string GetDisplayName()
	{
		return "Ricercatori - Caschi Gialli";
	}

	override string GetName()
	{
		return m_Name;
	}
};

[eAIRegisterFaction(eAIFactionGialliGodNBC)]
class eAIFactionGialliGodNBC : eAIFactionGialliNBC
{
	void eAIFactionGialliGodNBC()
	{
		m_IsInvincible = true;
	}
};

[eAIRegisterFaction(eAIFactionGialliElite)]
class eAIFactionGialliElite : eAIFaction
{
	void eAIFactionGialliElite()
	{
		m_Name = "CG - Elite";
        m_Loadout = "CaschiGialliLoadout";
	}
	
	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?

		if (other.IsInherited(eAIFactionVerde)) return true;
		if (other.IsInherited(eAIFactionVerdeWanted)) return true;
				
		if (other.IsInherited(eAIFactionBlu)) return true;
		if (other.IsInherited(eAIFactionBluWanted)) return true;

        if (other.IsInherited(eAIFactionRossi)) return true;
        if (other.IsInherited(eAIFactionRossiWanted)) return true;
		
		
		if (other.IsInherited(eAIFactionGialli)) return true;
		if (other.IsInherited(eAIFactionGialliElite)) return true;
		
        
		if (other.IsInherited(eAIFactionEast)) return true; 
		if (other.IsInherited(eAIFactionWest)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsGuard()) return true;
		if (other.IsPassive()) return true;
		

		return false;
	}

	override string GetDisplayName()
	{
		return "Elite - Caschi Gialli";
	}

	override string GetName()
	{
		return m_Name;
	}
};

[eAIRegisterFaction(eAIFactionGialliEliteGod)]
class eAIFactionGialliEliteGod : eAIFactionGialliElite
{
	void eAIFactionGialliEliteGod()
	{
		m_IsInvincible = true;
	}
};