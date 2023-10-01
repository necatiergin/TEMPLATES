#include <iostream>

auto func(auto... args)
{
    return (args, ...);
}

int main()
{
    func(); // void func();
    auto x1 = func(5); 
    auto x1 = func(5, 1.2); 
    auto x3 = func(5, 1.2, 3L); 
    auto x4 = func(5, 1.2, 3L, "necati");
}
