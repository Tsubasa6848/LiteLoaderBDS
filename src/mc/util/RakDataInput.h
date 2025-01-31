#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/BitStream.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/util/BytesDataInput.h"

class RakDataInput : public ::BytesDataInput {
public:
    RakNet::BitStream* mBitStream;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakDataInput();

    // vIndex: 9
    virtual class Bedrock::Result<void> readBytesResult(void* data, uint64 bytes);

    // vIndex: 10
    virtual uint64 numBytesLeft() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI uint64 numBytesLeft$() const;

    MCAPI class Bedrock::Result<void> readBytesResult$(void* data, uint64 bytes);

    // NOLINTEND
};
