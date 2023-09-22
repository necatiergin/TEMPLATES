template<size_t base, size_t exp>
constexpr size_t power = base * power<base, exp - 1>;

template<size_t base>
constexpr size_t power<base, 0> = 1;

template<size_t base>
constexpr size_t power<base, 1> = base;

int main()
{
	static_assert(power<2, 0> == 1);
	static_assert(power<7, 3> == 343);
	static_assert(power<2, 10> == 1024);
}
