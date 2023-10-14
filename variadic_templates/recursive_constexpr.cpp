#include <concepts>

constexpr auto sum(auto a, auto... args)
{
	if constexpr (sizeof...(args) == 0)
		return a;
	else
		return a + sum(args...);
}

int main()
{
	constexpr auto result = sum(1, 3, 5, 7);
}
