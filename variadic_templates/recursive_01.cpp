///compile time recursive pack expansion

#include <iostream>

template <typename T>
void print(const T& r)
{
	std::cout << r << "\n";
}

template <typename T, typename ...Ts>
void print(const T& r, const Ts& ...args)
{
	print(r);
	print(args...);
}


int main()
{
	int x = 10;
	double d = 23.5;

	print(x, d, 9L, "necati");
}
