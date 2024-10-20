#include <iostream>
#include <type_traits>

template<typename ...>
class Nec {
public:
	Nec()
	{
		std::cout << typeid(Nec).name() << '\n';
	}
};

template <typename ...Types>
class Erg : public Nec<Types* ...> { };
 
int main()
{
	Erg<int, double, long> x;

	static_assert(std::is_base_of_v<Nec<int*, double*, long*>, decltype(x)>);
}
