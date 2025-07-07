#include <iostream>
#include <type_traits>

template <typename T>
std::enable_if_t<std::is_integral_v<T>, T> func(T t) 
{
    std::cout << "func<integral T> " << '\n';
    return t;
}

template <typename T>
std::enable_if_t<!std::is_integral_v<T>, T> func(T t) 
{
    std::cout << "not integral \n";
    return t;
}

int main() 
{
    func(10);
    func(10.5f);
}
