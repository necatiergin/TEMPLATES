#include <iostream>
#include <typeinfo>

struct Nec {
	template <typename T>
	void foo(T)
	{
		std::cout << "foo(T) typeid for(T) is : " << typeid(T).name() << '\n';
	}

	void foo(int) 
	{
		std::cout << "foo(int)\n";
	}

};

template <>
void Nec::foo<double>(double)
{
	std::cout << "explicit specialization for foo<double>\n";
}

int main()
{
	Nec mynec;

	mynec.foo(2.3);
	mynec.foo(2);
}
