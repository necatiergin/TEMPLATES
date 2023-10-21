#include <type_traits>

template <typename T>
void func(T x)
{
	if constexpr (std::is_integral_v<T>) {
		//code here
	}
	else {
		static_assert(sizeof(T) != sizeof(T), "only for integral types");
	}
}


int main()
{
	func(2.4);
}
