#include <type_traits>
#include <array>
#include <iostream>

template <typename... T>
struct Nec
{
	Nec(T... args): mx { (... + args) }
	{}
	
	std::common_type_t<T...> mx;
};


template <typename... T>
void foo(T... args)
{
	std::array<std::common_type_t<T...>, sizeof...(T)> a{ args... };
	std::cout << "type of a is : " << typeid(a).name() << '\n';
	Nec nec1(args...);
	std::cout << "nec1::mx      : " << nec1.mx << '\n';
	Nec nec2(--args...);
	std::cout << "nec2::mx      : " << nec2.mx << '\n';
}

int main()
{
	foo(10, 20, 30, 40);
}
