#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ClientRequestPlaceholderBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ClientRequestPlaceholderBlock& operator=(ClientRequestPlaceholderBlock const&);
    ClientRequestPlaceholderBlock(ClientRequestPlaceholderBlock const&);
    ClientRequestPlaceholderBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientRequestPlaceholderBlock() = default;

    // vIndex: 4
    virtual class HitResult
    clip(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const& A, class Vec3 const& B, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI ClientRequestPlaceholderBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI class HitResult
    clip$(class Block const&, class BlockSource const&, class BlockPos const&, class Vec3 const& A, class Vec3 const& B, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // NOLINTEND
};
