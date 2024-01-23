#pragma once

#include <math/seadMatrix.h>
#include <math/seadVector.h>

#include "Project/HitSensor/SensorHitGroup.h"

namespace al {
class LiveActor;

class HitSensor {
public:
    HitSensor(LiveActor*, const char*, u32, f32, unsigned short, const sead::Vector3<f32>*,
              const sead::Matrix34<f32>*, const sead::Vector3<f32>&);

    bool trySensorSort();
    void setFollowPosPtr(const sead::Vector3<f32>*);
    void setFollowMtxPtr(const sead::Matrix34<f32>*);
    void validate();
    void invalidate();
    void validateBySystem();
    void invalidateBySystem();
    void update();
    void addHitSensor(HitSensor*);

    const char* mName;  // field_0
    s32 field_8;
    f32 field_C;
    f32 field_10;
    f32 field_14;
    f32 field_18;
    unsigned short mMaxSensorCount;  // field_1C
    unsigned short mSensorCount;     // field_1E
    HitSensor** mSensors;            // field_20
    unsigned long field_28;
    SensorHitGroup* mHitGroup;  // field_30
    bool mIsValidBySystem;      // field_38
    bool mIsValid;              // field_39
    bool field_3A[4];                // unknown type
    unsigned short field_3E;
    LiveActor* mParentActor;                // field_40
    const sead::Vector3<f32>* mFollowPos;   // field_48
    const sead::Matrix34<f32>* mFollowMtx;  // field_50
};
}  // namespace al
