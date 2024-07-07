#include <iostream>
#include <type_traits>

template<typename T>
auto foo(T)
-> typename std::enable_if_t<std::is_integral_v<T>>
{
    std::cout << "integer types\n";
}

template<typename T>
auto foo(T)
-> typename std::enable_if_t<std::is_floating_point_v<T>>
{
    std::cout << "floating types\n";
}

int main()
{
    foo(1);
    foo(1.);
}
