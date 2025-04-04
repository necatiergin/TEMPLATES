#include <type_traits>

template<typename... Ts>
using common_type_t = typename std::common_type<Ts...>::type;

template<typename... Ts>
constexpr bool has_common_type = !std::is_void_v<common_type_t<Ts...>>;

static_assert(std::is_same_v<common_type_t<int, double>, double>);
static_assert(has_common_type<int, float, double>);
