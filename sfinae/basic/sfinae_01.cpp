#include <iostream>
#include <vector>

template<typename T, unsigned N>
std::size_t len(T(&)[N])
{
	// std::cout << ("T(&)[N]\n");
	return N;
}

template<typename T>
typename T::size_type len(const T& t)
{
	// std::cout << ("const T&\n");
	return t.size();
}

int main()
{
	int a[10]{};
	std::cout << len(a) << '\n';
	std::cout << len("tmp") << '\n';
	int* p{};
	//std::cout << len(p) << '\n'; //invalid

	std::allocator<int> x;
	//std::cout << len(x) << '\n'; //invalid
	std::vector<int> ivec;
	std::cout << len(ivec) << '\n';
}
