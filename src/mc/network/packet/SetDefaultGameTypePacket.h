#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/GameType.h"

class SetDefaultGameTypePacket : public ::Packet {
public:
    GameType mDefaultGameType; // this+0x30

    // prevent constructor by default
    SetDefaultGameTypePacket& operator=(SetDefaultGameTypePacket const&);
    SetDefaultGameTypePacket(SetDefaultGameTypePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetDefaultGameTypePacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetDefaultGameTypePacket();

    MCAPI explicit SetDefaultGameTypePacket(::GameType defaultGameType);

    // NOLINTEND
};
