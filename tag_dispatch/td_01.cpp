#include <type_traits>
#include <iostream>

template<typename T>
void func_impl(T x, std::true_type)
{
	std::cout << "tam sayi turleri icin kod\n";
}

template<typename T>
void func_impl(T x, std::false_type)
{
	std::cout << "tam sayi olmayan turler icin kod\n";
}


template<typename T>
void func(T x)
{
	func_impl(x, std::is_integral<T>{});
}


int main()
{
	func(23);
	func(1.2);
}
