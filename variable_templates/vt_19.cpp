#include <iostream>

template<typename T>
T counter = T(0);

int main()
{
	++counter<int>;
	++counter<double>;
	++counter<long>;

	std::cout << counter<int> << counter<double>
		<< counter<long> << counter<unsigned>;
}
