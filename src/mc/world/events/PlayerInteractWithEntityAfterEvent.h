#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractWithEntityAfterEvent {
public:
    // prevent constructor by default
    PlayerInteractWithEntityAfterEvent& operator=(PlayerInteractWithEntityAfterEvent const&);
    PlayerInteractWithEntityAfterEvent();

public:
    // NOLINTBEGIN
    MCAPI PlayerInteractWithEntityAfterEvent(struct PlayerInteractWithEntityAfterEvent const&);

    MCAPI ~PlayerInteractWithEntityAfterEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct PlayerInteractWithEntityAfterEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
