#include <iostream>

template <typename T>
struct Myclass {
	Myclass()
	{
		std::cout << "primary template Myclass<T>\n";
	}
};

template <>
struct Myclass<int> {
	Myclass()
	{
		std::cout << "Myclass<int> explicit specialization\n";
	}
};


int main()
{
	Myclass<char> c;
	Myclass<double> d;
	Myclass<int> i;
}
