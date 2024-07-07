#include <type_traits>

template< class, class = void >
struct has_pre_increment_member : std::false_type { };


template< class T >
struct has_pre_increment_member<T, std::void_t
									<
									decltype(++std::declval<T&>())
									>
							   > : std::true_type { };

template<typename T>
constexpr bool has_pre_increment_member_v = has_pre_increment_member<T>::value;

struct A {};
struct B {
	B& operator++();
};

int main()
{
	constexpr auto b1 = has_pre_increment_member_v<int>;  //true
	constexpr auto b2 = has_pre_increment_member_v<A>;  //false
	constexpr auto b3 = has_pre_increment_member_v<B>;  //false
}
