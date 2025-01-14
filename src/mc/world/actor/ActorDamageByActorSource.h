#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/network/packet/types/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/actor/ActorType.h"

class ActorDamageByActorSource : public ::ActorDamageSource {
public:
    class BlockSource const* mRegion;           // this+0x10
    bool                     mIsWorldBuilder;   // this+0x18
    bool                     mIsCreative;       // this+0x19
    ActorUniqueID            mEntityID;         // this+0x20
    ::ActorType              mEntityType;       // this+0x28
    ::ActorCategory          mEntityCategories; // this+0x2C
    std::string              mEntityNameTag;    // this+0x30

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDamageByActorSource();

    // vIndex: 1
    virtual bool isEntitySource() const;

    // vIndex: 10
    virtual std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string deadName, class Actor* dead) const;

    // vIndex: 11
    virtual bool getIsCreative() const;

    // vIndex: 12
    virtual bool getIsWorldBuilder() const;

    // vIndex: 13
    virtual struct ActorUniqueID getEntityUniqueID() const;

    // vIndex: 14
    virtual ::ActorType getEntityType() const;

    // vIndex: 15
    virtual ::ActorCategory getEntityCategories() const;

    // vIndex: 18
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;

    // vIndex: 19
    virtual ::ActorType getDamagingEntityType() const;

    // vIndex: 21
    virtual std::unique_ptr<class ActorDamageSource> clone() const;

    MCAPI ActorDamageByActorSource(class Actor const& actor, ::ActorDamageCause cause);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Actor const& actor, ::ActorDamageCause cause);

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class ActorDamageSource> clone$() const;

    MCAPI ::ActorType getDamagingEntityType$() const;

    MCAPI struct ActorUniqueID getDamagingEntityUniqueID$() const;

    MCAPI std::pair<std::string, std::vector<std::string>>
          getDeathMessage$(std::string deadName, class Actor* dead) const;

    MCAPI ::ActorCategory getEntityCategories$() const;

    MCAPI ::ActorType getEntityType$() const;

    MCAPI struct ActorUniqueID getEntityUniqueID$() const;

    MCAPI bool getIsCreative$() const;

    MCAPI bool getIsWorldBuilder$() const;

    MCAPI bool isEntitySource$() const;

    // NOLINTEND
};
