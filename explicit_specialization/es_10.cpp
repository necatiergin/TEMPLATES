#include <cstdint>


template <int n>
constexpr int64_t factorial()
{
	return n * factorial<n - 1>();
}

template <>
constexpr int64_t factorial<0>()
{
	return 1;
}

int main()
{
	constexpr auto x5 = factorial<5>();
	constexpr auto x7 = factorial<7>();
	constexpr auto x9 = factorial<9>();
}
