#include <iostream>

template <typename T>
T max(const T& a, const T& b)
{
	return a > b ? a : b;
}

template <typename T, typename... Args>
T max(const T& a, const Args&... args)
{
	return max(a, max(args...));
}

int main()
{
	std::cout << max(2, 4, 1) << '\n';
	std::cout << max(4.2, 2.6, 5.1, 2.3, 1.7) << '\n';
}
