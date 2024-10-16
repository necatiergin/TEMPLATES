#include <iostream>

template<size_t N>
struct Fact {
	static const std::size_t value{ N > 1 ? N * Fact<N - 1>::value : 1 };
};

template<>
struct Fact<0> {
	static const std::size_t value{ 1 };
};

template <size_t N>
constexpr std::size_t Fact_v = Fact<N>::value;

int main()
{
	constexpr auto val = Fact_v<5>;
	std::cout << val << '\n';
}
