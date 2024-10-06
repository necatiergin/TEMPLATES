#include <iostream>

template <typename T>
using Fptr = T(*)(T);

int foo(int x) { return x; }
double foo(double x) { return 2 * x; }
unsigned foo(unsigned u) {return 3 * u;}

int main()
{
	Fptr<int> f1 = foo;
	Fptr<double> f2 = foo;
	Fptr<unsigned> f3 = foo;

	std::cout << f1(3) << '\n';
	std::cout << f2(3.3) << '\n';
	std::cout << f3(3u) << '\n';
}


