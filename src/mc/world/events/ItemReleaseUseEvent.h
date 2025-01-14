#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemReleaseUseEvent {
public:
    // prevent constructor by default
    ItemReleaseUseEvent& operator=(ItemReleaseUseEvent const&);
    ItemReleaseUseEvent(ItemReleaseUseEvent const&);
    ItemReleaseUseEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ItemReleaseUseEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
