#include <iostream>

template <int... Vals>
constexpr int Sum = (... + Vals);

template <int... Vals>
constexpr int SumSquare = (... + (Vals * Vals));

int main()
{
	std::cout << Sum<1> << '\n';
	std::cout << Sum<1, 2> << '\n';
	std::cout << Sum<1, 34, 65> << '\n';
	std::cout << SumSquare<1, 3, 5, 7> << '\n';
}
