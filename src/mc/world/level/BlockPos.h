#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkPos.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class AABB;
class BoundingBox;
class Vec3;

class BlockPos : public ll::math::intN3<BlockPos> {
public:
    using intN3::intN3;

    LLNDAPI operator AABB() const;
    LLNDAPI operator BoundingBox() const;

    LLNDAPI Vec3 bottomCenter() const;
    LLNDAPI Vec3 center() const;

public:
    // NOLINTBEGIN
    MCAPI explicit BlockPos(class SubChunkPos const& subChunkPos);

    MCAPI BlockPos(class ChunkPos const& cp, int y);

    MCAPI BlockPos(class ChunkPos const& cp, class ChunkBlockPos const& offset, short minDimensionHeight);

    MCAPI BlockPos(float x, float y, float z);

    MCAPI class BlockPos above() const;

    MCAPI class BlockPos neighbor(uchar direction) const;

    MCAPI explicit operator class Vec3() const;

    MCAPI int randomSeed() const;

    MCAPI class BlockPos relative(uchar facing, int steps) const;

    MCAPI std::string toCommandString() const;

    MCAPI std::string toString() const;

    MCAPI class BlockPos transform(::Rotation rotation, ::Mirror mirror, class Vec3 const& pivot) const;

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(float x, float y, float z);

    MCAPI void* ctor$(class ChunkPos const& cp, int y);

    MCAPI void* ctor$(class Vec3 const& v);

    MCAPI void* ctor$(class SubChunkPos const& subChunkPos);

    MCAPI void* ctor$(class ChunkPos const& cp, class ChunkBlockPos const& offset, short minDimensionHeight);

    MCAPI static class BlockPos const& MAX();

    MCAPI static class BlockPos const& MIN();

    MCAPI static class BlockPos const& ONE();

    MCAPI static class BlockPos const& ZERO();

    // NOLINTEND
};
