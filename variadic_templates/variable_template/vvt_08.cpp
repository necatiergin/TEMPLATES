#include <type_traits>

template<typename T, typename... Ts>
constexpr bool is_same_all = (std::is_same_v<T, Ts> && ...);

static_assert(is_same_all<int, int, int>);
static_assert(!is_same_all<int, float, int>);
