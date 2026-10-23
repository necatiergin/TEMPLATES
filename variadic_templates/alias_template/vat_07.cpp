#include <type_traits>

template <typename... Ts>
using CommonType = std::common_type_t<Ts...>;

CommonType<int, double, float> x;
