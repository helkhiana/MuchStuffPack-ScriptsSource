#ifdef CodeLock
class MSP_Codelock_Config : Managed
{	
    private float RaidTimeInSeconds;
    private string CanAttach;
    private string CanRaid;
    private string DeleteLockOnRaid;
    private int ToolDamageOnRaid;
	private ref array<string> RaidTools;

	void MSP_Codelock_Config()
	{
		if (!GetGame().IsServer()) return;

		if (!FileExist(MSP_Codelock_Const.ModProfileFolder))
        {
            Print("[MSP_Codelock_Config] '" + MSP_Codelock_Const.ModProfileFolder + "' does NOT exist, creating directory!");
            MakeDirectory(MSP_Codelock_Const.ModProfileFolder);
        }

        if (!FileExist(MSP_Codelock_Const.ConfigPath))
        {
            Print("[MSP_Codelock_Config] '" + MSP_Codelock_Const.ConfigPath + "' does NOT exist, creating default config!");
            Default();
            return; 
        }

        Load();
    }

	bool Load()
    {
        if (FileExist(MSP_Codelock_Const.ConfigPath))
        {
            Print("[MSP_Codelock_Config] '" + MSP_Codelock_Const.ConfigPath + "' found, loading existing config!");
            JsonFileLoader<MSP_Codelock_Config>.JsonLoadFile(MSP_Codelock_Const.ConfigPath, this);
            return true;
        }
        return false;
    }

	protected void Save()
    {
        JsonFileLoader<MSP_Codelock_Config>.JsonSaveFile(MSP_Codelock_Const.ConfigPath, this);
    }

	protected void Default()
    {
        RaidTimeInSeconds = 10.0;
        CanAttach = "true";
        CanRaid = "false";
        DeleteLockOnRaid = "false";
        ToolDamageOnRaid = 100;
        RaidTools = new array<string>;
		RaidTools.Insert("Hacksaw");
		Save();
	}

	float Get_RaidTimeInSeconds()
	{
		return RaidTimeInSeconds;
	}

    bool CanAttach() 
    {
        CanAttach.ToLower();
        return CanAttach == "true";
    }

    bool CanRaid()
    {
        CanRaid.ToLower();
        return CanRaid == "true";
    }

    bool ShouldDeleteLockOnRaid()
    {
        DeleteLockOnRaid.ToLower();
        return DeleteLockOnRaid == "true";
    }

	int Get_ToolDamageOnRaid()
	{
		return ToolDamageOnRaid;
	}

    array<string> Get_RaidTools()
	{
		return RaidTools;
	}
};
#endif