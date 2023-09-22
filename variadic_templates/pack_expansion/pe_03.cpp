#include <iostream>

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

template <typename ...Types>
class A : public Types ... {
public:
	A() : Types{ 0 }... {

	}
};


int main()
{
	A<X, Y, Z> ax;
}
