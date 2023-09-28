#include <cstring>
#include <string>
#include <iostream>

template<typename T>
T Max(T a, T b)
{
	std::cout << "Max(T a, T b)" << '\n';

	return b < a ? a : b;
}

template<typename T>
T* Max(T* a, T* b)
{
	std::cout << "Max(T* a, T* b)" << '\n';
	return *b < *a ? a : b;
}

const char* Max(const char* a, const char* b)
{
	std::cout << "Max(const char*, const char*)" << '\n';
	return std::strcmp(b, a) < 0 ? a : b;
}

int main()
{
	int a = 7, b = 42;
	auto mx = ::Max(a, b);
	std::string str1{ "necati" };
	std::string str2{ "ergin" };
	auto m2 = Max(str1, str2);
	int* ptr1 = &b;
	int* ptr2 = &a;
	auto m3 = Max(ptr1, ptr2);
	const char* p = "hello";
	const char* q = "world";
	auto m4 = Max(p, q);
}
