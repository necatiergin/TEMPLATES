#include <iostream>

template <typename T, typename ...Ts>
void print(const T& x, const Ts& ...args)
{
	if constexpr (sizeof...(args) == 0)
		std::cout << x << '\n';
	else
		std::cout << x << ", ";

	if constexpr (sizeof...(args) != 0)
		print(args...);
}


int main()
{
	print(12, 3.4, "ali");
}
