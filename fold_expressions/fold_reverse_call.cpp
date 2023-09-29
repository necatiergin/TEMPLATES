#include <iostream>

void f(int i)
{
    std::cout << i << ' ';
}

template <typename ... Ts>
void reverse_call(Ts... ts)
{
    int dummy;
    (dummy = ... = (f(ts), 0));
}

int main()
{
    reverse_call(1, 2, 3, 4, 5);
}
