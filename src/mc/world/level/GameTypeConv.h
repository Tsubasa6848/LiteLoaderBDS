#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

namespace GameTypeConv {
// NOLINTBEGIN
MCAPI std::string gameTypeToNonLocString(::GameType type);

MCAPI std::string gameTypeToString(::GameType type);

MCAPI ::GameType intToGameType(int id);

MCAPI ::GameType intToGameTypeForCommands(int id);

MCAPI ::GameType stringToGameType(std::string const& str);
// NOLINTEND

}; // namespace GameTypeConv
