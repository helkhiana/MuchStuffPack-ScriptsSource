#ifdef CodeLock
modded class CodeLock : ItemBase
{
    override void UnlockServer(notnull EntityAI player, EntityAI parent)
    {
        if (!GetGame().IsServer() || !GetGame().IsMultiplayer())
            return;
        ItemBase itemBase = ItemBase.Cast(parent);
        if (itemBase && itemBase.IsKindOf("Msp_Openable_Base") || itemBase.IsKindOf("Msp_Openable_Placeable_Base")  || itemBase.IsKindOf("Msp_Greenhouse_Base"))
            itemBase.Open();

        super.UnlockServer(player, parent);
    }

    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionAttachCodeLockToMSP);
    }
};
#endif