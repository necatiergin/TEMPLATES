#include <initializer_list>
#include <iostream>

template<typename T, typename... Rest>
T minimum(const T& first, const Rest&... rest) 
{
    T result = first;
    (void)std::initializer_list<int>{ ((result = std::min(result, rest)), 0)... };
    
    return result;
}


int main()
{
    std::cout << minimum(6, 2, 4, 3, 7, 9) << '\n';
}
