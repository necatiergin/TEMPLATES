#include <cstddef>

template<size_t n>
constexpr size_t fact{ n * fact<n - 1> };

template<>
constexpr size_t fact<0>{1};

int main()
{
	static_assert(fact<5> == 120);
}
