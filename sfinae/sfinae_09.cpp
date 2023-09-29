#include <iostream>
#include <type_traits>

template <int n, int(*)[n % 2 == 0] = nullptr>
void func()
{
	std::cout << n << " is even\n";
}

template <int n, int(*)[n % 2 != 0] = nullptr>
void func()
{
	std::cout << n << " is odd\n";
}

int main()
{
	func<5>();
	func<8>();
}
