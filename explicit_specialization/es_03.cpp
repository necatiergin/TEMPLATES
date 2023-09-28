#include <iostream>

template<size_t n>
struct Fact {
	static const size_t value{ n > 1 ? n * Fact<n - 1>::value : 1 };
};

template<>
struct Fact<0> {
	static const size_t value{ 1 };
};

int main()
{
	std::cout << Fact<5>::value << '\n';
}
