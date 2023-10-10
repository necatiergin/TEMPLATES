#include <iostream>

template <typename ...Ts>
auto foo(Ts ...args)
{
	return (10 - ... - args);
}

template <typename ...Ts>
auto bar(Ts ...args)
{
	return (args - ... - 10);
}

int main()
{
	std::cout << foo(1, 2, 3, 4) << '\n';
	std::cout << bar(1, 2, 3, 4) << '\n';
}
