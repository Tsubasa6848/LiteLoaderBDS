#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayStateMode.h"

struct ReplayStateConfig {
public:
    // prevent constructor by default
    ReplayStateConfig& operator=(ReplayStateConfig const&);
    ReplayStateConfig(ReplayStateConfig const&);
    ReplayStateConfig();

public:
    // NOLINTBEGIN
    MCAPI explicit ReplayStateConfig(::ReplayStateMode mode);

    MCAPI uint64 getSanitizedHistorySize() const;

    MCAPI void setReplayStateConfigThresholds(float baseThreshold);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(::ReplayStateMode mode);

    // NOLINTEND
};
