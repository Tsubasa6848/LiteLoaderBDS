#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakPeerInterface {
public:
    // prevent constructor by default
    RakPeerInterface& operator=(RakPeerInterface const&);
    RakPeerInterface(RakPeerInterface const&);
    RakPeerInterface();

    using Deleter       = void(RakPeerInterface*);
    using InstanceOwner = std::unique_ptr<RakPeerInterface, Deleter*>;

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakPeerInterface();

    MCAPI static void DestroyInstance(class RakNet::RakPeerInterface* i);

    MCAPI static class RakNet::RakPeerInterface* GetInstance();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace RakNet

MCAPI RakNet::RakPeerInterface::InstanceOwner createUniqueRakPeer();
