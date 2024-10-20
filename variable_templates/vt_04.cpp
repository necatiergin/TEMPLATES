#include <type_traits>

template<typename T>
constexpr bool IsPointer_v = std::is_pointer<T>::value;

int main()
{
	constexpr auto b1 = IsPointer_v<int>;
	constexpr auto b2 = IsPointer_v<int*>;
}
