#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

class RealmsUnknownPackSource : public ::PackSource {
public:
    // prevent constructor by default
    RealmsUnknownPackSource& operator=(RealmsUnknownPackSource const&);
    RealmsUnknownPackSource(RealmsUnknownPackSource const&);
    RealmsUnknownPackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RealmsUnknownPackSource() = default;

    // vIndex: 1
    virtual void forEachPackConst(std::function<void(class Pack const&)> callback) const;

    // vIndex: 2
    virtual void forEachPack(std::function<void(class Pack&)> callback);

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4
    virtual ::PackType getPackType() const;

    // vIndex: 5
    virtual class PackSourceReport load(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void forEachPack$(std::function<void(class Pack&)> callback);

    MCAPI void forEachPackConst$(std::function<void(class Pack const&)> callback) const;

    MCAPI ::PackOrigin getPackOrigin$() const;

    MCAPI ::PackType getPackType$() const;

    MCAPI class PackSourceReport load$(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
