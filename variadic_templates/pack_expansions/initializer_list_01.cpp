#include <iostream>
#include <initializer_list>

template<typename... Args>
void print_all(Args... args) 
{
    (void)std::initializer_list<int>{ (std::cout << args << " ", 0)... };
}

int main()
{
    print_all(3, 4.5, "ali", 'X');
}
