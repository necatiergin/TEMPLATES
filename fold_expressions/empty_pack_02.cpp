#include <iostream>

auto foo(auto... args) 
{
    return (args + ...);
}

auto bar(auto... args)
{
    return (args + ... + 0);
}

int main()
{
    //auto x1 = foo(); //error
    auto x2 = bar();

    std::cout << "x2 = " << x2 << '\n';
}
