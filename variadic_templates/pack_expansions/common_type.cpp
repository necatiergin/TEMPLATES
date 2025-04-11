#include <type_traits>
#include <array>
#include <iostream>

template <typename... Ts>
struct Nec
{
	Nec(Ts... args) : mx{ (... + args) }
	{
	}

	std::common_type_t<Ts...> mx;
};


template <typename... Ts>
void foo(Ts... args)
{
	std::array<std::common_type_t<Ts...>, sizeof...(Ts)> a{ args... };
	std::cout << "type of a is : " << typeid(a).name() << '\n';
	
	Nec nec1(args...);
	std::cout << "nec1.mx      : " << nec1.mx << '\n';
	
	Nec nec2(--args...);
	std::cout << "nec2.mx      : " << nec2.mx << '\n';
}

int main()
{
	foo(10, 20, 30, 40);
}
