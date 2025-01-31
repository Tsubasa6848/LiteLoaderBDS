#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class PrivilegeScope {
public:
    // prevent constructor by default
    PrivilegeScope& operator=(PrivilegeScope const&);
    PrivilegeScope(PrivilegeScope const&);
    PrivilegeScope();

public:
    // NOLINTBEGIN
    MCAPI ~PrivilegeScope();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
