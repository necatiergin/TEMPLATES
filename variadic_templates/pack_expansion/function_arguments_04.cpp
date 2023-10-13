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
	//  mul(sum(1, 2, 4) + 1, sum(1, 2, 4) + 2, sum(1, 2, 4) + 4)
	//  mul(8, 9, 11) 
}

int main()
{
	constexpr auto result = foo(1, 2, 4);
}
