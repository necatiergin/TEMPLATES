#include <iostream>

template <typename ... Ts>
auto get_first(Ts... ts)
{
    std::common_type_t<decltype(ts)...> result;
    ((result = ts, true) || ...);
    return result;
}

int main()
{
    std::cout << get_first(1.5, 3, 7);
}
