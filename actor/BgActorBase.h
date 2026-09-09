#pragma once

#include <actor/ActorState.h>
#include <graphics/AnimModel.h>
#include <collision/ActorBoxBgCollision.h>
#include <../game/include/map_obj/TerrainEffects.h>

class BgActorBase : public ActorMultiState { // Size: 0x11A78
    // Base class for Zone-Wide-Effect actors such as liquids
    // Also inherited by bump-from-below platform presumably to use the distortion capabilities of TerrainEffects
public:
    BgActorBase(const ActorCreateParam& param);
    virtual ~BgActorBase();

    // Address: 0x026F0E9C
    bool execute() override;

    AnimModel*                  mModel;
    u8                          _17CC[4]; // Unknown values
    sead::Vector3f              _17D0;
    sead::Vector3f              _17DC;
    ActorBoxBgCollision         mRectCollider;
    BgCollision::LineInitArg    mColliderInfo;
    sead::Vector2f              _1A9C;
    u32                         _1AA4;
    u32                         _1AA8;
    f32                         _1AAC;
    f32                         _1AB0;
    f32                         mWidth;
    f32                         mBaselineHeight;
    f32                         mEffectiveHeight;
    f32                         _1AC0;
    f32                         _1AC4;
    f32                         _1AC8;
    f32                         _1ACC;
    u32                         _1AD0;
    u32                         _1AD4;
    u16                         _1AD8;
    u16                         _1ADA;
    u8                          _1ADC;
    u8                          _1ADD;
    u8                          _1ADE;
    u8                          _1ADF;
    u32                         _1AE0;
    TerrainEffects              mTerrainEffects;
    sead::IDisposer             _11A30;
    u32                         _11A40;
    u8                          _11A44[4]; // Unknown values
    u32                         _11A48;
    u32                         _11A4C;
    u32                         _11A50;
    u32                         _11A54;
    u32                         _11A58;
    u32                         _11A5C;
    u32                         _11A60;
    f32                         _11A64;
    f32                         _11A68;
    u32                         _11A6C;
    u16                         _11A70;
    u8                          _11A72;
    u8                          _11A73;
    u8                          _11A74[4]; // Unknown values
};

static_assert(sizeof(BgActorBase) == 0x11A78, "BgActorBase size mismatch");
