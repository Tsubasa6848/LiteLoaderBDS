#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSoundEventUtils {
public:
    // prevent constructor by default
    LevelSoundEventUtils& operator=(LevelSoundEventUtils const&);
    LevelSoundEventUtils(LevelSoundEventUtils const&);
    LevelSoundEventUtils();

public:
    // NOLINTBEGIN
    MCAPI static int serializePercentageToData(float valueToSerialize);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static int const& MAX_INT_REPRESENTABLE_AS_FLOAT();

    // NOLINTEND
};
