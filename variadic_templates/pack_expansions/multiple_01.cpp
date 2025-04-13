#include <iostream>
#include <string>
#include <vector>

template <typename ...Args>
class Myclass {
public:
	template <typename ...Ts>
	Myclass(Ts&& ...) {}
};

template <typename ...Ts>
void func(Ts ...args)
{
	Myclass<Ts...>  m1;
	Myclass<Ts...>  m2(args...);
}

template <typename ...Ts>
void foo(Ts&&...args)
{
	Myclass<Ts...>  m3(std::forward<Ts>(args)...);
}

int main()
{
	std::string name{ "necati" };
	std::vector vec{ 2, 6, 8, 1 };

	foo(name, vec, 10);
}
