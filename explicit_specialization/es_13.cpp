//explicit specialization for a variable template

#include <iostream>

template<typename T>
constexpr std::size_t SZ = sizeof(T);

template<>
constexpr std::size_t SZ<void> = 0;

int main()
{
	std::cout << SZ<double> << '\n';
	std::cout << SZ<void> << '\n'
}
