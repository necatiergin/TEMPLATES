#include <type_traits>

template < class...>
inline constexpr bool always_false()
{
	return false;
}

template <typename T>
void func(T x)
{
	if constexpr (std::is_integral_v<T>) {
		//code here
	}
	else {
		static_assert(always_false<T>(), "only for integral types");
	}
}

int main()
{
	//func(2.7);
}
