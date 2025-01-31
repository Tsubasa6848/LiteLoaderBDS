#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct WeaponItemComponent {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WeaponItemComponent();

    MCAPI WeaponItemComponent();

    MCAPI WeaponItemComponent(struct WeaponItemComponent const&);

    MCAPI struct WeaponItemComponent& operator=(struct WeaponItemComponent&&);

    MCAPI struct WeaponItemComponent& operator=(struct WeaponItemComponent const&);

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(struct WeaponItemComponent const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
