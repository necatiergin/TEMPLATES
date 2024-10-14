#include <iostream>

int main()
{
	auto f1 = [](int& x) {return x; };
	int i = 9;

	std::cout << "i = " << i << '\n';
	//f1(i) = 5; //error
	auto f2 = [](int& x)->int& {return x; };
	f2(i) = 5;

	std::cout << "i = " << i << '\n';
}
