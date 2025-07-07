#include <iostream>

template<int I, char(*)[I % 2 == 0] = nullptr>
void func()
{
    std::cout << "even numbers\n";
}

template<int I, char(*)[I % 2 == 1] = nullptr>
void func()
{
    std::cout << "odd numbers\n";
}

int main()
{
    func<6>();
    func<13>();
}
