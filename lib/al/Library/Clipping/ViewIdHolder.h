#pragma once

#include <container/seadBuffer.h>

namespace al {
class PlacementInfo;
class PlacementId;

class ViewIdHolder {
public:
    ViewIdHolder();
    void init(const PlacementInfo& placementInfo);

    static ViewIdHolder* tryCreate(const PlacementInfo& placementInfo);

private:
    s32 mNumPlacements = 0;
    PlacementId* mPlacementIds = nullptr;
};
}  // namespace al