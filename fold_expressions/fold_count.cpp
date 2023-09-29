#include <iostream>

bool pred(int i)
{
    return i % 2 == 0;
}

template <typename ... Ts>
std::size_t count(Ts... ts)
{
    return (std::size_t(0) + ... + (pred(ts) ? 1 : 0));
}

int main()
{
    std::cout << count(4, 1, 6, 3, 8, 10);
}
