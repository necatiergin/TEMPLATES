#include <iostream>

template <auto N>
struct Myclass {
	Myclass()
	{
		std::cout << "type of " << N << " is " << typeid(N).name() << '\n';
	}
};

int g{};

int main()
{
	Myclass<5> m1;
	Myclass<7u> m2;
	Myclass<'A'> m3;
	Myclass<4.56> m4;
	Myclass<&g> m5;
}
