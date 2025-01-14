#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
// clang-format on

namespace Bedrock::JSONObject {

class StringNode {
public:
    // prevent constructor by default
    StringNode& operator=(StringNode const&);
    StringNode(StringNode const&);
    StringNode();

public:
    // NOLINTBEGIN
    MCAPI char const* getCString(uint64* outputLength) const;

    MCAPI bool set(std::string_view str, bool copy);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI explicit StringNode(class Bedrock::JSONObject::MemoryPage* owningPage);

    MCAPI bool _isConst() const;

    MCAPI bool _isSSO() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Bedrock::JSONObject::MemoryPage* owningPage);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
