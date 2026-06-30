#include <iostream>

template<typename T>
void visit(T x)
{
    std::cout << "visit<T>(T) " << x << '\n';
}

template<typename T, typename... Args>
void visit(T first, Args... args)
{
    std::cout << first << '\n';

    visit(args...);
}

int main()
{
    visit(1, 2, 3, 4, 5);
}
