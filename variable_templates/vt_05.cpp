#include <iostream>

template <int ...Vals>
constexpr int int_ar[] = { Vals... };

int main()
{
	constexpr auto val = int_ar<1, 3, 5, 7>[2]; //val = 5

	for (auto x : int_ar<10, 20, 30, 40>)
		std::cout << x << ' ';
}
