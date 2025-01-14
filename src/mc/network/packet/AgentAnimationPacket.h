#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/agent/AgentAnimation.h"

class AgentAnimationPacket : public ::Packet {
public:
    AgentAnimation mAnimation;
    ActorRuntimeID mEntityRuntimeID;

    // prevent constructor by default
    AgentAnimationPacket& operator=(AgentAnimationPacket const&);
    AgentAnimationPacket(AgentAnimationPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentAnimationPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI AgentAnimationPacket();

    MCAPI AgentAnimationPacket(::AgentAnimation anim, class ActorRuntimeID runtimeId);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(::AgentAnimation anim, class ActorRuntimeID runtimeId);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
