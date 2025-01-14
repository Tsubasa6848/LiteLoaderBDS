#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangScriptArg.h"

struct MolangScriptArg;

struct MolangMemberVariable {
    HashedString    mName;
    MolangScriptArg mData;

public:
    // NOLINTBEGIN
    MCAPI ~MolangMemberVariable();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
