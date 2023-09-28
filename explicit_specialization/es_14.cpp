#include <iostream>

template<typename T>
constexpr T x = T(78234.324234134);

template <>
constexpr int x<int> = 999;

int main()
{
	std::cout << x<double> << '\n';
	std::cout << x<float> << '\n';
	std::cout << x<int> << '\n';
}
