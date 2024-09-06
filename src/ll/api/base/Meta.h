#pragma once

#include <cstddef>
#include <utility>

#include "ll/api/base/CompilerPredefine.h"
#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/base/TypeTraits.h"

namespace ll::meta {
namespace detail {
template <class Fn, size_t... N>
constexpr void unrollImpl(Fn&& fn, std::integer_sequence<size_t, N...>) {
    (void(std::forward<Fn>(fn)(N)), ...);
}

template <size_t N, int Strategy>
struct VisitStrategy;

template <size_t N>
struct VisitStrategy<N, -1> {
    // Fallback strategy for visitations with too many total states for the following "switch" strategies.
    template <class T, class... Ts>
    static constexpr std::array<std::decay_t<T>, sizeof...(Ts) + 1> makeVisitorArray(T&& t, Ts&&... ts) {
        return {
            {std::forward<T>(t), std::forward<Ts>(ts)...}
        };
    }
    template <class Ret, class Fn, size_t I, class... Args>
    static constexpr Ret invokeVisitor(Fn&& fn, Args&&... args) {
        return std::forward<Fn>(fn).template operator()<I>(std::forward<Args>(args)...);
    }

    template <class Ret, class Fn, class... Args, size_t... Ns>
    static constexpr decltype(auto) makeCallers(std::integer_sequence<size_t, Ns...>) {
        return makeVisitorArray(&invokeVisitor<Ret, Fn, Ns, Args...>...);
    }
    template <class Ret, class Fn, class... Args>
    static constexpr decltype(auto) callers = makeCallers<Ret, Fn, Args...>(std::make_index_sequence<N>());

    template <class Ret, class Fn, class... Args>
    static constexpr Ret impl(size_t idx, Fn&& fn, Args&&... args) { // dispatch a visitation with many potential states
        static_assert(N > 256);
        return callers<Ret, Fn, Args...>[idx](std::forward<Fn>(fn), std::forward<Args>(args)...);
    }
};

template <size_t N>
struct VisitStrategy<N, 0> {
    template <class Ret, class Fn, class... Args>
    static constexpr Ret impl(size_t idx, Fn&& fn, Args&&... args) { // dispatch a visitation with 4^0 potential states
        return std::forward<Fn>(fn).template operator()<0>(std::forward<Args>(args)...);
    }
};

#ifndef LL_VISIT_CASE
#define LL_VISIT_CASE(n)                                                                                               \
    case (n):                                                                                                          \
        if constexpr ((n) < N) {                                                                                       \
            return std::forward<Fn>(fn).template operator()<(n)>(std::forward<Args>(args)...);                         \
        }                                                                                                              \
        LL_UNREACHABLE;                                                                                                \
        [[fallthrough]]

#define LL_VISIT_STAMP(stamper, n)                                                                                     \
    static_assert(N > (n) / 4 && N <= (n));                                                                            \
    switch (idx) {                                                                                                     \
        stamper(0, LL_VISIT_CASE);                                                                                     \
    default:                                                                                                           \
        LL_UNREACHABLE;                                                                                                \
    }

#define LL_STAMP4(n, x)                                                                                                \
    x(n);                                                                                                              \
    x(n + 1);                                                                                                          \
    x(n + 2);                                                                                                          \
    x(n + 3)
#define LL_STAMP16(n, x)                                                                                               \
    LL_STAMP4(n, x);                                                                                                   \
    LL_STAMP4(n + 4, x);                                                                                               \
    LL_STAMP4(n + 8, x);                                                                                               \
    LL_STAMP4(n + 12, x)
#define LL_STAMP64(n, x)                                                                                               \
    LL_STAMP16(n, x);                                                                                                  \
    LL_STAMP16(n + 16, x);                                                                                             \
    LL_STAMP16(n + 32, x);                                                                                             \
    LL_STAMP16(n + 48, x)
#define LL_STAMP256(n, x)                                                                                              \
    LL_STAMP64(n, x);                                                                                                  \
    LL_STAMP64(n + 64, x);                                                                                             \
    LL_STAMP64(n + 128, x);                                                                                            \
    LL_STAMP64(n + 192, x)

#define LL_STAMP(n, x) x(LL_STAMP##n, n)

template <size_t N>
struct VisitStrategy<N, 1> {
    template <class Ret, class Fn, class... Args>
    static constexpr Ret impl(size_t idx, Fn&& fn, Args&&... args) {
        // dispatch a visitation with 4^1 potential states
        LL_STAMP(4, LL_VISIT_STAMP);
    }
};

template <size_t N>
struct VisitStrategy<N, 2> {
    template <class Ret, class Fn, class... Args>
    static constexpr Ret impl(size_t idx, Fn&& fn, Args&&... args) {
        // dispatch a visitation with 4^2 potential states
        LL_STAMP(16, LL_VISIT_STAMP);
    }
};

template <size_t N>
struct VisitStrategy<N, 3> {
    template <class Ret, class Fn, class... Args>
    static constexpr Ret impl(size_t idx, Fn&& fn, Args&&... args) {
        // dispatch a visitation with 4^3 potential states
        LL_STAMP(64, LL_VISIT_STAMP);
    }
};

template <size_t N>
struct VisitStrategy<N, 4> {
    template <class Ret, class Fn, class... Args>
    static constexpr Ret impl(size_t idx, Fn&& fn, Args&&... args) {
        // dispatch a visitation with 4^4 potential states
        LL_STAMP(256, LL_VISIT_STAMP);
    }
};

#undef LL_VISIT_CASE
#undef LL_VISIT_STAMP
#undef LL_STAMP
#undef LL_STAMP256
#undef LL_STAMP64
#undef LL_STAMP16
#undef LL_STAMP4
#endif

template <class Fn, class... Args>
using VisitIndexResultT = decltype((std::declval<Fn>().template operator()<0>(std::declval<Args>()...)));

template <class Group, auto Id>
struct TypeCounter {
    using tag = TypeCounter;

