#include <iostream>

template <int n>
struct A : A<n - 1>
{
	A()
	{
		std::cout << n << ' ';
	}
};


template<>
struct A<-1> {};

int main()
{
	A<100> a;
}
