#include <utility>
#include <iostream>

namespace details {
	template <typename T, size_t N, size_t... I>
	constexpr bool Equal(const T(&a)[N], const T(&b)[N], std::index_sequence<I...>)
	{
		return ((a[I] == b[I]) && ...);
	}
}

template < typename T, size_t N>
constexpr bool Equal(const T(&a)[N], const T(&b)[N])
{
	return details::Equal(a, b, std::make_index_sequence<N>{});
}


int main()
{
	constexpr int ar1[4]{ 2, 4, 6, 7 };
	constexpr int ar2[4]{ 2, 4, 6, 7 };

	constexpr auto b = Equal(ar1, ar2);
}
