#include <iostream>

template <typename ...Ts>
struct Der : Ts... {
	using Ts::foo...;
};

struct A {
	void foo(int)
	{
		std::cout << "A::foo(int)\n";
	}
};

struct B {
	void foo(double)
	{
		std::cout << "A::foo(double)\n";
	}
};

struct C {
	void foo(bool)
	{
		std::cout << "A::foo(bool)\n";
	}
};


int main()
{
	Der<A, B, C> der;

	der.foo(true);
	der.foo(12);
	der.foo(3.5);
}
