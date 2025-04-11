#include <iostream>

template <typename... T>
struct Nec
{
	template <T... args>
	struct Nested {
		
	};
};

using type_encloser = Nec<int, double, long, char>;
using type_nested = type_encloser::Nested<10, 4.5, 56L, 'A'>;

int main()
{
	std::cout << typeid(type_encloser).name() << '\n';
	std::cout << typeid(type_nested).name() << '\n';
}
