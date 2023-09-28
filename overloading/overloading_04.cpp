#include <cstring>
#include <iostream>


template<typename T>
const T& Max(T const& a, T const& b)
{
	return b < a ? a : b;
}

const char* Max(const char* a, const char* b)
{
	return std::strcmp(b, a) < 0 ? a : b;
}

template<typename T>
const T& Max(const T& a, const T& b, const T& c)
{
	return Max(Max(a, b), c);
}

int main()
{
	auto x = Max(7, 42, 68);
	char const* s1 = "frederic";
	char const* s2 = "anica";
	char const* s3 = "lucas";
	auto y = Max(s1, s2, s3);  //ub
}
