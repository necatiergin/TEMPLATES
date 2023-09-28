#include <iostream>

template<typename T>
void func(const T&)
{
	std::cout << "primary template\n";
}

template<>
void func(const int&)
{
	std::cout << "explicit specialization int&\n";
}

void func(double)
{
	std::cout << "ordinary function\n";
}

int main()
{
	func(10);
	func(0.42);
	func('A');
	func("10");
}
