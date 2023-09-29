#include <iostream>

template<typename ...Args>
void func(Args ...args)
{
	std::cout << sizeof...(Args) << "\n";
	std::cout << sizeof...(args) << "\n";
}

int main()
{
	func(1, 2, 3, 4, 5);
}
