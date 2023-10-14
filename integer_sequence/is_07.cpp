//source : cppreference

#include <iostream>
#include <tuple>

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
    std::tuple tp{ 2.3, "necati", 'A', 555 };

    std::cout << tp << '\n';
    std::cout << std::make_tuple(2, 6, 1.1, "ergin");
}
