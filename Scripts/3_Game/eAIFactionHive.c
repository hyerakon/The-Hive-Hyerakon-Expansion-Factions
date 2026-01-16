[eAIRegisterFaction(eAIFactionHive)]
class eAIFactionHive : eAIFaction
{
    void eAIFactionHive()
    {
        m_Loadout = "ParassitesLoadout";
        m_MeleeDamageMultiplier = 2.0;
        m_DisableWeaponPickup = true;
        m_HasUnlimitedStamina = true;
		m_FactionModifier = "brain";

		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name);
	}

	override bool HasModifier()
	{
		return true;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionHive)) return true;
		
		return false;
	}
	override bool IsFriendlyEntity(EntityAI other, DayZPlayer factionMember = null)
	{
		if( other.IsInherited(DayZCreatureAI)) return true;

        return false;
	}

	override string GetDisplayName()
	{
		return "#STR_HIVE_DISPLAYNAME";
	}
};

[eAIRegisterFaction(eAIFactionHiveElite)]
class eAIFactionHiveElite : eAIFactionHive
{
    void eAIFactionHiveElite()
    {
        m_Loadout = "ParassitesLoadout";
        m_MeleeDamageMultiplier = 2.0;
        m_DisableWeaponPickup = true;
        m_HasUnlimitedStamina = true;
		m_MeleeYeetForce = 15.0;
		m_MeleeYeetFactors = "0.5 1 0.5";

		//Print("[HYERAKON FACTION] Registered Faction: " + m_Name + " (Elite)");
	}

	override string GetDisplayName()
	{
		return "#STR_HIVE_ELITE_DISPLAYNAME";
	}
};

