#include <type_traits>

template <typename T>
void func(T x)
{
	if constexpr (std::is_integral_v<T>) {
		//code here
	}
	else {
		static_assert(false, "only for integral types");
	}
}
