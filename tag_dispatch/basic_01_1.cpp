#include <type_traits>
#include <iostream>

namespace detail {
	template<typename T>
	void func_impl(T x, std::true_type)
	{
		std::cout << "code for integer types\n";
	}

	template<typename T>
	void func_impl(T x, std::false_type)
	{
		std::cout << "code for non-integer types\n";
	}
}

template<typename T>
void func(T x)
{
	detail::func_impl(x, std::is_integral<T>{});
}


int main()
{
	func(23);
	func(1.2);
}
