#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class StopSoundPacket : public ::Packet {
public:
    std::string mName;    // this+0x30
    bool        mStopAll; // this+0x50

    // prevent constructor by default
    StopSoundPacket& operator=(StopSoundPacket const&);
    StopSoundPacket(StopSoundPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StopSoundPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI StopSoundPacket();

    MCAPI StopSoundPacket(std::string const& name, bool stopAll);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(std::string const& name, bool stopAll);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
