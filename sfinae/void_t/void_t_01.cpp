#include <type_traits>

template<typename T, typename = void>
struct has_type_member : std::false_type {};

template<typename T>
struct has_type_member<T, std::void_t<typename T::type>> : std::true_type {};


template<typename T>
bool constexpr has_type_member_v = has_type_member<T>::value;

struct A {};
struct B { typedef int type; };

template <typename T, typename = std::enable_if_t<has_type_member_v<T>>>
void foo(T x);

int main()
{
	constexpr auto ba = has_type_member_v<A>;
	constexpr auto bb = has_type_member_v<B>;
	//foo(A{}); //error
	foo(B{});
}


