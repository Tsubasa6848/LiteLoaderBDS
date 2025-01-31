#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorType.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class LevelSoundEventPacketV1 : public ::Packet {
public:
    Puv::Legacy::LevelSoundEvent mEventId;    // this+0x30
    Vec3                         mPos;        // this+0x34
    int                          mData;       // this+0x40
    ActorType                    mEntityType; // this+0x44
    bool                         mIsBabyMob;  // this+0x48
    bool                         mIsGlobal;   // this+0x49

    // prevent constructor by default
    LevelSoundEventPacketV1& operator=(LevelSoundEventPacketV1 const&);
    LevelSoundEventPacketV1(LevelSoundEventPacketV1 const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelSoundEventPacketV1() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI LevelSoundEventPacketV1();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
