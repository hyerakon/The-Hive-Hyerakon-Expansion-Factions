[eAIRegisterFaction(eAIFactionGialli)]
class eAIFactionGialli : eAIFaction
{
	void eAIFactionGialli()
	{
		m_Name = "#STR_YELLOW_DISPLAYNAME";
        m_Loadout = "CaschiGialliLoadout";

		Print("[HYERAKON FACTION] Registered Faction: " + m_Name);
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?

		if (other.IsInherited(eAIFactionVerde)) return true;
		//if (other.IsInherited(eAIFactionVerdeWanted)) return true;
				
		if (other.IsInherited(eAIFactionBlu)) return true;
		//if (other.IsInherited(eAIFactionBluWanted)) return true;

        if (other.IsInherited(eAIFactionRossi)) return true;
        //if (other.IsInherited(eAIFactionRossiWanted)) return true;
		
		
		if (other.IsInherited(eAIFactionGialli)) return true;
		if (other.IsInherited(eAIFactionGialliElite)) return true;
		
        
		if (other.IsGuard()) return true;
		if (other.IsPassive()) return true;
		

		return false;
	}

	override string GetDisplayName()
	{
		return "#STR_YELLOW_DISPLAYNAME";
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

		Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (God)");
	}
};

[eAIRegisterFaction(eAIFactionGialliNBC)]
class eAIFactionGialliNBC : eAIFactionGialli
{
	void eAIFactionGialliNBC()
	{
		m_Name = "#STR_YELLOW_NBC_DISPLAYNAME";
		m_Loadout = "CaschiGialli_NBC_Loadout";

		Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (NBC)");
	}

	override string GetDisplayName()
	{
		return "#STR_YELLOW_NBC_DISPLAYNAME";
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

		Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (God NBC)");
	}
};

[eAIRegisterFaction(eAIFactionGialliElite)]
class eAIFactionGialliElite : eAIFaction
{
	void eAIFactionGialliElite()
	{
		m_Name = "#STR_YELLOW_ELITE_DISPLAYNAME";
        m_Loadout = "CaschiGialliLoadout";

		Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (Elite)");
	}
	
	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?

		if (other.IsInherited(eAIFactionVerde)) return true;
		//if (other.IsInherited(eAIFactionVerdeWanted)) return true;
				
		if (other.IsInherited(eAIFactionBlu)) return true;
		//if (other.IsInherited(eAIFactionBluWanted)) return true;

        if (other.IsInherited(eAIFactionRossi)) return true;
        //if (other.IsInherited(eAIFactionRossiWanted)) return true;
		
		
		if (other.IsInherited(eAIFactionGialli)) return true;
		if (other.IsInherited(eAIFactionGialliElite)) return true;
		
        
		if (other.IsGuard()) return true;
		if (other.IsPassive()) return true;
		

		return false;
	}

	override string GetDisplayName()
	{
		return "#STR_YELLOW_ELITE_DISPLAYNAME";
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

		Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (Elite God)");
	}
};