#include <iostream>

template <typename ... Ts>
auto min(Ts... ts)
{
    auto min = (ts, ...);
    ((ts < min ? min = ts : 0), ...);
    return min;
}

int main()
{
    std::cout << min(1, -2, 7, 4);
}
