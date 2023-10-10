//to get the last item in the pack

#include <iostream>

constexpr auto func(auto... args)
{
    return (args, ...);
}

int main()
{
    func(); // void func();
    constexpr auto x1 = func(5);  /
    constexpr auto x2 = func(5, 1.2);
    constexpr auto x3 = func(5, 1.2, 3L);
    constexpr auto x4 = func(5, 1.2, 3L, "necati");
}
