#include <iostream>
#include <typeinfo>

template <typename T>
struct Nec {

	template <typename U>
	void foo(U)
	{
		std::cout << "type T is : " << typeid(T).name() << " " << 
		"type U is : " << typeid(U).name() << '\n';
		std::cout << "----------------------------------------\n";
	}
};


template <>
template <>
void Nec<double>::foo(int)
{
	std::cout << "explicit specialization for Nec<double>::foo(int)\n";
}

int main()
{
	Nec<double> x;

	x.foo(1.2);
	x.foo(6u);
	x.foo(12);
	
}
