#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/minecraft_camera/CameraInstruction.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class CameraInstructionPacket : public ::Packet {
public:
    CameraInstruction mData;

    // prevent constructor by default
    CameraInstructionPacket& operator=(CameraInstructionPacket const&);
    CameraInstructionPacket(CameraInstructionPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraInstructionPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI CameraInstructionPacket();

    MCAPI explicit CameraInstructionPacket(struct CameraInstruction const& cameraInstruction);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(struct CameraInstruction const& cameraInstruction);

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI class Bedrock::Result<void> read$(class ReadOnlyBinaryStream& stream);

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
