#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/Player.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::player {

/**
 * @brief Player use respawn anchor event.
 * @details This event is called when a player uses a respawn anchor.
 */
class PlayerUseRespawnAnchorEvent : public Event<PlayerUseRespawnAnchorEvent>, public Cancellable {
    LL_RO_MEMBER(Player*, player, getPlayer);
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);

    explicit PlayerUseRespawnAnchorEvent(Player* player, const BlockInstance& blockInstance);

    LL_DELETE_COPY(PlayerUseRespawnAnchorEvent);
    LL_DELETE_MOVE(PlayerUseRespawnAnchorEvent);
};

} // namespace ll::event::player
