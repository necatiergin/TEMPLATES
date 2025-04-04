#include <iostream>
#include <istream>


template <typename ...Ts>
void print(const char *p, Ts ...args)
{
	std::cout << "sizeof p : " << sizeof...(args) << '\n';
	std::cout << p << " values : ";
	if constexpr (sizeof...(args)) {
		for (auto i : { args... })
			std::cout << i << ' ';
		std::cout << '\n';
	}
	else {
		std::cout << "empty pack\n";
	}
}

template <typename... Ts, typename... Us>
constexpr auto foo(Ts... args1, Us... args2)
{
	print("args1", args1...);
	print("args2", args2...);
}

int main()
{
	//foo<int>(1);
	foo<int, int, int> (1, 2, 3, 4, 5, 6); 
	//foo<int, int, int, int>(1, 2, 3, 4, 5, 6);
	//foo<int, int, int, int, int, int>(1, 2, 3, 4, 5, 6);
}
