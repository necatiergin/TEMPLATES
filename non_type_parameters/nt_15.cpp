#include <array>
#include <utility>

template<auto X>
class Nec {
	//...
};

int main()
{
	Nec<std::pair{10, 4.5 }> n1; // valid since C++20
	Nec<std::array{2, 3, 5, 7, 11, 13} > n2; // valid since C++20
}
