#include <type_traits>
#include <iostream>

template<typename T>
void func(T x)
{
	if constexpr (std::is_integral_v<T>) {
		std::cout << "code for integer types\n";
	}
	else {
		std::cout << "code for non-integer types\n";
	}
}

int main()
{
	func(23);
	func(1.2);
}
