#include <iostream>

template<typename T>
using Ptr = T*;

template<typename T>
using Cptr = const T*;

int main()
{
	int x{ 10 };
	int y{ 20 };
	std::cout << "x = " << x << '\n';
	Ptr<int> p{ &x };
	*p = 20;
	std::cout << "x = " << x << '\n';
	Cptr<int> cp{ &x };
	//*cp = 345; //invalid code
	cp = &y; //valid
}
