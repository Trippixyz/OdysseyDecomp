#pragma once

#include "Library/LiveActor/LiveActor.h"
#include "gfx/seadColor.h"

namespace al
{

class DynamicDrawActor : public al::LiveActor
{
public:
enum DrawCategory {
    Unk1,
    Unk2,
    Unk3,
    Unk4
};

public:
    DynamicDrawActor(al::ActorInitInfo const&, int, char const*, al::DynamicDrawActor::DrawCategory, bool);
    void drawDepthShadow() const;
    void draw() const;
    void finalize();
    void setupHio();
    void begin();
    void normal(sead::Vector3f const&);
    void color(sead::Color4f const&);
    void texCoord(sead::Vector2f const&, int);
    void tangent(sead::Vector4f const&);
    void weight(sead::Vector4f const&);
    void skinId(sead::Vector4<u32> const&);
    void vertex(sead::Vector3f const&);
    void end();
    void beginModify();
    void normal(u32, sead::Vector3f const&);
    void color(u32, sead::Color4f const&);
    void texCoord(u32, sead::Vector2f const&, int);
    void tangent(u32, sead::Vector4f const&);
    void weight(u32, sead::Vector4f const&);
    void skinId(u32, sead::Vector4<u32> const&);
    void vertex(u32, sead::Vector3f const&);
    void endModify();
    void movement();

    unsigned char unk1[0x78];
};

}


namespace rs {

al::DynamicDrawActor* createDynamicDrawActor(al::ActorInitInfo const&, int, char const*, bool);

int searchDynamicCollisionAttributeIndex(char const*);

}