#include <iostream>
#include <type_traits>

template<typename ...>
class Base {
public:
	Base()
	{
		std::cout << typeid(Base).name() << '\n';
	}
};

template <typename ...Types>
class Der : public Base<Types* ...> {};

int main()
{
	Der<int, double, long> x;

	static_assert(std::is_base_of_v<Base<int*, double*, long*>, decltype(x)>);
}
