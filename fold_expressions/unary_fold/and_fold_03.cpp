#include <iostream>

template<typename T, typename ...Args>
bool all_in_range(const T& min, const T& max, Args && ...args)
{
	return ((min <= std::forward<Args>(args) && max >= std::forward<Args>(args))  && ...);
}

int main()
{
	boolalpha(std::cout);

	std::cout << all_in_range(1, 20, 2, 4, 6, 7, 9) << '\n';
	std::cout << all_in_range(10, 20, 12, 17, 25, 14) << '\n';
}
