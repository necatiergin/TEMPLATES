#include <iostream>
#include <type_traits>

template<typename ...TS>
class Var {
	//...
};

template <typename ...Types>
class Myclass : public Var<Types...> {
public:
	constexpr static size_t size = sizeof...(Types);
};

int main()
{
	constexpr auto n = Myclass<int, double>::size; //2
	static_assert(std::is_base_of_v<Var<int, double>, Myclass<int, double>>); //holds
}
