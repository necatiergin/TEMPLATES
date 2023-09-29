//compile-time recursive pack expansion

#include <ostream>

template<typename T>
std::ostream& print(std::ostream& os, const T& t)
{
	return os << t;		// no separator after the last element in the pack
}

// this version of print will be called for all but the last element in the pack
template <typename T, typename... Args>
std::ostream& print(std::ostream& os, const T& t, const Args& ...rest)
{
	os << t << ", "; // print the first argument
	return print(os, rest...); // recursive call; print the other 	arguments
}

#include <iostream>

int main()
{
	print(std::cout, 45, "ali", 3.87, 'A');
}
