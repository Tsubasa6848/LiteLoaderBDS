#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct UseAnimationItemComponent {
public:
    // prevent constructor by default
    UseAnimationItemComponent& operator=(UseAnimationItemComponent const&);
    UseAnimationItemComponent(UseAnimationItemComponent const&);
    UseAnimationItemComponent();

public:
    // NOLINTBEGIN
    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
