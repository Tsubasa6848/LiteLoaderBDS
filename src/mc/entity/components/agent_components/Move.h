#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/agent/agent_components/Direction.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

namespace AgentComponents {

class Move {
public:
    // prevent constructor by default
    Move& operator=(Move const&);
    Move(Move const&);
    Move();

public:
    // NOLINTBEGIN
    MCAPI static void
    setup(class AgentComponents::Move& move, class EntityContext& entity, ::AgentComponents::Direction dir);

    // NOLINTEND
};

}; // namespace AgentComponents
