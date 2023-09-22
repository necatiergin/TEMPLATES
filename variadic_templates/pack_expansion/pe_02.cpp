#include <iostream>

template<typename ...TS>
class Var {
public:
	Var()
	{
		std::cout << typeid(Var).name() << '\n';
	}
};

template <typename ...Types>
class Myclass : public Var<Types* ...> { };

int main()
{
	Myclass<int, double, long> x;
}
