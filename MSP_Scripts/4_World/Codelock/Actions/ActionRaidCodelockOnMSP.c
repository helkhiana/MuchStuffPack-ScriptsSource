#ifdef CodeLock
class ActionRaidCodelockOnMSPCB : ActionContinuousBaseCB
{
    override void CreateActionComponent()
    {
        float raidTime = GetDayZGame().Get_MSP_Codelock_Config().Get_RaidTimeInSeconds() / GetDayZGame().GetCodeLockConfig().GetIncrementAmount(); // config value to minutes
        
        m_ActionData.m_ActionComponent = new CAContinuousRepeat(raidTime);
    }
}

class ActionRaidCodelockOnMSP : ActionContinuousBase
{
    protected float _Health;
    protected float _maxHealth;

    void ActionRaidCodelockOnMSP()
    {
        m_CallbackClass = ActionRaidCodelockOnMSPCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DISASSEMBLE;
        m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_MEDIUM;
        m_FullBody = true;
        m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
    }

    override void CreateConditionComponents()
    {
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    }

    override string GetText() {
        int healthPercentage = (_Health / _maxHealth) * 100;
        return "Destroy Codelock | HP: " + healthPercentage + "%";
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
		ItemBase itemBase = ItemBase.Cast(target.GetObject());
        CodeLock codelock;
        _Health = 0;
        _maxHealth = 0;

        if (itemBase && (itemBase.IsKindOf("Msp_Openable_Placeable_Base")|| itemBase.IsKindOf("Msp_Openable_Base") || itemBase.IsKindOf("Msp_Greenhouse_Base")))
        {
            
            ItemBase itemInHands = ItemBase.Cast(item);
            if(!itemInHands)
                itemInHands = player.GetItemInHands();
            array<string> raidTools = g_Game.Get_MSP_Codelock_Config().Get_RaidTools();
            if(raidTools.Find(itemInHands.GetType()) == -1)
                return false;

            Class.CastTo(codelock, itemBase.GetCodeLock());

            if (codelock && GetDayZGame().Get_MSP_Codelock_Config().CanRaid()) 
            {
                _Health = codelock.GetSynchronizedHealth();
                _maxHealth = codelock.GetMaxHealth("", "Health");
                return true;
            }
        }       

        return false;
    }

    override void OnFinishProgressServer(ActionData action_data)
    {
        if (!GetDayZGame().Get_MSP_Codelock_Config().CanRaid())
            return;

        ItemBase itemBase = ItemBase.Cast(action_data.m_Target.GetObject());
        float raidIncrementAmount = _maxHealth / GetDayZGame().GetCodeLockConfig().GetIncrementAmount();
        int toolDamage = GetDayZGame().Get_MSP_Codelock_Config().Get_ToolDamageOnRaid();

        if (itemBase)
        {
            CodeLock codelock = itemBase.GetCodeLock();

            if (codelock) 
            {
                codelock.AddHealth("", "Health", -raidIncrementAmount);

                float _Health = codelock.GetHealth();

                codelock.SetSynchronizedHealth(_Health);

                if (_Health > 0) 
                {
                    GetCodeLockLogger().WriteLog("RAID", action_data.m_Player.GetIdentity(), codelock.GetPosition(), "", false, false, raidIncrementAmount, _Health);
                } 
                else 
                {
                    codelock.UnlockServer(action_data.m_Player, itemBase);

                    if (GetDayZGame().Get_MSP_Codelock_Config().ShouldDeleteLockOnRaid())
                        codelock.Delete();                        
                    if (toolDamage > 0)
                        action_data.m_MainItem.DecreaseHealth(toolDamage, false);
                    GetCodeLockLogger().WriteLog("RAID", action_data.m_Player.GetIdentity(), codelock.GetPosition(), "", false, true);
                }
            }
        }
    }

    override string GetAdminLogMessage(ActionData action_data)
    {
        return " destroyed CodeLock on " + action_data.m_Target.GetObject().GetDisplayName() + " at " + action_data.m_Player.GetPosition();
    }
};
#endif