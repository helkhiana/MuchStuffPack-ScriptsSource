class MSP_UAConstants
{
	const float MSP_DISTANCE_SMALL = 1.0;
	const float MSP_DISTANCE_DEFAULT = 2.0;
	const float MSP_DISTANCE_LADDERS = 1.3;
	const float MSP_DISTANCE_BASEBUILDING = 20;
    const float MSP_TimeSpent_DEFAULT = 1;
    const float MSP_TimeSpent_DEFAULT_CONSTRUCT = 5;
    const float MSP_TimeSpent_DEFAULT_DECONSTRUCT = 15;
};

class MSP_StorageRestrictions
{
    static ref array<string> MedicalCargoItems = {
		"BandageDressing" , "PurificationTablets", "CharcoalTablets", "PainkillerTablets", "VitaminBottle", 
		"IodineTincture", "TetracyclineAntibiotics", "Epinephrine", "Morphine", "AntiChemInjector", 
		"InjectionVial", "SalineBag", "StartKitIV", "SalineBagIV", "BloodBagEmpty", "BloodBagFull", "BloodBagIV",
		"BloodTestKit", "Splint", "Thermometer", "Defibrillator", "DisinfectantSpray", "DisinfectantAlcohol", 
        "SewingKit", "Rag" };

    static ref array<string> FishCargoItems = {
        "Carp","Sardines","Mackerel","CarpFilletMeat","MackerelFilletMeat",
        "zeroy_chub","zeroy_cod","zeroy_pike","zeroy_shell","CodFilletMeat","PikeFilletMeat"};
    static ref array<string> MakeACopyOfArray(array<string> OtherArray)
    {
        ref array<string> NewArray = new array<string>;
        foreach( string item : OtherArray )
		{
            NewArray.Insert(item);
        }
        return NewArray;
    }
}

enum MSP_PROXIES_RPC {
    DIRPC_START = 71666666,
    // Server RPC's
    RPC_SERVER_SYNCHCONFIG,
    // Client RPC's
    RPC_CLIENT_SETCONFIG
};

class MSP_Config_Const 
{
    const static string ModProfileFolder = "$profile:\\MuchStuffPack\\";
    const static string FileName = "MSP_Config.json";
    const static string ConfigPath = ModProfileFolder + FileName;
};