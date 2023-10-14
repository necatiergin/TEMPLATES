#include <type_traits>

template <typename T>
void func(T& tx)
{
	if (tx > 0) {
		if constexpr (std::is_integral_v<T>) {
			++tx;
		}
		else {
			--tx;
		}
	}
}

#include <iostream>

int main()
{
	int ival = 5;
	double dval = 2.5;
	func(ival);
	func(dval);

	std::cout << "ival = " << ival << '\n';
	std::cout << "dval = " << dval << '\n';
}
