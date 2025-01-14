#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class IAppPlatform : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IAppPlatform& operator=(IAppPlatform const&);
    IAppPlatform(IAppPlatform const&);
    IAppPlatform();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IAppPlatform();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
