[eAIRegisterFaction(eAIFactionVerdi)]
class eAIFactionVerdi : eAIFaction
{
	void eAIFactionVerdi()
	{
        m_Loadout = "SopravvissutoLoadout";

		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name);
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		// "other" will see "this" as friendly?		
		
		if (other.IsInherited(eAIFactionVerdi)) return true;
		
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

	override string GetDefaultLoadout()
	{
		return m_Loadout;
	}

	override string GetPlayerLoadout() 
	{
		return m_Loadout;
	}
};

[eAIRegisterFaction(eAIFactionVerdiGod)]
class eAIFactionVerdiGod : eAIFactionVerdi
{
	void eAIFactionVerdiGod()
	{
		m_IsInvincible = true;

		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (God)");
	}
};

[eAIRegisterFaction(eAIFactionVerdiWanted)]
class eAIFactionVerdiWanted : eAIFaction
{
	void eAIFactionVerdiWanted()
	{
        m_Loadout = "SopravvissutoLoadout";

		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (Wanted)");
	}
	
	override bool IsFriendly(notnull eAIFaction other)
	{
		return false;
	}

	override string GetDisplayName()
	{
		return "#STR_GREEN_WANTED_DISPLAYNAME";
	}

	override string GetDefaultLoadout()
	{
		return m_Loadout;
	}

	override string GetPlayerLoadout() 
	{
		return m_Loadout;
	}
};