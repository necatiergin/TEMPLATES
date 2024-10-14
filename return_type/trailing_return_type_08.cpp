#include <iostream>

template <typename T>
auto print1(T const& t) -> decltype(std::cout << t) 
{
	return std::cout << t; 
}

template <typename T>
auto print2(T const& t) 
{
	return std::cout << t;
}

int main()
{
	print1(10) << 20; //valid
	//print2(10) << 20; //invalid
}
