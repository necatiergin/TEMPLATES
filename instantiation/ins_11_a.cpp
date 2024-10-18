#include <iostream>

template <typename T>
struct processor; 

void bar(double value) 
{
	std::cout << "void bar(double)\n";
}

template <typename T>
struct Nec 
{
	void foo()
	{
		bar(42); 
	}
};

void bar(int value)
{
	std::cout << "void bar(int)\n";
}

int main()
{
	Nec<int> p; 
	p.foo();
}
