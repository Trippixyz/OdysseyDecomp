#pragma once

#include "nn/ui2d/Layout.h"

namespace al {
class LayoutResource;

class LayoutKeeper {
public:
    LayoutKeeper();

    void initScreen(nn::ui2d::Layout* layout, LayoutResource* resource);

private:
    char unk1[0x10];
public:
    nn::ui2d::Layout* mLayout;
};
}  // namespace al
