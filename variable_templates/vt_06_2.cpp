#include <iostream>

template <auto N>
constexpr bool is_positive{ N > 0 };

class Wrapper {
public:
	constexpr Wrapper(int x) :mx{x} {}
	constexpr bool operator>(const Wrapper other)const
	{
		return mx > other.mx;
	}
	int mx;
};

int main()
{
	boolalpha(std::cout);

	std::cout << is_positive<4> << '\n';
	std::cout << is_positive<-5> << '\n';
	std::cout << is_positive<4.5> << '\n';
	std::cout << is_positive<-5L> << '\n';
	std::cout << is_positive<Wrapper{3}> << '\n';
	std::cout << is_positive<Wrapper{-2}> << '\n';
}
