#pragma once

class PlayerHackKeeper;

namespace al {

class IUsePlayerHack {
public:
    virtual PlayerHackKeeper* getPlayerHackKeeper() const = 0;
};
}  // namespace al
