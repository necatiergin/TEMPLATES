#include <iostream>

template<class T>
void f(T)
{
	std::cout << "f(T) overload\n";
}

template<class T>
void f(T const*)
{
	std::cout << "f(T const *) overload\n";
}

int main()
{
	const int* p = nullptr;
	f(p);
}
