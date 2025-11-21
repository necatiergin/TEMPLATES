#include <iostream>

template<class T>
void f(T(*)(T))
{
	std::cout << "f(T(*)(T)) overload\n";
}

template<class T>
void f(T)
{
	std::cout << "f(T) overload\n";
}

int g(int) { return 1; }

int main()
{
	f(g);
}
