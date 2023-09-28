#include <iostream>

template<typename T>
void func(T)
{
	std::cout << 1;
}

template<typename T>
void func(T*)
{
	std::cout << 2;
}

template<>
void func(int*)
{
	std::cout << 3;
}


int main()
{
	int* p = nullptr;

	func(p);
}
