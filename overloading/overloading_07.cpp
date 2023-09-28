#include <iostream>

template<typename T>
void func(T&)
{
	std::cout << "template\n";
}

void func(const int&)
{
	std::cout << "non template\n";
}

int main()
{
	int x{ 5 };
	const int ci{ 34 };
	func(x);
	func(ci);
}
