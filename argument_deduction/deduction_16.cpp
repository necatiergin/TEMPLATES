#include <iostream>

template <typename T>
void func(T&& x)
{
	T& r1 = x;  //int& r1 = x;
	T&& r2 = x;	//int& r2 = x;
	++x;
	++r1;
	++r2;
}

int main()
{
	int ival = 10;
	func(ival); 
	// the value category of the argument is L value
	// deduction for T is int&
	// function parameter is int after reference collapsing

	std::cout << "ival = " << ival << '\n';
}
