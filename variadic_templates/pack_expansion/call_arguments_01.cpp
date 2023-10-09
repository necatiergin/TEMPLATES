#include <iostream>

template <typename T>
T square(T x)
{
	return x * x;
}

template <typename... T>
auto sum(T... args)
{
	return (... + args);
}

template <typename... T>
void call_sum(T... args)
{
	auto x1 = sum(args...);  // sum(1, 2, 3, 4, 5)
	std::cout << "x1 = " << x1 << '\n';
	auto x2 = sum(85, args...);
	std::cout << "x2 = " << x2 << '\n';
	auto x3 = sum(square(args)...);
	std::cout << "x3 = " << x3 << '\n';
}

int main()
{
	call_sum(1, 2, 3, 4, 5);
}
