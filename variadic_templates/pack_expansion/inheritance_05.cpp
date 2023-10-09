#include <iostream>

struct X
{
	void foo(int) { std::cout << "X::foo(int)\n"; }
};

struct Y
{
	void foo(double) { std::cout << "Y::foo(double)\n"; }
};

struct Z
{
	void foo(long) { std::cout << "Z::foo(long)\n"; }
};

template <typename... Bases>
struct Nec : public Bases...
{
	Nec(Bases const & ... args) : Bases(args)...
	{}

	using Bases::foo...;
};

int main()
{
	X x;
	Y y;
	Z z;

	Nec mynec(x, y, z);

	mynec.foo(12);
	mynec.foo(3.4);
	mynec.foo(9L);
}
