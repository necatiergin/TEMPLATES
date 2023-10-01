#include <ostream>

template <typename T, typename... Args>
std::ostream& print(std::ostream& os, const T& t, const Args& ...rest)
{
	os << t;

	if constexpr (sizeof...(rest) > 0)
		os << ", ";
	else
		os << "\n";

	if constexpr(sizeof...(rest) != 0)
		print(os, rest...); 

	return os;
}

#include <iostream>

int main()
{
	print(std::cout, 45, "ali", 3.87, 'A');
}
