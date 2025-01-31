#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
namespace br::worldgen { class StructureCache; }
// clang-format on

namespace br::worldgen {

class Beardifier {
public:
    // prevent constructor by default
    Beardifier& operator=(Beardifier const&);
    Beardifier(Beardifier const&);

public:
    // NOLINTBEGIN
    MCAPI Beardifier();

    MCAPI double compute(class BlockPos pos) const;

    MCAPI bool empty() const;

    MCAPI class br::worldgen::Beardifier& operator=(class br::worldgen::Beardifier&&);

    MCAPI ~Beardifier();

    MCAPI static class br::worldgen::Beardifier
    forStructuresInChunk(class br::worldgen::StructureCache const& structureCache, class ChunkPos pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace br::worldgen
