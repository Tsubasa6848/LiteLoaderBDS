#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/LogAreaID.h"
#include "mc/diagnostics/LogLevel.h"

namespace Bedrock {

struct CallStack {
public:
    // CallStack inner types declare
    // clang-format off
    struct Context;
    struct Frame;
    struct FrameWithContext;
    // clang-format on

    // CallStack inner types define
    struct Context {
    public:
        std::string                        mMessage;
        std::optional<::Bedrock::LogLevel> mLogLevel;
        std::optional<::LogAreaID>         mLogAreaID;

    public:
        // NOLINTBEGIN
        MCAPI
        Context(std::string value, std::optional<::Bedrock::LogLevel> logLevel, std::optional<::LogAreaID> logArea);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void*
        ctor$(std::string value, std::optional<::Bedrock::LogLevel> logLevel, std::optional<::LogAreaID> logArea);

        MCAPI void dtor$();

        // NOLINTEND
    };

    struct Frame {
    public:
        void* address[3];
    };

    struct FrameWithContext {
    public:
        Frame                  mFrame;
        std::optional<Context> mContext;

    public:
        // NOLINTBEGIN
        MCAPI FrameWithContext(
            struct Bedrock::CallStack::Frame&&                  frame,
            std::optional<struct Bedrock::CallStack::Context>&& context
        );

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void*
        ctor$(struct Bedrock::CallStack::Frame&& frame, std::optional<struct Bedrock::CallStack::Context>&& context);

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    std::vector<Bedrock::CallStack::FrameWithContext> vector;

    CallStack(struct Bedrock::CallStack const&)            = default;
    CallStack& operator=(struct Bedrock::CallStack const&) = default;

public:
    // NOLINTBEGIN
    MCAPI explicit CallStack(std::vector<struct Bedrock::CallStack::FrameWithContext>&& frames);

    MCAPI explicit CallStack(struct Bedrock::CallStack::FrameWithContext&& frame);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Bedrock::CallStack const&);

    MCAPI void* ctor$(struct Bedrock::CallStack::FrameWithContext&& frame);

    MCAPI void* ctor$(std::vector<struct Bedrock::CallStack::FrameWithContext>&& frames);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock
