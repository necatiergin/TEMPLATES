#include <iostream>

template <typename T>
struct Nec {
	Nec(T) {
		std::cout << "primary template\n";
	}
};

template <>
struct Nec<int> {
	Nec(const double& x)
	{
		std::cout << " Nec<int> specialization\n";
	}
};

int main()
{
	Nec x{ 324 };
}
