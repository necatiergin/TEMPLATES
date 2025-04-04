#include <iostream>

template<typename... Ts>
constexpr size_t total_size = (sizeof(Ts) + ...);

int main() 
{
    std::cout << "int + double: " << total_size<int, double> << '\n';
    std::cout << "char + int + long: " << total_size<char, int, long> << '\n';
}
