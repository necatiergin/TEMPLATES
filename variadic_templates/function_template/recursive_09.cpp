#include <iostream>

void reverse_print()
{
}

template<typename T, typename... Args>
void reverse_print(T first, Args... args)
{
    reverse_print(args...);

    std::cout << first << '\n';
}

int main()
{
    reverse_print(1, 2, 3, 4);
}
