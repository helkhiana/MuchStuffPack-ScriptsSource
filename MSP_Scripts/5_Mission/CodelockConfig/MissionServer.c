#ifdef CodeLock
modded class MissionServer 
{
    private ref MSP_Codelock_Config m_MSP_Codelock_Config;

    override void OnInit()
    {
        super.OnInit();               
        m_MSP_Codelock_Config = new MSP_Codelock_Config;
        g_Game.ServerSet_MSP_Codelock_Config(m_MSP_Codelock_Config);
    }
};
#endif