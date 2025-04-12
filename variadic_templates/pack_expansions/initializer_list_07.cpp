#include <array>
#include <iostream>

struct Point {
    int x, y;
};

template<typename... Args>
auto make_points(Args... args) 
{
    return std::array{ Point{ args, args }... };
}


int main()
{
    auto ar = make_points(1, 3, 6, 2, 9);

    for (auto [x, y] : ar)
        std::cout << x << ' ' << y << '\n';
}
