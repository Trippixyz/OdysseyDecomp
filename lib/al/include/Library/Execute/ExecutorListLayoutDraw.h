#pragma once

#include "Library/Layout/LayoutActor.h"

namespace al {

class ExecuteSystemInitInfo;

class ExecutorListLayoutDraw
{
    // unfinished cuz yeah
};

class ExecutorListLayoutDrawBase : public ExecutorListLayoutDraw
{
public:
    ExecutorListLayoutDrawBase(char const*, int, al::ExecuteSystemInitInfo const&);
    ~ExecutorListLayoutDrawBase();

    void registerLayout(al::LayoutActor*);
    void executeList() const;
    void isActive() const;

private:
    char unk1[0x14];
public:
    s32 mLayoutActorsCount;
    al::LayoutActor** mLayoutActors;
};

}