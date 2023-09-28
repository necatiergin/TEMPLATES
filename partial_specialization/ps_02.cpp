#include <iostream>

template<typename T>
struct Helper {
	static void func(T x)
	{
		std::cout << "func(T x)\n";
	}
};

template<typename T>
struct Helper <T*> {
	static void func(T* ptr)
	{
		std::cout << "func(T *ptr)\n";
	}
};

int main()
{
	int x = 10;

	Helper<int*>::func(&x);
	Helper<int>::func(x);
}
