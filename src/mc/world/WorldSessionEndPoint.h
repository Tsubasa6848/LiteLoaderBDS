#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/ContentLogEndPoint.h"
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

class WorldSessionEndPoint : public ::ContentLogEndPoint {
public:
    // prevent constructor by default
    WorldSessionEndPoint& operator=(WorldSessionEndPoint const&);
    WorldSessionEndPoint(WorldSessionEndPoint const&);
    WorldSessionEndPoint();

public:
    // NOLINTBEGIN
    MCVAPI void flush();

    MCVAPI bool isEnabled() const;

    MCVAPI void log(::LogArea area, ::LogLevel level, char const* message);

    MCVAPI bool logOnlyOnce() const;

    MCVAPI void setEnabled(bool newState);

    MCAPI explicit WorldSessionEndPoint(class IMinecraftEventing& eventing);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** vftableForBedrockLogEndPoint();

    MCAPI void* ctor$(class IMinecraftEventing& eventing);

    MCAPI void flush$();

    MCAPI bool isEnabled$() const;

    MCAPI void log$(::LogArea area, ::LogLevel level, char const* message);

    MCAPI bool logOnlyOnce$() const;

    MCAPI void setEnabled$(bool newState);

    // NOLINTEND
};
