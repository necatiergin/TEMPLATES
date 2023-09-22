#include <iostream>

template <size_t ...n>
struct A {
	A()
	{
		std::cout << typeid(A).name() << '\n';
	}
};

template <size_t ...n>
void func()
{
	A<n...> ax;
}

int main()
{
	func<1, 3, 7, 9>();
}
