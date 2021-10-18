#ifdef CodeLock
modded class DayZGame
{
    protected ref MSP_Codelock_Config MSP_Codelock_config;
    
    MSP_Codelock_Config Get_MSP_Codelock_Config()
    {
        if (!MSP_Codelock_config && !GetGame().IsClient())
        {
            ServerSet_MSP_Codelock_Config(new MSP_Codelock_Config);
        }
        else if(!MSP_Codelock_config && GetGame().IsClient())
        {
            return null;
        }
        return MSP_Codelock_config;
    }

    void ServerSet_MSP_Codelock_Config(MSP_Codelock_Config config)
    {
        if(GetGame().IsClient())
        {
            Error("ERROR: ServerSet_MSP_Codelock_Config can only be called on server");
            return;
        }
        MSP_Codelock_config = config;
    }

    void ClientSet_MSP_Codelock_Config(MSP_Codelock_Config config)
    {
        if(!GetGame().IsClient())
        {
            Error("ERROR: ClientSet_MSP_Codelock_Config can only be called on client");
            return;
        }

        MSP_Codelock_config = config;
    }

	override void OnRPC(PlayerIdentity sender, Object target, int rpc_type, ParamsReadContext ctx)
	{
		super.OnRPC(sender, target, rpc_type, ctx);

		switch (rpc_type)
		{
			case MSP_Codelock_RPC.RPC_CLIENT_SETCONFIG: 
            {
                if(!GetGame().IsClient())
                    return;
				Param1<MSP_Codelock_Config> dataConfig;
                if(!ctx.Read(dataConfig))
                    return;
                ClientSet_MSP_Codelock_Config(dataConfig.param1);
				PrintFormat("[MSP_Codelock_Config] Received instance of config %1", dataConfig.param1);
				break;
			}
            case MSP_Codelock_RPC.RPC_SERVER_SYNCHCONFIG:
            {
                if(!GetGame().IsServer())
                    return;
                auto configParams = new Param1<MSP_Codelock_Config>(Get_MSP_Codelock_Config());
                GetGame().RPCSingleParam(null, MSP_Codelock_RPC.RPC_CLIENT_SETCONFIG, configParams, true, sender);
                break;
            }
		}
	}
};

#endif