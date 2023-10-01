#include <iostream>
#include <istream>

template <typename... Ts, typename... Us>
constexpr auto foo(Ts... args1, Us... args2)
{
	std::cout << "sizeof args1 = " << sizeof...(args1) << '\n';
	std::cout << "args1 values : ";
	if constexpr (sizeof...(args1)) {
		for (auto i : { args1... })
			std::cout << i << ' ';
		std::cout << '\n';
	}
	else {
		std::cout << "empty pack\n";
	}

	std::cout << "sizeof args2 = " << sizeof...(args2) << '\n';
	std::cout << "args1 values : ";
	if constexpr (sizeof...(args2)) {
		for (auto i : { args2... })
			std::cout << i << ' ';
		std::cout << '\n';
	}
	else {
		std::cout << "empty pack\n";
	}
}

int main()
{
	//foo<int>(1);
	//foo<int, int, int> (1, 2, 3, 4, 5, 6); 
	//foo<int, int, int, int>(1, 2, 3, 4, 5, 6);
	//foo<int, int, int, int, int, int>(1, 2, 3, 4, 5, 6);
}
