#pragma once

#include <math/seadMatrix.h>
#include "Project/HitSensor/HitSensor.h"
#include "Library/LiveActor/LiveActor.h"

namespace al
{

class DynamicCollisionActor : public al::LiveActor
{
public:
    DynamicCollisionActor(al::ActorInitInfo const&, int, sead::Matrix34f const*, al::HitSensor*, void const*);
    void create(int);
    void begin(void);
    void vertex(sead::Vector3<float> const&);
    void endData(void);
    void updateCollisionParts(void);
    void attribute(unsigned short);
    void makePrism(void);
    void end(void);

    unsigned char unk1[0x70];
};

}


namespace rs {

al::DynamicCollisionActor* createDynamicCollisionActor(al::ActorInitInfo const&, int, sead::Matrix34<float> const*, al::HitSensor*);

}