#include <iostream>

template <typename T>
constexpr int nec = 333;

template <typename T>
constexpr int nec<T*> = 0;

template <>
constexpr int nec<double> = 999;

int main()
{
	std::cout << nec<long> << '\n';
	std::cout << nec<int *> << '\n';
	std::cout << nec<double> << '\n';
}
