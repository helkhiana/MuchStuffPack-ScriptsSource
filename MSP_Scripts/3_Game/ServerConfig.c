class MSP_Proxies_Settings
{    
    bool HideAllProxiesWhenClosed;
    bool HideWeaponProxies;
    bool HideClothingProxies;
    bool HideOtherProxies;
};

class MSP_Server_Config : Managed
{	
    private int version;
    private ref MSP_Proxies_Settings proxies_settings;

	void MSP_Server_Config()
	{
		if (!GetGame().IsServer()) return;

		if (!FileExist(MSP_Config_Const.ModProfileFolder))
        {
            Print("[MSP_Server_Config] '" + MSP_Config_Const.ModProfileFolder + "' does NOT exist, creating directory!");
            MakeDirectory(MSP_Config_Const.ModProfileFolder);
        }

        if (!FileExist(MSP_Config_Const.ConfigPath))
        {
            Print("[MSP_Server_Config] '" + MSP_Config_Const.ConfigPath + "' does NOT exist, creating default config!");
            Default();
            return; 
        }

        Load();
    }

	bool Load()
    {
        if (FileExist(MSP_Config_Const.ConfigPath))
        {
            Print("[MSP_Server_Config] '" + MSP_Config_Const.ConfigPath + "' found, loading existing config!");
            JsonFileLoader<MSP_Server_Config>.JsonLoadFile(MSP_Config_Const.ConfigPath, this);
            return true;
        }
        return false;
    }

	protected void Save()
    {
        JsonFileLoader<MSP_Server_Config>.JsonSaveFile(MSP_Config_Const.ConfigPath, this);
    }

	protected void Default()
    {        
        proxies_settings = new MSP_Proxies_Settings();
        proxies_settings.HideAllProxiesWhenClosed = true;
        proxies_settings.HideWeaponProxies = false;
        proxies_settings.HideClothingProxies = false;
        proxies_settings.HideOtherProxies = false;
        version = 1;
		Save();
	}

	MSP_Proxies_Settings GetProxiesSettings()
	{
		return proxies_settings;
	}

};