#include "Library/Layout/LayoutActorUtil.h"

#include "Library/Layout/IUseLayout.h"

#include "nn/ui2d/Pane.h"

namespace al {

    void setLocalTrans(IUseLayout* layout, const sead::Vector3f& trans) {

        al::LayoutKeeper* layoutKeeper = layout->getLayoutKeeper();
        nn::ui2d::Pane* rootPane = layoutKeeper->mLayout->mRootPane;
        
        u8 flags = rootPane->mFlags;

        rootPane->mPositionX = trans.x;
        rootPane->mPositionY = trans.y;
        rootPane->mPositionZ = trans.z;

        rootPane->mFlags = flags | 0x10; //unknown flag
    }
}