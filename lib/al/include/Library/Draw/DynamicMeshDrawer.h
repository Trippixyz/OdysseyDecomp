#pragma once

#include "gfx/seadColor.h"
#include "nn/g3d/ViewVolume.h"
#include "Library/Draw/ModelAdditionalInfo.h"

namespace al {

    class DynamicMeshDrawer {
    public:
        void begin();
        void beginModify();

        void color(const sead::Color4f& color);
        void draw(nn::g3d::ViewVolume const*, int, int, al::ModelAdditionalInfo*) const;

        char unk[0x130];
    };
}