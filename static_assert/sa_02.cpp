#include <type_traits>

template<typename T>
void func(T)
{
	//static_assert(std::is_pointer_v<T>, "template argument must be pointer type");
	static_assert(std::is_pointer<T>{}, "template argument must be pointer type");
}

int main()
{
	int x{};
	int* p{ &x };

	//func(x);
	func(p);
}
