#pragma once
namespace offsets
{
    // buttons
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long IN_ATTACK = (0x07472f98 + 0x8); // [Buttons] -> in_attack+0x8
    // core
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long REGION = 0x140000000;     // [Mine]          -> Region
    const long LEVEL = 0x16eed90;        // [Miscellaneous] -> LevelName
    const long LOCAL_PLAYER = 0x22245c8; // [Miscellaneous] -> AVC_GameMovement+0x8 / LocalPlayer
    const long ENTITY_LIST = 0x1e74448;  // [Miscellaneous] -> cl_entitylist
    // entity
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long LOCAL_ORIGIN = 0x0188; // [DataMap.CBaseViewModel]    -> 	m_localOrigin
    // player
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long GLOW_ENABLE = 0x03f0 + 0x8;        // [RecvTable.DT_HighlightSettings] -> m_highlightServerContextID + 0x8
    const long GLOW_THROUGH_WALL = 0x03f0 + 0x10; // [RecvTable.DT_HighlightSettings] -> m_highlightServerContextID + 0x10
    const long GLOW_COLOR = 0x200;                // [Miscellaneous]                  -> glow_color
    const long TEAM_NUMBER = 0x0480;              // [RecvTable.DT_BaseEntity]        -> m_iTeamNum
    const long NAME = 0x05c1;                     // [RecvTable.DT_BaseEntity]        -> m_iName
    const long SPOTTET = 0x0978;                  // [RecvTable.DT_BaseEntity]        -> m_spottedByTeams
    const long LIFE_STATE = 0x07d0;               // [RecvTable.DT_Player]            -> m_lifeState
    const long VEC_PUNCH_WEAPON_ANGLE = 0x24e8;   // [DataMap.C_Player]               -> m_currentFrameLocalPlayer.m_vecPunchWeapon_Angle
    const long VIEW_ANGLE = (0x25e4 - 0x14);      // [DataMap.C_Player]               -> m_ammoPoolCapacity - 0x14
    const long BLEEDOUT_STATE = 0x2790;           // [RecvTable.DT_Player]            -> m_bleedoutState
    const long ZOOMING = 0x1c81;                  // [RecvTable.DT_Player]            -> m_bZooming
    const long LAST_VISIBLE_TIME = 0x1aa0;        // [Miscellaneous]                  -> CPlayer!lastVisibleTime
    const long CURRENT_SHIELDS = 0x01a0;          // [RecvTable.DT_BaseEntity]        -> m_shieldHealth
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    const long LastCrosshairTargetTime = 0x1aa8;           //[Miscellaneous]
    const long M_latestPrimaryWeapons = 0x1a44;            //[RecvTable.DT_BaseCombatCharacter]
    const long M_isSemiAuto = 0x1C2C;                      //[Miscellaneous]
    const long TimeBase = 0x2138;                          // m_currentFramePlayer.timeBase [DataMap.C_Player]
    const long M_nextReadyTime = 0x1668;                   //[DataMap.CWeaponX]
    const long m_weaponNameIndex = 0x1674;                 //[RecvTable.DT_WeaponX]
    const long m_highlightFunctionBits = 0x02f0;           //[RecvTable.DT_HighlightSettings]
    const long m_customScriptInt = 0x1668;                 //[RecvTable.DT_PropSurvival]
    const long camera_origin = 0x1f80;                     //[Miscellaneous] CPlayer!camera_origin=0x1f48
    const long m_vecAbsVelocity = 0x0170;                  //[DataMap.C_BaseEntity]
    const long bulletspeed = 0x04cc + LAST_VISIBLE_TIME;   // projectile_launch_speed+lastVisibleTime
    const long bulletgravity = 0x04d4 + LAST_VISIBLE_TIME; // projectile_gravity_scale=0x04d4 + lastVisibleTime
}
