#include <iostream>

template <typename ...Ts>
constexpr auto sum(Ts ...args)
{
	return (0 + ... + args);
}

template <typename ...Ts>
constexpr auto mul(Ts ...args)
{
	return (1 * ... * args);
}

template <typename ...Ts>
constexpr auto foo(Ts ...args)
{
	return mul(sum(args...) + args...);
}

int main()
{
	constexpr auto result = foo(3, 5, 6);
}
