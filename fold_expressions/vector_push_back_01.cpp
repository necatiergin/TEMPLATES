#include <vector>
#include <iostream>

template <typename T, typename ...TS>
decltype(auto) push_back(std::vector<T>& vec, TS&& ...args)
{
	(... , vec.push_back(std::forward<TS>(args)));
	return (vec);
}

int main()
{
	std::vector<int> ivec;

	push_back(ivec, 1, 2, 3, 4).push_back(5);
	
	for (auto i : ivec)
		std::cout << i << " ";
}
