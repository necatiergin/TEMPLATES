#include <type_traits>
#include <iostream>

void f(int&)
{
	std::cout << "int&\n";
}

void f(const int&)
{
	std::cout << "const int&\n";
}


void f(int &&)
{
	std::cout << "int&&\n";
}

template <typename T>
T&& Forward(typename std::remove_reference<T>::type& param)
{
	return static_cast<T&&>(param);
}

template <typename T>
void foo(T&& t)
{
	f(Forward<T>(t));
}

int main()
{
	int x = 10;
	f(x); foo(x);
	const int cx{};
	f(cx); foo(cx);
	f(int{}); foo(int{});
}
