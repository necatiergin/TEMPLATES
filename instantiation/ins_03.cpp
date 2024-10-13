#include <iostream>

template <typename T>
struct Nec
{
	static T ms;
};

template <typename T> 
T Nec<T>::ms = 0;

int main()
{
	Nec<int> n1;
	Nec<double> n2;
	Nec<double> n3;

	std::cout << n1.ms << '\n'; // 0
	std::cout << n2.ms << '\n'; // 0
	std::cout << n3.ms << '\n'; // 0
	
	n2.ms = 23;

	std::cout << n1.ms << '\n'; // 0
	std::cout << n2.ms << '\n'; // 23
	std::cout << n3.ms << '\n'; // 23
}
