#include <iostream>


template <typename ...Args>
class Myclass {

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
