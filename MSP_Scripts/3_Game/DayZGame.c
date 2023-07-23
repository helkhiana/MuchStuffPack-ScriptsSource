
modded class DayZGame
{  
    protected ref MSP_Server_Config m_MSP_Server_Config;
    
    MSP_Server_Config Get_MSP_Server_Config()
    {
        return m_MSP_Server_Config;
    }

    void ServerSet_MSP_Server_Config(MSP_Server_Config config)
    {
        if(GetGame().IsClient())
        {
            Error("ERROR: ServerSet_MSP_Server_Config can only be called on server");
            return;
        }
        m_MSP_Server_Config = config;
    }

    void ClientSet_MSP_Server_Config(MSP_Server_Config config)
    {
        if(!GetGame().IsClient())
        {
            Error("ERROR: ClientSet_MSP_Server_Config can only be called on client");
            return;
        }

        m_MSP_Server_Config = config;
    }

#ifdef CodeLock
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

#endif
	override void OnRPC(PlayerIdentity sender, Object target, int rpc_type, ParamsReadContext ctx)
	{
		super.OnRPC(sender, target, rpc_type, ctx);

		switch (rpc_type)
		{
            
        #ifdef CodeLock
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
            
        #endif
			case MSP_PROXIES_RPC.RPC_CLIENT_SETCONFIG: 
            {
                if(!GetGame().IsClient())
                    return;
				Param1<MSP_Server_Config> proxiesConfig;
                if(!ctx.Read(proxiesConfig))
                    return;
                ClientSet_MSP_Server_Config(proxiesConfig.param1);
				PrintFormat("[MSP_Server_Config] Received instance of config %1", proxiesConfig.param1);
				break;
			}
            case MSP_PROXIES_RPC.RPC_SERVER_SYNCHCONFIG:
            {
                if(!GetGame().IsServer())
                    return;
                auto proxiesConfigParamas = new Param1<MSP_Server_Config>(Get_MSP_Server_Config());
                GetGame().RPCSingleParam(null, MSP_PROXIES_RPC.RPC_CLIENT_SETCONFIG, proxiesConfigParamas, true, sender);
                break;
            }              
		}
	}
};
