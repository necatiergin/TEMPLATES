#include <iostream>

template <typename T>
void func(T&& x)
{
	T& r1 = x;  //int& r1 = x;
	// T&& r2 = x;	//error int&& r2 = x;
}

int main()
{
	func(20); 
	// the value category of the argument is PR value
	// deduction for T is int
	// function parameter is int&& 
}
