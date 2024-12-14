#include <type_traits>

template <typename T, typename = void>
struct is_container : std::false_type {};


template <typename T>
struct is_container<T,
	std::void_t<
	typename T::size_type,
	typename T::value_type,
	typename T::iterator,
	typename T::const_iterator,
	decltype(std::declval<T>().size()),
	decltype(std::declval<T>().begin()),
	decltype(std::declval<T>().end())>>
	: std::true_type{};

template <typename T, typename U = void>
constexpr bool is_container_v = is_container<T, U>::value;
		
struct X {};

#include <list>

//static_assert(is_container_v<A>);
static_assert(is_container_v<std::list<int>>);

