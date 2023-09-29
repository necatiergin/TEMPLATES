template<typename T>
T summer(T v)
{
	return v;
}

template<typename T, typename... Args>
T summer(const T& first, const Args& ... args)
{
	return first + summer(args...);
}

#include <iostream>
#include <string>

int main()
{
	std::cout << summer(10, 20, 30, 80, 17) << '\n';
	std::string s1 = "nec", s2 = "ati ", s3 = "Er";
	std::cout << summer(s1, s2, s3, "gin") << '\n';
}
