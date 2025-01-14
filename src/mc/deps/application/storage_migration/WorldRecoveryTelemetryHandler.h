#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace Bedrock {

class WorldRecoveryTelemetryHandler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    WorldRecoveryTelemetryHandler& operator=(WorldRecoveryTelemetryHandler const&);
    WorldRecoveryTelemetryHandler(WorldRecoveryTelemetryHandler const&);
    WorldRecoveryTelemetryHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldRecoveryTelemetryHandler();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock
