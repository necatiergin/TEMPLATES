#include <iostream>

template <size_t base, size_t exp>
struct power {
	constexpr static size_t value = base * power<base, exp - 1>::value;
};

template <size_t base>
struct power<base, 0u> {
	constexpr static size_t value = 1;
};


int main()
{
	constexpr auto val = power<5, 4>::value;
}
