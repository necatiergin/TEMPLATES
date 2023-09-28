#include <iostream>

template <typename T>
struct Myclass {
	Myclass()
	{
		std::cout << "primary template\n";
	}
};

template <typename T>
struct Myclass<T[10]> {
	Myclass()
	{
		std::cout << "Myclass<T[10]> specialization>\n";
	}
};

int main()
{
	Myclass<int[5]> m1;
	Myclass<int[10]> m2;
	Myclass<double> m3;
	Myclass<double[10]> m4;
}
