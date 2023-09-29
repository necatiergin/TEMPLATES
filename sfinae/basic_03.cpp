#include <iostream>

template<int I> 
void func(char(*)[I % 2 == 0] = nullptr) 
{
    std::cout << "even numbers\n";
}

template<int I> 
void func(char(*)[I % 2 == 1] = nullptr) 
{
    std::cout << "odd numbers\n";    
}

int main()
{
    func<6>();
    func<13>();
}
