#include <iostream>

template <typename T, typename U>
struct Myclass {
	Myclass()
	{
		std::cout << "primary template\n";
	}
};

template <typename T>
struct Myclass<T, T> {
	Myclass()
	{
		std::cout << "Myclass<T, T> specialization>\n";
	}
};

int main()
{
	Myclass<int, int> m1;
	Myclass<double, int> m2;
	Myclass<int*, int*> m3;
	Myclass<float, float> m4;
}
