#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class LevelSoundEventPacket : public ::Packet {

public:
    LevelSoundEvent mEventId;          // this+0x30
    Vec3            mPos;              // this+0x34
    int             mData;             // this+0x40
    std::string     mEntityIdentifier; // this+0x48
    bool            mIsBabyMob;        // this+0x68
    bool            mIsGlobal;         // this+0x69


    // prevent constructor by default
    LevelSoundEventPacket& operator=(LevelSoundEventPacket const&) = delete;
    LevelSoundEventPacket(LevelSoundEventPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_destructor_0
     */
    virtual ~LevelSoundEventPacket();
    /**
     * @vftbl 1
     * @symbol ?getId\@LevelSoundEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@LevelSoundEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@LevelSoundEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@LevelSoundEventPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol
     * ??0LevelSoundEventPacket\@\@QEAA\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N3\@Z
     */
    MCAPI LevelSoundEventPacket(enum class LevelSoundEvent, class Vec3 const&, int, std::string const&, bool, bool);
    /**
     * @symbol ??0LevelSoundEventPacket\@\@QEAA\@XZ
     */
    MCAPI LevelSoundEventPacket();
    // NOLINTEND
};
