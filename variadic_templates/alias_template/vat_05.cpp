#include <tuple>
#include <utility>

template <typename... Ts>
using TuplePair = std::pair<
    std::tuple<Ts...>,
    std::tuple<Ts*...>
>;

TuplePair<int, double, char> x;
