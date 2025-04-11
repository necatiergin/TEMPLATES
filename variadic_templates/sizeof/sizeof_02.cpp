#include <iostream>

template<typename... Args>
void types_info()
{
    ((std::cout << sizeof(Args) << '\n'), ...);
}

int main()
{
    types_info<char, int, double, long>();
}
