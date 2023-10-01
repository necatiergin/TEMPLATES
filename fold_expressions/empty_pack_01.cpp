#include <iostream>

auto fold_and(auto... args) 
{
    return (args && ...);
}

auto fold_or(auto... args)
{
    return (args || ...);
}

int main()
{
    boolalpha(std::cout);

    std::cout << fold_and() << '\n'; //true
    std::cout << fold_or() << '\n'; //false
}
