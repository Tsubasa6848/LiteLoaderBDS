#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasAnySlotEmptyTest : public ::FilterTest {
public:
    // prevent constructor by default
    ActorHasAnySlotEmptyTest& operator=(ActorHasAnySlotEmptyTest const&);
    ActorHasAnySlotEmptyTest(ActorHasAnySlotEmptyTest const&);
    ActorHasAnySlotEmptyTest();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorHasAnySlotEmptyTest();

    // vIndex: 1
    virtual bool setup(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // vIndex: 2
    virtual bool evaluate(struct FilterContext const& context) const;

    // vIndex: 4
    virtual std::string_view getName() const;

    // vIndex: 6
    virtual class Json::Value _serializeValue() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI class Json::Value _serializeValue$() const;

    MCAPI bool evaluate$(struct FilterContext const& context) const;

    MCAPI std::string_view getName$() const;

    MCAPI bool setup$(struct FilterTest::Definition const& definition, struct FilterInputs const& inputs);

    // NOLINTEND
};
