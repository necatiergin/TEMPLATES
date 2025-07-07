#include <iostream>
#include <type_traits>

void func_dispatch(std::true_type) 
{
    std::cout << "even numbers\n";
}


void func_dispatch(std::false_type) 
{
    std::cout << "odd numbers\n";
}

template<int I>
void func()
{
    func_dispatch(std::integral_constant<bool, (I % 2 == 0)>{});
}


int main() 
{
    func<6>();   // even numbers
    func<13>();  // odd numbers
}
