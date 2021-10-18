#ifdef CodeLock
modded class MissionGameplay 
{	
	void MissionGameplay() 
	{
		GetGame().RPCSingleParam(null, MSP_Codelock_RPC.RPC_SERVER_SYNCHCONFIG, null, true);
	}
};
#endif