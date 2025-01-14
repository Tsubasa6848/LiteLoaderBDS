#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class ControlledByPlayerGoal : public ::Goal {
public:
    // prevent constructor by default
    ControlledByPlayerGoal& operator=(ControlledByPlayerGoal const&);
    ControlledByPlayerGoal(ControlledByPlayerGoal const&);
    ControlledByPlayerGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ControlledByPlayerGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI explicit ControlledByPlayerGoal(class Mob& mob);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canBeControlledByPassenger();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Mob& mob);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
