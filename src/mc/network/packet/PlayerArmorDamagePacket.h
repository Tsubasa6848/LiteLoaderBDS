#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class PlayerArmorDamagePacket : public ::Packet {
public:
    std::bitset<4>       mSlots;   // this+0x30
    std::array<short, 4> mDamages; // this+0x34

    // prevent constructor by default
    PlayerArmorDamagePacket& operator=(PlayerArmorDamagePacket const&);
    PlayerArmorDamagePacket(PlayerArmorDamagePacket const&);
    PlayerArmorDamagePacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerArmorDamagePacket();

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

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
