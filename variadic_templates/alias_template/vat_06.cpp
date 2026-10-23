#include <tuple>
#include <type_traits>

template <typename... Ts>
using DecayedTuple = std::tuple<std::decay_t<Ts>...>;
