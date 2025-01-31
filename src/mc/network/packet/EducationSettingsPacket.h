#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/EducationLevelSettings.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class EducationSettingsPacket : public ::Packet {
public:
    EducationLevelSettings mEducationLevelSettings;

    // prevent constructor by default
    EducationSettingsPacket& operator=(EducationSettingsPacket const&);
    EducationSettingsPacket(EducationSettingsPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EducationSettingsPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI EducationSettingsPacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
