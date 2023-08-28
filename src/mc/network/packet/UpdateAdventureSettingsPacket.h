#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/AdventureSettings.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class UpdateAdventureSettingsPacket : public ::Packet {

public:
    AdventureSettings mAdventureSettings; // this+0x30

    // prevent constructor by default
    UpdateAdventureSettingsPacket& operator=(UpdateAdventureSettingsPacket const&) = delete;
    UpdateAdventureSettingsPacket(UpdateAdventureSettingsPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateAdventureSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateAdventureSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateAdventureSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateAdventureSettingsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEADVENTURESETTINGSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateAdventureSettingsPacket();
#endif
    /**
     * @symbol ??0UpdateAdventureSettingsPacket\@\@QEAA\@AEBUAdventureSettings\@\@\@Z
     */
    MCAPI UpdateAdventureSettingsPacket(struct AdventureSettings const&);
    /**
     * @symbol ??0UpdateAdventureSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateAdventureSettingsPacket();
    // NOLINTEND
};
