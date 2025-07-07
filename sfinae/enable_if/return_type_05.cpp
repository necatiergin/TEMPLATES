#include <type_traits>
#include <iostream>

template <typename T>
std::enable_if_t<std::is_integral_v<T>>
print_type(T) 
{
    std::cout << "Integral type\n";
}

template <typename T>
std::enable_if_t<std::is_floating_point_v<T>>
print_type(T) 
{
    std::cout << "Floating point type\n";
}


int main()
{
    print_type(3);
    print_type(3.33);
}
