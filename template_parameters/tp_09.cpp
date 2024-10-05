#include <type_traits>

template <bool AddOrRemoveRef> struct Fun_;

template <>
struct Fun_<true> {
	template <typename T>
	using type = std::add_lvalue_reference<T>;
};

template <>
struct Fun_<false> {
template <typename T>
	using type = std::remove_reference<T>;
};

template <typename T>
using Res_ = Fun_<false>::template type<T>;
	
Res_<int&>::type i = 5;
