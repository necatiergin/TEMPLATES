#include <iostream>

//The compiler will try this overload since it's less generic than the variadic.
//T will be replace by int which gives us void f(const int& t, int::iterator* b = nullptr);
//int doesn't have an iterator sub-type, but the compiler doesn't throw a bunch of errors.
//It simply tries the next overload.

template <typename T>
void f(const T& t, typename T::iterator* it = nullptr)
{
	std::cout << "template\n";
}


void f(...)
{
	std::cout << "variadic\n";
}

#include <vector>

int main()
{
	std::vector<int> ivec;

	f(ivec);
	f(12);
}
