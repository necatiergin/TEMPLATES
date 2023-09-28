#include <iostream>
#include <type_traits>

template <typename T>
class Nec {

};

template <template <typename> typename Temp>
class Myclass {
public:
	Myclass()
	{
		Temp<int> x;
		Temp<double> y;

		std::cout << typeid(Myclass).name() << '\n';
		std::cout << typeid(Temp).name() << '\n';
		std::cout << typeid(x).name() << '\n';
		std::cout << typeid(y).name() << '\n';
	}
};

int main()
{
	Myclass<Nec> x;

	static_assert(std::is_same_v<decltype(x), Myclass<Nec>>);
}
