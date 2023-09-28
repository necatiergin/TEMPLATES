#include <iostream>

template <typename T>
struct Nec {
	//...
	void func(T x)
	{
		std::cout << "primary\n";
	}
};

template <>
void Nec<int>::func(int x)
{
	std::cout << "Nec<int>::func(int)\n";
}


int main()
{
	Nec<double> dnec;
	dnec.func(12);
	Nec<int> inec;
	inec.func(12);
}
