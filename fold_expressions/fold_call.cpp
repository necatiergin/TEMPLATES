#include <iostream>

void f(int i)
{
    std::cout << i << ' ';
}

template <typename ... Ts>
void call(Ts... ts)
{
    (f(ts), ...);
}

int main()
{
    call(4, 1, 6, 3, 8, 10);
}
