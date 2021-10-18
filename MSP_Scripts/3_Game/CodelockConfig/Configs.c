#ifdef CodeLock
enum MSP_Codelock_RPC {
    DIRPC_START = 71651632,
    // Server RPC's
    RPC_SERVER_SYNCHCONFIG,
    // Client RPC's
    RPC_CLIENT_SETCONFIG
};

class MSP_Codelock_Const 
{
    const static string ModProfileFolder = "$profile:\\CodeLock\\";
    const static string FileName = "MSP_CodeLockConfig.json";
    const static string ConfigPath = ModProfileFolder + FileName;
};

#endif