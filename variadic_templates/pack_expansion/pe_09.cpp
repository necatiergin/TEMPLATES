#include <iostream>
#include <tuple>

template <typename T, typename U, typename ... Args>
void foo()
{
	std::tuple<T, U, Args...> t1;
	std::cout << typeid(t1).name() << '\n';
	std::tuple<T, Args..., U> t2;
	std::cout << typeid(t2).name() << '\n';
	std::tuple<Args..., T, U> t3;
	std::cout << typeid(t3).name() << '\n';
	std::tuple<U, T, Args...> t4;
	std::cout << typeid(t4).name() << '\n';
}

int main()
{
	foo<int, double, long, char>();
}
