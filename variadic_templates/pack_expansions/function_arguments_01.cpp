#include <initializer_list>
#include <iostream>

template <typename ...Args>
void Print(const Args &...args)
{
	(void)std::initializer_list<int>{(std::cout << args << " ", 0)...};
	std::cout << '\n';
}

template <typename T>
T square(T x)
{
	return x * x;
}

template<typename... Args>
void call_foo(Args... args)
{
	Print(args...);
	Print((args * args)...);
	Print(&args...);
	Print(square(args)...);
	Print(20, square(args * 10) ...);  
}

int main()
{
	call_foo(1, 2, 3, 4);
}
