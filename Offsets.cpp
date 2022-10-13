#pragma once
namespace offsets
{
    // buttons
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    const long IN_ATTACK = 0x75cc2e0;                   // [Buttons] -> in_attack
    // core
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long REGION = 0x140000000;                    // [Mine]          -> Region
    const long LEVEL = 0x13c3e38;                       // [Miscellaneous] -> LevelName
    const long LOCAL_PLAYER = 0x1e4f288;                // [Miscellaneous] -> LocalPlayer
    const long ENTITY_LIST = 0x1a9e778;                 // [Miscellaneous] -> cl_entitylist
    // entity
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long LOCAL_ORIGIN = 0x158;                    // [DataMap.CBaseViewModel]    -> m_localOrigin
    // player
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long GLOW_ENABLE = (0x3c0 + 0x8);             // [RecvTable.DT_HighlightSettings] -> m_highlightServerContextID + 0x8
    const long GLOW_THROUGH_WALL = (0x3c0 + 0x10);      // [RecvTable.DT_HighlightSettings] -> m_highlightServerContextID + 0x10
    const long TEAM_NUMBER = 0x44c;                     // [RecvTable.DT_BaseEntity]        -> m_iTeamNum
    const long NAME = 0x589;                            // [RecvTable.DT_BaseEntity]        -> m_iName
    const long LIFE_STATE = 0x798;                      // [RecvTable.DT_Player]            -> m_lifeState
    const long VEC_PUNCH_WEAPON_ANGLE = 0x2440;         // [DataMap.C_Player]               -> m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
    const long VIEW_ANGLE = (0x253c - 0x14);            // [DataMap.C_Player]               -> m_ammoPoolCapacity - 0x14
    const long BLEEDOUT_STATE = 0x26d0;                 // [RecvTable.DT_Player]            -> m_bleedoutState
    const long ZOOMING = 0x1c01;                        // [RecvTable.DT_Player]            -> m_bZooming
    const long LAST_VISIBLE_TIME = 0x1a48;              // [Miscellaneous]                  -> CPlayer!lastVisibleTime
    // weapon
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long WEAPON = 0x1fca6b8;                      // [ClientClasses] -> CWeaponX //BASEANIMATING FOR NOWWW
    const long WEAPON_AMMO_IN_CLIP = 0x1650;            // [DataMap.CWeaponX] -> m_ammoInClip
    const long WEAPON_IS_SEMI_AUTO = 0x1b92;            // [Miscellaneous] ->CWeaponX!m_isSemiAuto

    const long m_latestPrimaryWeapons = 0x19ec;         // RecvTable.DT_BaseCombatCharacter -> m_latestPrimaryWeapons [weapon of local player?]
}