#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/ActorDamageCause.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/ActorDamageCause.h"

class HurtArmorPacket : public ::Packet {
public:
    ActorDamageCause mCause;      // this+0x30
    int              mDmg;        // this+0x34
    std::bitset<4>   mArmorSlots; // this+0x38

    // prevent constructor by default
    HurtArmorPacket& operator=(HurtArmorPacket const&);
    HurtArmorPacket(HurtArmorPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HurtArmorPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI HurtArmorPacket();

    MCAPI HurtArmorPacket(::ActorDamageCause cause, int dmg, std::bitset<4> armorSlots);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::ActorDamageCause cause, int dmg, std::bitset<4> armorSlots);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
