[eAIRegisterFaction(eAIFactionHive)]
class eAIFactionHive : eAIFaction
{
    void eAIFactionHive()
    {
        m_Name = "#STR_HIVE_DISPLAYNAME";
        m_Loadout = "ParassitesLoadout";
        m_MeleeDamageMultiplier = 2.0;
        m_DisableWeaponPickup = true;
        m_HasUnlimitedStamina = true;
		m_FactionModifier = "brain";
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

	override string GetName()
	{
		return m_Name;
	}
};

[eAIRegisterFaction(eAIFactionHiveElite)]
class eAIFactionHiveElite : eAIFactionHive
{
    void eAIFactionHiveElite()
    {
        m_Name = "#STR_HIVE_ELITE_DISPLAYNAME";
        m_Loadout = "ParassitesLoadout";
        m_MeleeDamageMultiplier = 2.0;
        m_DisableWeaponPickup = true;
        m_HasUnlimitedStamina = true;
		m_MeleeYeetForce = 15.0;
		m_MeleeYeetFactors = "0.5 1 0.5";
	}

	override string GetDisplayName()
	{
		return "#STR_HIVE_ELITE_DISPLAYNAME";
	}

	override string GetName()
	{
		return m_Name;
	}
};

