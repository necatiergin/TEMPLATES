#include <iostream>
#include <concepts>

std::integral auto sum(auto x, auto y) 
{
    return x + y;
}

int main()
{
    auto x = sum(3, 5L); //long x;
    auto y = sum(3LL, 5L); //long long y;
    auto z = sum(2., 5); //error;
}
