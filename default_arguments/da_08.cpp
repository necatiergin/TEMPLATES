#include <iostream>
#include <type_traits>

template <typename T, typename U, typename W = int>
class Nec;

template <typename T, typename U = double, typename W>
class Nec;

template <typename T = char, typename U, typename W>
class Nec {

};

int main()
{
	Nec<> x;
	//Nec x;

	constexpr auto b = std::is_same_v<decltype(x), Nec<char, double, int>>;

	std::cout << b << '\n';
}
