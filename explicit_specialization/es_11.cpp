#include <iostream>

template <typename T>
T getmax(T x, T y)
{
	return x > y ? x : y;
}

int main()
{
	const char* p1 = "zeynep";
	const char* p2 = "ali";

	//addresses compared not strings
	std::cout << getmax(p1, p2) << '\n';
	std::cout << getmax(p2, p1) << '\n';
}
