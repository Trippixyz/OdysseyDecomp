#pragma once

#include "agl/common/aglDrawContext.h"

namespace al {

class FontHolder;
class LayoutSystem;

class LayoutKit {

public:
    LayoutKit(al::FontHolder*);
    ~LayoutKit();
    void createCameraParamForIcon();
    void createExecuteDirector(int);
    void createEffectSystem();
    void endInit();
    void update();
    void draw(char const*) const;
    void drawList(char const*, char const*) const;
    void setLayoutSystem(al::LayoutSystem*);
    void setDrawContext(agl::DrawContext*);
};
}  // namespace al
