#include <type_traits>
#include <tuple>
#include <iostream>

template<typename... Ts>
using remove_cv_all = std::tuple<std::remove_cv_t<Ts>...>;

int main()
{
	remove_cv_all<const int, volatile double, const volatile unsigned> x;

	std::cout << typeid(decltype(x)).name() << '\n';
}
