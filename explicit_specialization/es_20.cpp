#include <iostream>

template <typename T>
struct Myclass {
	void foo();
};

template <>
struct Myclass <int[]>
{
	void bar();
};

int main()
{
	Myclass<int[5]>{}.foo();
	Myclass<int[]>{}.bar();
}
