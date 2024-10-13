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

	template <typename T>
	static void bar(T)
	{
		std::cout << "bar(T) typeid for(T) is : " << typeid(T).name() << '\n';
	}

	static void bar(double)
	{
		std::cout << "bar(double)\n";
	}
};

int main()
{
	Nec mynec;

	mynec.foo(2.3);
	mynec.foo(2);
	Nec::bar(2.3);
	Nec::bar(2);
}
