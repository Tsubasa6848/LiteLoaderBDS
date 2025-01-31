#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TripWireTripEvent {
public:
    // prevent constructor by default
    TripWireTripEvent& operator=(TripWireTripEvent const&);
    TripWireTripEvent();

public:
    // NOLINTBEGIN
    MCAPI TripWireTripEvent(struct TripWireTripEvent const&);

    MCAPI ~TripWireTripEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct TripWireTripEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
