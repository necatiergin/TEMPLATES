#include <iostream>

template <typename>
struct Nec;   //declaration only

template <typename T>
struct Nec<T*> {
	Nec()
	{
		std::cout << "Partial specialization for pointer types\n";
	}
};


template <typename T>
struct Nec<T&> {
	Nec()
	{
		std::cout << "Partial specialization for L value reference types\n";
	}
};


int main()
{
	Nec<int*> n1{};
	Nec<int&> n2{};
	Nec<const int&> n3{};
	//Nec<int&&> n4{}; //error
}
