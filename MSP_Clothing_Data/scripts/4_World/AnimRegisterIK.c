modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterOneHanded(pType, pBehavior);
        pType.AddItemInHandsProfileIK("Msp_BoxingGloves_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/gorka_helmet.anm");
        pType.AddItemInHandsProfileIK("Msp_M_BoxingGloves_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/brassknuckles.anm");
        pType.AddItemInHandsProfileIK("Msp_BunnyEarsHeadband", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/military_beret.anm");
        pType.AddItemInHandsProfileIK("Msp_BaseballCap_Base", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/baseball_cap.anm");
        pType.AddItemInHandsProfileIK("Msp_MedicBag", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/battery_charger.anm");
        pType.AddItemInHandsProfileIK("Msp_DuffleBag_ColorBase", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/battery_charger.anm");
    };

    override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
        super.RegisterTwoHanded(pType, pBehavior);        
        pType.AddItemInHandsProfileIK("Msp_ArmyBag_BaseColour", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior,"dz/anims/anm/player/ik/two_handed/taloon_g.anm");	        
    };
};