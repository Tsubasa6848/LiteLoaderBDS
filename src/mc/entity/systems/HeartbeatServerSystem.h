#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ITickingSystem.h"

class HeartbeatServerSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    HeartbeatServerSystem& operator=(HeartbeatServerSystem const&);
    HeartbeatServerSystem(HeartbeatServerSystem const&);
    HeartbeatServerSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HeartbeatServerSystem() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void tick(class EntityRegistry& registry);

    // vIndex: 3
    virtual void singleTick(class EntityRegistry& registry, class EntityContext& entity);

    // vIndex: 4
    virtual void singleTick(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(class EntityRegistry& registry, class EntityContext& entity);

    MCAPI void singleTick$(class EntityRegistry& registry, class StrictEntityContext& entityContext);

    MCAPI void tick$(class EntityRegistry& registry);

    // NOLINTEND
};
