#include <iostream>

void print(auto ...args)
{
	((std::cout << args << ' '), ...);
	std::cout << '\n';
}

auto g(auto *x)
{
	return *x * *x + 10;
}

void f(auto ...args)
{
	print(args...);
	print(&args...);
	print(10 * args...);
	print(args * args...);
	print(g(&args)...);
	print(++args...);
}

int main()
{
	int x{ 1 }, y{ 2 }, z{ 3 };

	f(x, y, z);
}
