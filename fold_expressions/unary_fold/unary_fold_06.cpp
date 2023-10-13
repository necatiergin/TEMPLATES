#include <iostream>
#include <type_traits>

auto fold_and(auto... args)
{
    return (args && ...);
}

auto fold_or(auto... args)
{
    return (args || ...);
}

auto fold_comma(auto... args)
{
    return (args , ...);
}

int main()
{
    boolalpha(std::cout);

    std::cout << fold_and() << '\n'; //true
    std::cout << fold_or() << '\n'; //false

    static_assert(std::is_void_v<decltype(fold_comma())>);
}
