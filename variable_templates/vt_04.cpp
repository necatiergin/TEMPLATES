#include <type_traits>

template<typename T>
constexpr bool IsPointer_v = std::is_pointer<T>::value;

int main()
{
	constexpr auto f = IsPointer_v<int>;
	constexpr auto t = IsPointer_v<int *>;
}
