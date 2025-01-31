#include "ll/api/memory/Memory.h"

#include <execution>
#include <optional>
#include <vector>

#include "pl/SymbolProvider.h"

#include "ll/api/io/Logger.h"
#include "ll/api/service/GamingStatus.h"
#include "ll/api/thread/GlobalThreadPauser.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"
#include "ll/core/LeviLamina.h"

#include "mc/deps/core/memory/IMemoryAllocator.h"

#include "demangler/Demangle.h"

namespace ll::memory {
LLNDAPI FuncPtr resolveSignature(std::string_view signature, std::span<std::byte> range) {
    if (range.empty() || signature.empty()) {
        return nullptr;
    }
    return Signature::parse(signature).view().resolve(range);
}
LLNDAPI FuncPtr resolveSignature(std::string_view signature) {
    return resolveSignature(signature, sys_utils::getImageRange());
}
LLAPI FuncPtr resolveSymbol(std::string_view symbol, bool disableErrorOutput) {
    auto sym = SymbolView{symbol};
    auto res = sym.resolve(true);
    if (!disableErrorOutput && res == nullptr) {
        getLogger().fatal("Couldn't find: {}", sym.toString());
        getLogger().fatal("In module: {}", sys_utils::getCallerModuleFileName());
    }
    return res;
}
} // namespace ll::memory
