#include <cstddef>

template<typename... Ts>
constexpr std::size_t num_types = sizeof...(Ts);

static_assert(num_types<> == 0);
static_assert(num_types<int, double> == 2);
static_assert(num_types<char, bool, float, int> == 4);
