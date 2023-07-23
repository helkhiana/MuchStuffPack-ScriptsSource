
modded class MissionGameplay 
{	
	void MissionGameplay() 
	{
		#ifdef CodeLock
		GetGame().RPCSingleParam(null, MSP_Codelock_RPC.RPC_SERVER_SYNCHCONFIG, null, true);
		#endif
		GetGame().RPCSingleParam(null, MSP_PROXIES_RPC.RPC_SERVER_SYNCHCONFIG, null, true);
	}
};