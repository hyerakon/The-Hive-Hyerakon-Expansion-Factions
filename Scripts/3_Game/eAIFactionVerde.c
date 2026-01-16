[eAIRegisterFaction(eAIFactionVerde)]
class eAIFactionVerde : eAIFaction
{
	void eAIFactionVerde()
	{
		m_Name = "#STR_GREEN_DISPLAYNAME";
        m_Loadout = "SopravvissutoLoadout";

		Print("[HYERAKON FACTION] Registered Faction: " + m_Name);
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?		
		
		if (other.IsInherited(eAIFactionVerde)) return true;
		
		if (other.IsInherited(eAIFactionBlu)) return true;

        if (other.IsInherited(eAIFactionRossi)) return true;


		if (other.IsInherited(eAIFactionGialli)) return true;

        
		if (other.IsGuard()) return true;
		if (other.IsPassive()) return true;		

		return false;
	}

	override string GetDisplayName()
	{
		return "#STR_GREEN_DISPLAYNAME";
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

		Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (God)");
	}
};

[eAIRegisterFaction(eAIFactionVerdeWanted)]
class eAIFactionVerdeWanted : eAIFaction
{
	void eAIFactionVerdeWanted()
	{
		m_Name = "#STR_GREEN_WANTED_DISPLAYNAME";
        m_Loadout = "SopravvissutoLoadout";

		Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (Wanted)");
	}
	
	override bool IsFriendly(notnull eAIFaction other)
	{
		return false;
	}

	override string GetDisplayName()
	{
		return "#STR_GREEN_WANTED_DISPLAYNAME";
	}

	override string GetName()
	{
		return m_Name;
	}
};