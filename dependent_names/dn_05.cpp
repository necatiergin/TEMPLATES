#include <iostream>

template <typename T>
struct Nec 
{
	void foo(T)
	{
		std::cout << "Nec<T>:foo(T)\n";
	}
};

template <typename T>
struct Erg 
{
	void bar(T arg)
	{
		arg.foo(42); 
	}
};

template <>
struct Nec<int> 
{
	void foo(int)
	{
		std::cout << "Nec<int>::foo(int)\n";
	}
};

int main()
{
	Nec<int> nec; 
	Erg<Nec<int>> e; 
	e.bar(nec);
}
