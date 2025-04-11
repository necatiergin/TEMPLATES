#include <tuple>

template<typename... Types>
using mytuple = std::tuple<int, Types...>;
