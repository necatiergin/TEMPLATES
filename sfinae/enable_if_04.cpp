#include <type_traits>
#include <iostream>

template<typename T>
std::enable_if_t<std::is_pointer_v<T>> 
func(T x)
{
	std::cout << "template\n";
}

int func(double x)
{
	std::cout << "func double\n";
	return 1;

}

int main()
{
	func(0);
	int *ptr{ nullptr };
	func(ptr);
}
