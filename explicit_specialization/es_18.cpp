#include <iostream>
#include <typeinfo>

template <typename T>
struct Nec {

	void foo(T)
	{
		std::cout << "Nec::foo(T) T is " << typeid(T).name() << '\n';
	}
};


template <>
void Nec<double>::foo(double)
{
	std::cout << "explicit specialization for Nec<double>\n";
}

int main()
{
	Nec<int> x;
	Nec<double> y;

	x.foo(12);
	y.foo(1.2);
}
