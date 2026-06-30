#include <iostream>
#include <typeinfo>
#include <bitset>

void types() { }

template<typename T, typename... Args>
void types(T, Args... args)
{
    std::cout << typeid(T).name() << '\n';

    types(args...);
}

int main()
{
    types(11, 13.4, "abc", 'x', std::bitset<16>{45u});
}
