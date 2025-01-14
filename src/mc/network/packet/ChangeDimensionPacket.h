#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class ChangeDimensionPacket : public ::Packet {
public:
    DimensionType mDimensionId; // this+0x30
    Vec3          mPos;         // this+0x34
    bool          mRespawn;     // this+0x40

    // prevent constructor by default
    ChangeDimensionPacket& operator=(ChangeDimensionPacket const&);
    ChangeDimensionPacket(ChangeDimensionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChangeDimensionPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI ChangeDimensionPacket();

    MCAPI ChangeDimensionPacket(DimensionType dimensionId, class Vec3 pos, bool respawn);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(DimensionType dimensionId, class Vec3 pos, bool respawn);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
