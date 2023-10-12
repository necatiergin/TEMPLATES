#include <type_traits>

//C++17

template <auto I>
using integral_constant = std::integral_constant<decltype(I), I>;

