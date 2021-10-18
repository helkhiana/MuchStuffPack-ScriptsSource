class Msp_Foldable_Item : Msp_Item
{
    ref protected EffectSound m_DeployLoopSound;
    bool m_FoldedState = true;
    bool m_FoldedStateLocal = true;

    void Msp_Foldable_Item()
    {
        m_DeployLoopSound = new EffectSound;
        RegisterNetSyncVariableBool("m_FoldedState");
        RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
        RegisterNetSyncVariableBool("m_IsDeploySound");
    }

    void ~Msp_Foldable_Item()
    {
        if (m_DeployLoopSound)
        {
            SEffectManager.DestroySound(m_DeployLoopSound);
        }
    }

    override bool HasProxyParts()
    {
        return true;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        return IsFolded();
    }

    override bool CanPutInCargo(EntityAI parent)
    {
        return IsFolded();
    }

    override void OnVariablesSynchronized()
    {
        super.OnVariablesSynchronized();

        if (IsDeploySound())
        {
            PlayDeploySound();
        }

        if (m_FoldedState != m_FoldedStateLocal)
        {
            if (IsFolded())
                Fold();
            else
                Unfold();

            m_FoldedStateLocal = m_FoldedState;
        }
    }

    int IsFolded()
    {
        return m_FoldedState;
    }

    void Fold()
    {
        RefreshSelections();
        m_FoldedState = true;
        SetSynchDirty();
    }

    void Unfold()
    {
        RefreshSelections();
        m_FoldedState = false;
        SetSynchDirty();
    }

    void RefreshSelections()
    {
        HideSelection("placing");
        RemoveProxyPhysics("placing");
        HideSelection("inventory");
        RemoveProxyPhysics("inventory");
        if (IsFolded())
        {
            ShowSelection("inventory");
            AddProxyPhysics("inventory");
        }
        else
        {
            ShowSelection("placing");
            AddProxyPhysics("placing");
        }
    }

    override void OnCreatePhysics()
    {
        super.OnCreatePhysics();
        if (IsFolded())
            Fold();
        else
            Unfold();
    }

    override void OnStoreSave(ParamsWriteContext ctx)
    {
        super.OnStoreSave(ctx);
        ctx.Write(m_FoldedState);
    }

    override bool OnStoreLoad(ParamsReadContext ctx, int version)
    {
        if (!super.OnStoreLoad(ctx, version))
            return false;

        if (!ctx.Read(m_FoldedState))
            m_FoldedState = false;

        RefreshSelections();
        return true;
    }

    override int GetViewIndex()
    {
        if (MemoryPointExists("invView2"))
        {
            if (!IsFolded())
                return 1;
        }
        return 0;
    }

    //================================================================
    // ADVANCED PLACEMENT
    //================================================================

    
	override void OnPlacementComplete(Man player, vector position = "0 0 0", vector orientation = "0 0 0")
	{
		super.OnPlacementComplete(player, position, orientation);    
        if (GetGame().IsServer())
        {
            Unfold();
            SetIsDeploySound(true);
        }
    }

    override void SetActions()
    {
        super.SetActions();
        AddAction(ActionFoldItem);
        AddAction(ActionTogglePlaceObject);
        AddAction(ActionPlaceObject);
		AddAction(ActionUseMSPObject);
    }
};