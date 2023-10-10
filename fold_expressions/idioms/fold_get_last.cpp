#include <iostream>

template <typename ...Ts>
auto get_last(Ts ...args)
{
    return (args, ...);
}

int main()
{
    std::cout << get_last(1, 3, 7);
}
