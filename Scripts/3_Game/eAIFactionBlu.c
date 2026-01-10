[eAIRegisterFaction(eAIFactionBlu)]
class eAIFactionBlu : eAIFaction
{
	void eAIFactionBlu()
	{
		m_Name = "Brigata Blu";
        m_Loadout = "BluLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?		
		
		if (other.IsInherited(eAIFactionVerde)) return true;
		
		if (other.IsInherited(eAIFactionBlu)) return true;
		if (other.IsInherited(eAIFactionBluWanted)) return true;


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
		return "Brigata Blu";
	}

	override string GetName()
	{
		return m_Name;
	}
};

[eAIRegisterFaction(eAIFactionBluGod)]
class eAIFactionBluGod : eAIFaction
{
	void eAIFactionBluGod()
	{
		m_IsInvincible = true;
	}
};

[eAIRegisterFaction(eAIFactionBluWanted)]
class eAIFactionBluWanted : eAIFaction
{
	void eAIFactionBluWanted()
	{
		m_Name = "Ricercato - Brigata Blu";
        m_Loadout = "BluLoadout";
	}

	
	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionBlu)) return true;
        
		return false;
	}

	override string GetDisplayName()
	{
		return "Ricercato - Brigata Blu";
	}

	override string GetName()
	{
		return m_Name;
	}
};