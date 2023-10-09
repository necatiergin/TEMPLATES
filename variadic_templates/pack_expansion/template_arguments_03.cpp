#include <iostream>

template <size_t ...N>
struct A {
	A()
	{
		std::cout << typeid(A).name() << '\n';
	}
};

template <size_t ...N>
void func()
{
	A<N...> ax;
}

int main()
{
	func<1, 3, 7, 9>();
}
