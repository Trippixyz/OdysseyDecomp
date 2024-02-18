#pragma once

#include "Library/HostIO/IUseName.h"

#include "Library/Layout/LayoutKeeper.h"

namespace al {

class IUseLayout : virtual public IUseName {
public:
    virtual LayoutKeeper* getLayoutKeeper() const = 0;
};
}  // namespace al
