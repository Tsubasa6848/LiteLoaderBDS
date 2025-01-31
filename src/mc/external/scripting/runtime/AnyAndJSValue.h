#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct AnyAndJSValue {
public:
    // prevent constructor by default
    AnyAndJSValue& operator=(AnyAndJSValue const&);
    AnyAndJSValue(AnyAndJSValue const&);
    AnyAndJSValue();

public:
    // NOLINTBEGIN
    MCAPI ~AnyAndJSValue();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
