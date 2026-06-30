#include <iostream>

void foo()
{
    std::cout << "empty\n";
}

template<typename T, typename... Args>
void foo(T first, Args... args)
{
    std::cout << sizeof...(Args) << '\n';
    foo(args...);

}

int main()
{
    foo(1, 2, 3, 4, 5);
}
