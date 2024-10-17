#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IConnectionEventing {
public:
    // IConnectionEventing inner types define
    enum class ConnectionFailureReason {};

    enum class PlayerJoinWorldAttemptState {};

    enum class ServerConnectionOutcome {};

    enum class SignalServiceConnectState {};

public:
    // prevent constructor by default
    IConnectionEventing& operator=(IConnectionEventing const&);
    IConnectionEventing(IConnectionEventing const&);
    IConnectionEventing();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IConnectionEventing();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
