// //source : cppreference

#include <array>
#include <cstddef>
#include <iostream>
#include <tuple>
#include <utility>

template<typename Array, std::size_t... I>
auto a2t_impl(const Array& a, std::index_sequence<I...>)
{
    return std::make_tuple(a[I]...);
}

template<typename T, std::size_t N, typename Indices = std::make_index_sequence<N>>
auto a2t(const std::array<T, N>& a)
{
    return a2t_impl(a, Indices{});
}

template<class Ch, class Tr, class Tuple, std::size_t... Is>
void print_tuple_impl(std::basic_ostream<Ch, Tr>& os, const Tuple& t, std::index_sequence<Is...>)
{
    ((os << (Is == 0 ? "" : ", ") << std::get<Is>(t)), ...);
}

template<class Ch, class Tr, class... Args>
auto& operator<<(std::basic_ostream<Ch, Tr>& os, const std::tuple<Args...>& t)
{
    os << '(';
    print_tuple_impl(os, t, std::index_sequence_for<Args...>{});
    return os << ')';
}

int main()
{
    std::array<int, 4> array = { 1, 2, 3, 4 };

    auto tp = a2t(array);
    static_assert(std::is_same_v<decltype(tp), std::tuple<int, int, int, int>>);

    std::cout << tp << '\n';
}
