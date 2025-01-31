#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class EatCarriedItemGoal : public ::Goal {
public:
    // prevent constructor by default
    EatCarriedItemGoal& operator=(EatCarriedItemGoal const&);
    EatCarriedItemGoal(EatCarriedItemGoal const&);
    EatCarriedItemGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EatCarriedItemGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI EatCarriedItemGoal(class Mob& mob, int startDelay);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Mob& mob, int startDelay);

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canContinueToUse$();

    MCAPI bool canUse$();

    MCAPI void start$();

    MCAPI void stop$();

    MCAPI void tick$();

    MCAPI static int const& CHEW_CHANCE();

    MCAPI static int const& EATING_TIME();

    // NOLINTEND
};
