[eAIRegisterFaction(eAIFactionVerde)]
class eAIFactionVerde : eAIFaction
{
	void eAIFactionVerde()
	{
		m_Name = "Sopravvissuto";
        m_Loadout = "SopravvissutoLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?		
		
		if (other.IsInherited(eAIFactionVerde)) return true;
		
		if (other.IsInherited(eAIFactionBlu)) return true;

        if (other.IsInherited(eAIFactionRossi)) return true;


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
		return "Sopravvissuto";
	}

	override string GetName()
	{
		return m_Name;
	}
};

[eAIRegisterFaction(eAIFactionVerdeGod)]
class eAIFactionVerdeGod : eAIFactionVerde
{
	void eAIFactionVerdeGod()
	{
		m_IsInvincible = true;
	}
};

[eAIRegisterFaction(eAIFactionVerdeWanted)]
class eAIFactionVerdeWanted : eAIFaction
{
	void eAIFactionVerdeWanted()
	{
		m_Name = "Ricercato - Sopravvissuto";
        m_Loadout = "SopravvissutoLoadout";
	}
	
	override bool IsFriendly(notnull eAIFaction other)
	{
		return false;
	}

	override string GetDisplayName()
	{
		return "Ricercato - Sopravvissuto";
	}

	override string GetName()
	{
		return m_Name;
	}
};