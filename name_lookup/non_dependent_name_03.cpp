#include <iostream>

void foo(double dval) 
{
	std::cout << "void foo(double dval) dval = " << dval << '\n';
}

template <typename T>
struct Nec 
{
	void fnec()
	{
		foo(42); // non-dependent name
	}
};

void foo(int ival) 
{
	std::cout << "void foo(int ival) ival = " << ival << '\n';
}

int main()
{
	Nec<int> nec; 
	nec.fnec();
}
