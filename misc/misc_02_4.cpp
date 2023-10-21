#include <type_traits>

template <typename ...>
constexpr bool always_false_v = false;

template <typename T>
void func(T x)
{
	if constexpr (std::is_integral_v<T>) {
		//code here
	}
	else {
		static_assert(always_false_v<T>, "only for integral types");
	}
}

int main()
{
	//func(2.7);
}
