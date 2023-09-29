#include <iostream>
#include <vector>
#include <list>

template <typename T, typename U, template <typename, typename> typename C>
std::ostream& operator<<(std::ostream& os, C<T, U> const& c)
{
	for (auto const& e : c)
	{
		os << e << ' ';
	}
	return os;
}

int main()
{
	std::vector ivec{10, 20, 30, 40, 50};
	std::list ilist{2, 3, 5, 7, 11, 13};

	std::cout << ivec << '\n';
	std::cout << ilist << '\n';
}
