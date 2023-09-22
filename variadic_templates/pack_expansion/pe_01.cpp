#include <iostream>

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
	constexpr auto n = Myclass<int, double>::size;
}
