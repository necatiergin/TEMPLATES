#include <iostream>

auto hello() //void hello()
{
	std::cout << "hello";
}

int main()
{
	hello();
	//auto x = hello(); // error
}
