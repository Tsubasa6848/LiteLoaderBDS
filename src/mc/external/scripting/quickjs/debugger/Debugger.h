#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/IDebuggerController.h"
#include "mc/scripting/debugger/DebuggerLogLevel.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IDebuggerController; }
struct JSContext;
struct JSRuntime;
struct JSValue;
// clang-format on

namespace Scripting::QuickJS {

class Debugger : public ::Scripting::IDebuggerController {
public:
    // prevent constructor by default
    Debugger& operator=(Debugger const&);
    Debugger(Debugger const&);
    Debugger();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Debugger() = default;

    // vIndex: 1
    virtual bool listen(ushort port);

    // vIndex: 2
    virtual bool connect(std::string const& host, ushort port);

    // vIndex: 3
    virtual void disconnect();

    // vIndex: 4
    virtual void pollConnections();

    // vIndex: 5
    virtual bool closed() const;

    // vIndex: 6
    virtual bool isListening() const;

    // vIndex: 7
    virtual void sendMessage(std::string const& message) const;

    // vIndex: 8
    virtual void sendLog(::Scripting::DebuggerLogLevel logLevel, std::string_view message) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _tryAttach();

    MCAPI static uint ContextToId(struct JSContext* ctx, void*);

    MCAPI static void NotifyResume(void* udata);

    MCAPI static char const* ToTypeName(struct JSContext* ctx, struct JSValue val);

    MCAPI static void TransportClose(struct JSRuntime* rt, void* udata);

    MCAPI static uint64 TransportPeek(void* udata);

    MCAPI static uint64 TransportRead(void* udata, char* buffer, uint64 length);

    MCAPI static uint64 TransportWrite(void* udata, char const* buffer, uint64 length);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool closed$() const;

    MCAPI bool connect$(std::string const& host, ushort port);

    MCAPI void disconnect$();

    MCAPI bool isListening$() const;

    MCAPI bool listen$(ushort port);

    MCAPI void pollConnections$();

    MCAPI void sendLog$(::Scripting::DebuggerLogLevel logLevel, std::string_view message) const;

    MCAPI void sendMessage$(std::string const& message) const;

    // NOLINTEND
};

}; // namespace Scripting::QuickJS
