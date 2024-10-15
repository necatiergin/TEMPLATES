#include <iostream>

template <typename T>
class Nec {
public:
	inline static int ms{ 0 };
};

int main()
{
	Nec<char>::ms++;
	Nec<int>::ms++;
	Nec<float>::ms++;
	Nec<double>::ms++;

	std::cout << Nec<char>::ms
		<< Nec<int>::ms
		<< Nec<float>::ms
		<< Nec<double>::ms;
}
