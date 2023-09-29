// SFINAE by function return type

#include <type_traits>
#include <iostream>

template <class T>
typename std::enable_if_t<std::is_arithmetic_v<T>, T>
func(T t)
{
	std::cout << "func<arithmetic T>\n";
	
	return t;
}
