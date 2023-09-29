#include <type_traits>
template <typename T, typename U>
using mytest_t = decltype(
	std::declval<T>().foo(std::declval<U&>())
	);

template <typename T, typename U, typename = void>
struct is_my_thing : std::false_type {

};

template <typename T, typename U>
struct is_my_thing<T, U, std::void_t<mytest_t<T, U>>> : std::true_type {

};


