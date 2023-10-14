#include <string>
#include <type_traits>
#include <iostream>


template <typename T>
std::string tostr(T t) 
{
    if constexpr(std::is_convertible_v<T, std::string>)
        return t;
    else if constexpr(std::is_same_v<T, bool>)
        return t ? "true" : "false";
    else
        return std::to_string(t);
}

int main()
{
    std::string name{ "necati" };

    std::cout << tostr(name) << "\n";
    std::cout << tostr(10 > 5) << "\n";
    std::cout << tostr(3.846) << "\n";
}