    struct GenerateTag {
        friend consteval auto isDefined(tag) { return true; }
    };
    friend consteval auto isDefined(tag);

    template <class Tag = tag, auto = isDefined(Tag{})>
    static consteval auto exists(auto) {
        return true;
    }

    static consteval auto exists(...) { return GenerateTag(), false; }
};
} // namespace detail

template <size_t N>
struct PriorityTag : PriorityTag<N - 1> {};
template <>
struct PriorityTag<0> {};

template <class... Components, class F>
constexpr void unrollWithArgs(F&& func) {
    size_t i = 0;
    ((std::forward<F>(func).template operator()<Components>(i++)), ...);
}

template <class... Components, class F>
constexpr void unrollWithArgsNoIndex(F&& func) {
    ((std::forward<F>(func).template operator()<Components>()), ...);
}

template <size_t N, class Fn>
constexpr void unroll(Fn&& fn) {
    detail::unrollImpl(std::forward<Fn>(fn), std::make_index_sequence<N>());
}

template <size_t N, class Fn, class... Args>
constexpr decltype(auto) visitIndex(size_t index, Fn&& fn, Args&&... args) {
    constexpr int strategy = N == 1 ? 0 : N <= 4 ? 1 : N <= 16 ? 2 : N <= 64 ? 3 : N <= 256 ? 4 : -1;
    using Strategy         = typename detail::VisitStrategy<N, strategy>;
    return (Strategy::template impl<detail::VisitIndexResultT<Fn, Args...>>(
        index,
        std::forward<Fn>(fn),
        std::forward<Args>(args)...
    ));
}

template <class Ret, size_t N, class Fn, class... Args>
constexpr Ret visitIndex(size_t index, Fn&& fn, Args&&... args) {
    constexpr int strategy = N == 1 ? 0 : N <= 4 ? 1 : N <= 16 ? 2 : N <= 64 ? 3 : N <= 256 ? 4 : -1;
    using Strategy         = typename detail::VisitStrategy<N, strategy>;
    return Strategy::template impl<Ret>(index, std::forward<Fn>(fn), std::forward<Args>(args)...);
}

template <class... Ts>
class TypeList {
public:
    template <class T>
    static constexpr bool contains = (std::is_same_v<T, Ts> || ...);

    template <template <class> class T>
    static constexpr bool all = (T<Ts>::value && ...);

    template <template <class> class T>
    static constexpr bool any = (T<Ts>::value || ...);

    static constexpr size_t size = sizeof...(Ts);

    template <template <class> class W>
    using wrap = TypeList<W<Ts>...>;

    template <template <class> class M>
    using map = TypeList<typename M<Ts>::type...>;

    template <class T>
    using push_back = TypeList<Ts..., T>;

    template <class T>
    using push_front = TypeList<T, Ts...>;

    template <size_t N>
    using get = traits::get_type_t<N + 1, void, Ts...>;

    template <template <class...> class U>
    using to = U<Ts...>;

    template <class Func>
    static void constexpr forEach(Func&& func) {
        unrollWithArgsNoIndex<Ts...>(func);
    }

    template <class Func>
    static void constexpr forEachIndexed(Func&& func) {
        unrollWithArgs<Ts...>(func);
    }

    template <class T>
    static constexpr size_t index = traits::index_of<T, Ts...>::value;
};

template <class Group, class T, auto Id = int64{}>
[[maybe_unused]] consteval auto uniqueId() {
    if constexpr (detail::TypeCounter<Group, Id>::exists(Id)) {
        return uniqueId<Group, T, Id + 1>();
    } else {
        return Id;
    }
}
} // namespace ll::meta
