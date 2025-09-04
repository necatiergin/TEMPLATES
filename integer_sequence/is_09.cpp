#include <cstddef>
#include <utility>
#include <tuple>
#include <iostream>

namespace detail {
    template <class F, class Tuple, std::size_t... Is>
    decltype(auto) apply_impl(F&& f, Tuple&& tpl, std::index_sequence<Is...>) {
        return std::forward<F>(f)(std::get<Is>(std::forward<Tuple>(tpl))...);
    }
}

template <class F, class Tuple>
decltype(auto) Apply(F&& f, Tuple&& tpl) {
    return detail::apply_impl(std::forward<F>(f),
        std::forward<Tuple>(tpl),
        std::make_index_sequence<std::tuple_size<std::decay_t<Tuple>>::value>{});
}

int f(int i, char c, double d)
{
    std::cout << i << ' ' << c << ' ' << d << '\n';
    return 1;
}

int main()
{
    auto tp = std::make_tuple(42, 'x', 3.14);
    int ret = Apply(f, tp); 
}
