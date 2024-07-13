#include <type_traits>

template <class T, class = void>
struct has_foo : std::false_type {};

template <class T>
struct has_foo<T, std::void_t<decltype(std::declval<T&>().foo())>> : std::true_type {};


template <typename T, typename U = void>
constexpr bool has_foo_v = has_foo<T, U>::value;


class A {
public:
	void foo();
};

int main()
{
	constexpr auto x = has_foo_v<A>;
}
