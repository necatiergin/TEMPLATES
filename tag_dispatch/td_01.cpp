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
	func_impl(x, typename std::is_integral<T>::type{});
	//func_impl(x, typename std::is_integral<T>{});  //kalıtım
}


int main()
{
	func(1.2);
}
