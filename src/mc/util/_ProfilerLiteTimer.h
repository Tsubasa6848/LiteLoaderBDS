#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ProfilerLite.h"

class _ProfilerLiteTimer {
public:
    // prevent constructor by default
    _ProfilerLiteTimer& operator=(_ProfilerLiteTimer const&);
    _ProfilerLiteTimer(_ProfilerLiteTimer const&);
    _ProfilerLiteTimer();

public:
    // NOLINTBEGIN
    MCAPI _ProfilerLiteTimer(struct ProfilerLite::ScopedData& scopedData, std::thread::id threadId);

    MCAPI ~_ProfilerLiteTimer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ProfilerLite::ScopedData& scopedData, std::thread::id threadId);

    MCAPI void dtor$();

    // NOLINTEND
};
