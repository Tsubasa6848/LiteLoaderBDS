#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockMaterialInstancesDescription : public ::BlockComponentDescription {
public:
    // prevent constructor by default
    BlockMaterialInstancesDescription& operator=(BlockMaterialInstancesDescription const&);
    BlockMaterialInstancesDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockMaterialInstancesDescription();

    // vIndex: 1
    virtual std::string const& getName() const;

    // vIndex: 3
    virtual void initializeComponent(class BlockComponentStorage& blockComponentStorage) const;

    // vIndex: 5
    virtual void initializeComponentFromCode(class BlockComponentStorage& blockComponentStorage) const;

    // vIndex: 7
    virtual bool isNetworkComponent() const;

    // vIndex: 8
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 9
    virtual void initializeFromNetwork(class CompoundTag const& tag, struct cereal::ReflectionCtx const&);

    MCAPI BlockMaterialInstancesDescription(struct BlockMaterialInstancesDescription&&);

    MCAPI BlockMaterialInstancesDescription(struct BlockMaterialInstancesDescription const&);

    MCAPI BlockMaterialInstancesDescription(
        std::string const& textureName,
        ::BlockRenderLayer renderLayer,
        bool               ambientOcclusion,
        bool               faceDimming
    );

    MCAPI struct BlockMaterialInstancesDescription& operator=(struct BlockMaterialInstancesDescription&&);

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(struct BlockMaterialInstancesDescription&&);

    MCAPI void*
    ctor$(std::string const& textureName, ::BlockRenderLayer renderLayer, bool ambientOcclusion, bool faceDimming);

    MCAPI void* ctor$(struct BlockMaterialInstancesDescription const&);

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag$(struct cereal::ReflectionCtx const&) const;

    MCAPI std::string const& getName$() const;

    MCAPI void initializeComponent$(class BlockComponentStorage& blockComponentStorage) const;

    MCAPI void initializeComponentFromCode$(class BlockComponentStorage& blockComponentStorage) const;

    MCAPI void initializeFromNetwork$(class CompoundTag const& tag, struct cereal::ReflectionCtx const&);

    MCAPI bool isNetworkComponent$() const;

    MCAPI static std::string const& NameID();

    // NOLINTEND
};
