#include <concepts>
#include <iostream>

template < typename T, std::same_as<T>... Ts>
constexpr auto min(const T & a, const T & b, const Ts&... ts)
{
	auto m = a < b ? a : b;
	if constexpr (sizeof...(ts) > 0) {
		auto cmp = [&](const auto& value) {
		if (value < m) { m = value; }
	};
 (..., cmp(ts));

}
	return m;
}

int main()
{
	constexpr auto x = min(7, 1, 3, 9, 2);
}
