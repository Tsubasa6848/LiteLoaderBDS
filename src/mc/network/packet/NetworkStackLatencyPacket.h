#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class NetworkStackLatencyPacket : public ::Packet {
public:
    std::chrono::steady_clock::time_point mCreateTime; // this+0x30
    bool                                  mFromServer; // this+0x38

    // prevent constructor by default
    NetworkStackLatencyPacket& operator=(NetworkStackLatencyPacket const&);
    NetworkStackLatencyPacket(NetworkStackLatencyPacket const&);
    NetworkStackLatencyPacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkStackLatencyPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
