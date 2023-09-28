#include <iostream>

template <typename T>
class A {
public:
	static int x;
};

template <typename T>
int A<T>::x = 99;

template <>
int A<int>::x = 20;


int main()
{
	std::cout << A<double>::x << '\n';
	std::cout << A<int>::x << '\n';
}
