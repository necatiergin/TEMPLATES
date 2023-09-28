#include <iostream>
#include <tuple>

template <typename T>
class A {};

template <typename T>
class B {};

template <typename T>
class C {};

template <template <typename> typename ...Ts>
class Myclass {
public:
	Myclass()
	{
		std::cout << typeid(Myclass).name() << '\n';
		std::cout << typeid(std::tuple<Ts<int>...>).name() << '\n';
		std::cout << typeid(std::tuple<Ts<double>...>).name() << '\n';
	}
};

int main()
{
	Myclass<A, B, C> x;
}
