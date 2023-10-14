#include <iostream>
#include <tuple>
#include <utility>
#include <type_traits>

template <typename Tuple, size_t... indexes>
decltype(auto) tuple_subset(const Tuple& t, std::index_sequence<indexes...>) 
{
    return std::make_tuple(std::get<indexes>(t)...);
}

int main(void)
{
    auto tp1 = std::make_tuple(1, "necati", 2.3, 4u, 'A');
    auto tp2 = tuple_subset(tp1, std::index_sequence<0, 2, 3>{});

    static_assert(std::is_same_v<decltype(tp2), std::tuple<int, double, unsigned >> );
    std::cout << std::get<0>(tp2) << '\n';
    
}
