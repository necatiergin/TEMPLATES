#include <iostream>
#include <type_traits>

struct X {
	X(int i)
	{
		std::cout << "X(int i) i = " << i << '\n';
	}
};

struct Y {
	Y(int i)
	{
		std::cout << "Y(int i) i = " << i << '\n';
	}
};

struct Z {
	Z(int i)
	{
		std::cout << "Z(int i) i = " << i << '\n';
	}
};

template <typename ...Bases>
class A : public Bases ... {
public:
	A() : Bases{ 0 }... { }
};


int main()
{
	A<X, Y, Z> ax;
}
