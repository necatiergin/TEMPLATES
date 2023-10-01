#include <iostream>

template <typename T, typename... Args>
T sum(T a, const Args&... args)
{
	//std::cout << __FUNCSIG__ << '\n';
	if constexpr (sizeof...(args) == 0)
		return a;
	else
		return a + sum(args...);
}


int main()
{
	int x{ 4 }, y{ 5 }, z{ 2 }, t{ 9 };

	auto result = sum(x, y, z, t);

	std::cout << "result = " << result << '\n';

}
