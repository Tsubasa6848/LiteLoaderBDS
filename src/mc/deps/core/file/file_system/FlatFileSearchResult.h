#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FlatFileSearchResult {
public:
    // prevent constructor by default
    FlatFileSearchResult& operator=(FlatFileSearchResult const&);
    FlatFileSearchResult(FlatFileSearchResult const&);
    FlatFileSearchResult();

public:
    // NOLINTBEGIN
    MCAPI ~FlatFileSearchResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core
