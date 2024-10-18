#include <iostream>

template <typename T>
struct processor; 

void bar(double value) 
{
	std::cout << "void bar(double)\n";
}

void bar(int value)
{
	std::cout << "void bar(int)\n";
}

template <typename T>
struct Nec 
{
	void foo()
	{
		bar(42); 
	}
};


int main()
{
	Nec<int> p; 
	p.foo();
}
