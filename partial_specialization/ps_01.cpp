#include <iostream>

template <typename T>
struct Myclass {
	Myclass()
	{
		std::cout << "primary template\n";
	}
};

template <typename T>
struct Myclass<T*> {
	Myclass()
	{
		std::cout << "Myclass<T*> specialization>\n";
	}
};

int main()
{
	Myclass<int> m1;
	Myclass<double> m2;
	Myclass<int*> m3;
	Myclass<float*> m4;
}
