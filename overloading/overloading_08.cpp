#include <iostream>

template <typename T>
void foo(T) { std::cout << 1; }

template <>
void foo<int>(int) { std::cout << 2; }

void foo(int&&) {std::cout << 3; }

int main()
{
	int x{};
	foo(1.0);
	foo(1);
	foo(x);
}
