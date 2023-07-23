
modded class MissionServer 
{
    #ifdef CodeLock
    private ref MSP_Codelock_Config m_MSP_Codelock_Config;
    #endif
    private ref MSP_Server_Config m_MSP_Server_Config;

    override void OnInit()
    {
        super.OnInit();     
        
        #ifdef CodeLock          
        m_MSP_Codelock_Config = new MSP_Codelock_Config;
        g_Game.ServerSet_MSP_Codelock_Config(m_MSP_Codelock_Config);
        #endif
        m_MSP_Server_Config = new MSP_Server_Config;
        g_Game.ServerSet_MSP_Server_Config(m_MSP_Server_Config);
    }
};