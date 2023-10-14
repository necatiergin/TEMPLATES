#include <string>
#include <type_traits>

template <typename T> 
std::string as_string(T x)
{
	if constexpr (std::is_same_v<T, std::string>) {
		return x;
	}
	else if constexpr (std::is_arithmetic_v<T>) {
		return std::to_string(x); 
	}
	else {
		return std::string(x); 
	}
}

#include <iostream>

int main()
{
	std::cout << as_string(42) << '\n';
	std::cout << as_string(4.2) << '\n';
	std::cout << as_string(std::string("hello")) << '\n';
	std::cout << as_string("hello") << '\n';
}
